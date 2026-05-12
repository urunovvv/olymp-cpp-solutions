/**
Количество сетей
В компании есть N компьютеров и M кабелей между ними.Каждый кабель соединяет
два компьютера. Компьютеры, соединённые напрямую или через другие компьютеры,
образуют сеть. Найдите количество независимых сетей.
Входные данные
Первая строка содержит два числа N и M. Далее идут M строк: u v. 1 ≤ N ≤ 2*10^5; 0 ≤ M ≤ 2*10^5
Выходные данные
Выведите одно число — количество сетей.
*/

#include <bits/stdc++.h>
using namespace std;

vector<bool> usd(2e5+2, false);
vector<vector<int>>g;
void dfs(int v){
    usd[v] = true;
    for (int to : g[v]){
        if (!usd[to]) dfs(to);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    while (m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (!usd[i]) {
            ++cnt;
            dfs(i);
        }
    }
    cout << cnt;
}
