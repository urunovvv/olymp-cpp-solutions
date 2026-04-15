#include <iostream>
#include <map>
using namespace std;

int main() {
    string card1, card2;
    map<string, int> ranks;
    ranks["2"] = 2;
    ranks["3"] = 3;
    ranks["4"] = 4;
    ranks["5"] = 5;
    ranks["6"] = 6;
    ranks["7"] = 7;
    ranks["8"] = 8;
    ranks["9"] = 9;
    ranks["10"] = 10;
    ranks["J"] = 11;
    ranks["Q"] = 12;
    ranks["K"] = 13;
    ranks["A"] = 14;
    cin >> card1 >> card2;
    if(ranks[card1] > ranks[card2]) {
        cout << "First" << endl;
    } else if(ranks[card2] > ranks[card1]) {
        cout << "Second" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}
