#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    while (cin >> t)
    {
        int n; cin >> n; int arrn[n];
        int m; cin >> m; int arrm[m];

        set<int> setN;
        for (int i = 0; i < n; i++)
        {
            cin>>arrn[i];
            setN.insert(arrn[i]);
        }
        
        set<int> setM;
        for (int i = 0; i < m; i++)
        {
            cin>>arrm[i];
            setM.insert(arrm[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (setM.count(arrn[i])!=1)
            {
                cout << arrn[i] << endl;
            }
            
        }
        
        
    }
    
    return 0;
}