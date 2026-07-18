#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("input.txt", ios::in);
    ofstream fout("output.txt", ios::out);
    string s;
    stack<int>nums;
    stack<char>ops;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int i = 0;
    while (i < n) {
        if (s[i] == '(') ops.push(s[i]);
        else if (s[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                if (op == '+') nums.push(a + b);
                else if (op == '-') nums.push(a - b);
                else if (op == '*') nums.push(a * b);
                else if (op == '/') nums.push(a / b);
            }
            ops.pop();
        }
        else if (isdigit(s[i])) {
            int num = 0;
            while (i < n && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            nums.push(num);
        }
        else {
            while (!ops.empty() && ((s[i] == '+' || s[i] == '-') || (s[i] == '*' || s[i] == '/') && (ops.top() == '*' || ops.top() == '/'))) {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                if (op == '+') nums.push(a + b);
                else if (op == '-') nums.push(a - b);
                else if (op == '*') nums.push(a * b);
                else if (op == '/') nums.push(a / b);
            }
            ops.push(s[i]);
        }
        i++;
    }
    while (!ops.empty()) {
        int b = nums.top(); nums.pop();
        int a = nums.top(); nums.pop();
        char op = ops.top(); ops.pop();
        if (op == '+') nums.push(a + b);
        else if (op == '-') nums.push(a - b);
        else if (op == '*') nums.push(a * b);
        else if (op == '/') nums.push(a / b);
    }
    cout << nums.top() << endl;
}