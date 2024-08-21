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
    int k; cin >> k;
    // ----------------
    int min = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > k) {
            max++;
        } else if(arr[i] < k) {
            min++;
        }
    }

    cout << min << endl;
    cout << max;
    
    return 0; 
}