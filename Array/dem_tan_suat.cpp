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

    int check[10001] = {0};
    for (int i = 0; i < n; i++)
    {
        check[arr[i]]+=1;
    }

    for (int i = 0; i < 10001; i++)
    {
        if(check[i] != 0) {
            cout << i << " " << check[i] << endl;
        }
    }

    cout << endl;

    for (int i = 0; i < 10001; i++)
    {
        if(check[arr[i]] != 0) 
            cout << arr[i] << " " << check[arr[i]] << endl;
            check[arr[i]] = 0;
    }
    
    
    
    
    return 0;
}