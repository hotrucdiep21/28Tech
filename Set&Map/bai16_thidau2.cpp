#include<bits/stdc++.h>
using namespace std;

int getPos(string str) {
    for (int i = 0; i < str.length(); i++) {
        if(str[i] == '-') 
            return i;
    }
    return -1;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; 
    cin >> n;
    cin.ignore();  // To clear the newline character left by cin

    map<string, multiset<string>> mp;

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);

        int pos = getPos(str);
        string first = str.substr(0, pos);
        string second = str.substr(pos + 2);

        mp[first].insert(second);
        mp[second].insert(first);
    }

    for(auto &x: mp) {
        cout << x.first << ": ";
        for(auto it = x.second.begin(); it != x.second.end(); ++it) {
            if(it != x.second.begin()) cout << ", ";
            cout << *it;
        }
        cout << endl;
    }

    return 0;
}
