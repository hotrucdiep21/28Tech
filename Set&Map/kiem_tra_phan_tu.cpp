#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int testcase; cin >> testcase;
    while (testcase--)
    {
        int n; cin >> n;
        int arr[n];

        

        set<int> unique_element;
        for (int i = 0; i < n; i++)
        {
            cin >>arr[i];
            unique_element.insert(arr[i]);

        }
        int t; cin >> t;
        while (t--)
        {
            int element; cin >> element;
            if(unique_element.count(element)==1) {
                cout << "YES" << endl;  
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        
        
    }
    
    return 0;
}