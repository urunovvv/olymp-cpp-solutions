for _ in range(int(input())):
    n = input()
    n = n[::-1]
    ans = list()
    for i in range(len(n)):
        if n[i] == '0':
            continue
        ans.append(int(n[i]) * 10**i)
    print(len(ans))
    print(*ans)


# #include <bits/stdc++.h>
# using namespace std;

# void urunov(){
#     int n;
#     cin >> n;
#     vector<int> res;
#     while (n != 0){
#         if (n % (10 * (ln-1))){
#             break;
#         }
#         res.push_back(n / pow(10, (ln-1)));
#         n /= 10 * (ln-1);
#         ln--;
#     }
#     cout << res.size() <<'\n';
#     for (int i : res) cout << i << ' ';
# }

# int main(){
#     int t;
#     cin >> t;
#     while (t--){
#         urunov();
#     }
# }