#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    //========
    int count[100001]={0};
    for ( int i = 0; i < n; i++)
    {
        count[arr[i]] +=1;
    }

    for (int i = 0; i < 100001; i++)
    {
        if(count[i] != 0)
            cout << i <<" "<< count[i] << endl;
    }
    
    return 0;
}