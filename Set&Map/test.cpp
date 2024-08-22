#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    int n; cin >> n;
    int arr[n];
    for (int &x: arr)
    {
        cin >> x;
    }

    set<int> s;
    for(int &x: arr) {
        s.insert(x);
    }

    for(int x: s) {
        cout << x << " ";
    }
    

    return 0;
}
