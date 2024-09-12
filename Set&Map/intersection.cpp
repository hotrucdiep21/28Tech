#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m; cin >> n; cin >> m;
    int arr[n];
    for(int &x: arr) {
        cin >> x;
    }
    set<int> setM;
    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        setM.insert(x);

    }

    for(auto x: arr) {
        if (setM.count(x) == 1)
        {
            cout << x <<  " ";
            setM.erase(x);
        }
        
    }

    return 0;
}