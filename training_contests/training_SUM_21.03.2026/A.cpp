/*
Даны две строки. Если обе строки являются числом, то выведите их сумму, иначе выведите 
конкатенацию этих строк. Числом считается строка, соблюдающая следующие условия: 
она может быть преобразована в число типа int или float. 
Число может содержать не более одного знака минус и не более одной десятичной точки.
В случае, если обе строки являются числами, но хотя бы одна из них является числом с 
плавающей точкой, то результатом будет число с плавающей точкой. Иначе результатом 
будет целое число.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> add_float(string a, string b){
    vector<int> res;
    int carry = 0;
    for (int i=a.size()-1, j=b.size()-1; i>=0 or j>=0 or carry; i--, j--){
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int sum = x + y + carry;
        res.push_back(sum % 10);
        carry = sum / 10;
    }
}

bool is_digit(string s){
    int point = 0;
    bool minus = false;
    int minus_idx = -1;
    for (int i=0; i<s.size(); i++){
        char c = s[i];
        if (c == '.'){
            if (point) return false;
            point = true;
        }
        else if (c == '-'){
            if (minus) return false;
            minus_idx = i;
            minus = true;
        }
        else if (!isdigit(c)) return false;
    }
    if (minus and minus_idx != 0) return false;
    return true;
}

float to_float(string s){
    float res = 0;
    int point = 0;
    bool minus = false;
    for (int i=0; i<s.size(); i++){
        char c = s[i];
        if (c == '.'){
            point = 1;
        }
        else if (c == '-'){
            minus = true;
        }
        else{
            res = res*10 + (c - '0');
            if (point) point++;
        }
    }
    if (point) res /= pow(10, point-1);
    if (minus) res *= -1;
    return res;
}

void strip(string &s){
    int start = 0, fin = s.size()-1;
    while (start < s.size() and (isspace(s[start]) or s[start] == '\t')) start++;
    while (fin >= 0 and (isspace(s[fin]) or s[fin] == '\t')) fin--;
    if (start > fin) s = "";
    else s = s.substr(start, fin-start+1);
}

vector<int> to_vector(float f){
    vector<int> res;
    string s = to_string(f);
    for (char c : s){
        if (isdigit(c)) res.push_back(c - '0');
    }
    return res;
}
int main(){
    string a,b;
    scanf("%s\n%s", &a, &b);
    strip(a);
    strip(b);
    if (is_digit(a) and is_digit(b)){
        float fa = to_float(a), fb = to_float(b);
        float res = add(fa, fb);
        if (res == (int)res) printf("%d\n", (int)res);
        else printf("%.6f\n", res);
    }

}