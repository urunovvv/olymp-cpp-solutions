#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int l = 0, r = n, counter = 0;
    while (l < r){
        counter++;
        int mid = (l + r) / 2;
        cout << mid << endl;
        bool q;
        cin >> q;
        // if (l == r){
        //     printf("! %d. Found by %d steps\n", l, counter);
        //     fflush(stdout);
        // }
        if (!q){ 
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    printf("! %d", r);
    fflush(stdout);
}