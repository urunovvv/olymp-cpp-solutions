#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canMake(int k, const array<int,10>& cntOrig) {
    array<int,10> cnt = cntOrig;

    // Step A: assign H1 digits (tens of hours) preferring zeros (less restrictive)
    int use0 = min(cnt[0], k);
    int use1 = k - use0;
    if (use1 > cnt[1]) return false; // нет нужного числа единиц
    cnt[0] -= use0;
    cnt[1] -= use1;

    // Step B: for each H1==1 we need H2 from {0,1} (distinct stickers)
    int needH2_from01 = use1;
    int avail01 = cnt[0] + cnt[1];
    if (avail01 < needH2_from01) return false;
    // вычитаем эти H2 из cnt (из нулей в первую очередь)
    int take = min(cnt[0], needH2_from01);
    cnt[0] -= take;
    needH2_from01 -= take;
    if (needH2_from01 > 0) {
        cnt[1] -= needH2_from01;
        needH2_from01 = 0;
    }

    // Step C: allocate M1 (tens of minutes) Ч нужно k цифр из 0..5
    int sum05 = 0;
    for (int d = 0; d <= 5; ++d) sum05 += cnt[d];
    if (sum05 < k) return false;
    // вычтем k штук из 0..5 (любой выбор)
    int need = k;
    for (int d = 0; d <= 5 && need > 0; ++d) {
        int t = min(cnt[d], need);
        cnt[d] -= t;
        need -= t;
    }

    // Step D: теперь осталось обеспечить все M2 (k штук) и H2 дл€ H1==0 (use0 штук).
    int remainTotal = 0;
    for (int d = 0; d <= 9; ++d) remainTotal += cnt[d];
    int needAny = k + use0;
    if (remainTotal < needAny) return false;

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        array<int,10> cnt{};
        for (char c : s) cnt[c - '0']++;

        int lo = 0, hi = n / 4, ans = 0;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (canMake(mid, cnt)) {
                ans = mid;
                lo = mid + 1;
            } else hi = mid - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
