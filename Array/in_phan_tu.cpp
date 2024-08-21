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
    // -----------
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0 && arr[i]%2==0) {
            cout << i << " " << arr[i] << endl;
            check = 1;
        } 
    }
    if(check != 1) {
        cout << "NONE";
    }
    
    return 0;
}