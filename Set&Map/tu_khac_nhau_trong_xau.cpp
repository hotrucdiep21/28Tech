#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<string, int> mapString;
    string word;

    while (cin >> word)
    {
        mapString[word]++;
    }
    
    cout << mapString.size() << endl;
    if(!mapString.empty()) {
        auto first = mapString.begin();
        auto last = mapString.rbegin();

        cout << first->first << " " << last->first;
    }
    
    
    return 0;
}