#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;cin>>k;
    // ================
    int num = abs(arr[0]-arr[1]);
    sort(arr, arr+n);
    int minDistance = 1e9;
    for (int i = 1; i < n; i++)
    {
        minDistance = min(minDistance, arr[i]-arr[i-1]);
    }
    
    
    cout << minDistance;
    
    return 0;
    
}