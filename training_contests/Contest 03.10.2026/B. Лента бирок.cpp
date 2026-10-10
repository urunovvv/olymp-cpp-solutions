/*
At the warehouse, Farrukh processes tags with integers. Tags arrive from left to right. He adds each new tag to the end of the tape. If the last two tags have the same number x, he replaces them with a single tag with the number x + 1. After replacement, he checks the last two tags again. Replacements continue until the last two tags are different or there are fewer than two tags on the tape. Then the next tag arrives. Determine the numbers that will remain after processing all tags.Input formatThe first line contains n (1 ≤ n ≤ 200000). The second line contains n integers a_i (0 ≤ a_i ≤ 10^9) in the order of arrival.Result formatIn the first line, output the number of remaining tags. In the second line, output their numbers from left to right.ExamplesInput data61 1 2 2 2 3Result24 3NotesExplanation of the example. After the first three tags, the tape turns into [3]. The fourth gives [3,2]. After the fifth: [3,2,2] → [3,3] → [4]. The last one forms [4,3].
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // ifstream fin("test.txt");
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    vector<int> ans;
    for (int i : a){
        ans.push_back(i);
        while (ans.size() >= 2 && ans[ans.size() - 1] == ans[ans.size() - 2]){
            int x = ans.back();
            ans.pop_back();
            ans.pop_back();
            ans.push_back(x + 1);
        }
    }
    cout << ans.size() << endl;
    for (int i : ans) cout << i << " ";

}