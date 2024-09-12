#include<bits/stdc++.h>
using namespace std;

int check(int arr[], int n) {
    int sum = 0;
    if(arr[0] > 25) {
        return -1;
    } else
    {
        sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            if(sum < arr[i]-25) {
                return -1;
            } else
            {
                sum+=25;
            }           
        }   
    }
    return 1;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(check(arr, n) > 0) {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    

    
    
    return 0;
}