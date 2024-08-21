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
    int cnt = 0;
    for (int i = 0; i <= k/2; i++)
    {
        int x = k-i;
        if(i != x) {
            cnt+= arr[i] * arr[x];
        } else
        {
            cnt+=arr[x]*(arr[x]-1)/2;
        }
        
    }

    cout << cnt;
    
    return 0;
    
}