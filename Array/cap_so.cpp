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
    float sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            sum = arr[i]+arr[j];
            if (arr[i]+arr[j] == k)
            {
                cout << arr[i] <<" " << arr[j] << endl;
            }
            
        }
        
    }
    return 0;
    
}