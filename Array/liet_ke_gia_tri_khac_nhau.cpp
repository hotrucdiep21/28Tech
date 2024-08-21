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
    
    // --------------------
    // set<int> numSet;
    // for (int i = 0; i < n; i++)
    // {
    //     numSet.insert(arr[i]);
    // }
    
    // for(auto x: numSet)
    //     cout << x << " ";
    // bool check;
    // for (int i = 0; i < n; i++)
    // {
    //     check=true;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if(arr[i] == arr[j] && i != j) 
    //             check = false;
    //     }
    //     if(check) {
    //         cout << arr[i] << " ";
    //     }
        
    // }
    bool check;
    for (int i = 0; i < n; i++)
    {
        check=true;
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j] && i !=j) {
                check=false;
            }
        }
        if(check) {
            cout << arr[i] <<" ";
        }
        
    }
    


    return 0;
}