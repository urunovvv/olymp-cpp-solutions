#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll ek, mk, hk, ef, mf, hf;
    cin >> ek >> mk >> hk >> ef >> mf >> hf;
    ll time_k = ek*3 + mk*20 + hk * 120;
    ll time_f = ef*3 + mf*20 + hf * 120;
    if (time_f < time_k){
        cout << "Fedya";
    }
    else if (time_f > time_k){
        cout << "Kirill";
    }
    else {
        cout << "Draw";
    }
    return 0;
}
