#include <bits/stdc++.h>
using namespace std;

vector<int> p;

int findp(int x){
    if(p[x] == x) return x;
    return p[x] = findp(p[x]);
}

void unite(int a, int b){
    a = findp(a);
    b = findp(b);
    if(a != b) p[a] = b;
}

int main(){
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    int n, q;
    fin >> n >> q;
    p.resize(2*n + 1);
    for(int i = 1; i <= 2*n; i++) p[i] = i;
    while(q--){
        int t, a, b;
        fin >> t >> a >> b;
        if(t == 1){
            unite(a, b);
            unite(a+n, b+n);
        }else if(t == 2){
            unite(a, b+n);
            unite(a+n, b);
        }else{
            if(findp(a) == findp(b+n) || findp(a+n) == findp(b))
                fout << "NO\n";
            else
                fout << "YES\n";
        }
    }
}