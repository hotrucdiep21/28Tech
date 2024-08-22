#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;cin >>n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    set<int> s;
    for(int x : arr) {
        s.insert(x);
    }
    cout << s.size();
    cout << endl;

    //-------
    for(auto it = s.rbegin(); it!=s.rend(); ++it) {
        cout << *it << " ";
    } 
    cout << endl;
    cout << *s.rbegin() << endl;
    cout << *s.rend() << endl;
    

    return 0;
} 