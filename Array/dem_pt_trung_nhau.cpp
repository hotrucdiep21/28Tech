#include<bits/stdc++.h>
using namespace std;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    int arr[n];

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(s.count(arr[i]) == 1) {
            cout << arr[i] << " ";
            s.erase(arr[i]);
        }
    }
    cout << endl;
    for(auto &x: a) {
        cout << x << " ";
    }

    return 0;
}