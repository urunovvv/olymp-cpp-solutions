#include <bits/stdc++.h>
int main(){
    long long a,b,n;
    std::cin >> a >> b >> n;
    std::cout << (b*n <= a or b >= a ? 1 : 2);
}
