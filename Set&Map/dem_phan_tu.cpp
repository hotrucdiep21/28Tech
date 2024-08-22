#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i]))
        {
            cout << a[i] << " " << mp[a[i]] << endl;

            mp.erase(a[i]);
        }
    }

    // for(auto x: mp) {
    //     cout << x.first <<" " <<x.second << endl;
    // }

    return 0;
}