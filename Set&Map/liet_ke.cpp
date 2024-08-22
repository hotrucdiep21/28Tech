#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        if(s.count(arr[i])==0) {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
    
     
    return 0;
}