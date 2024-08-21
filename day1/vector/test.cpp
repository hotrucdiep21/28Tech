#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v = {3, 6, 8, 2, 5, 7, 5};
    vector<int>::iterator it;

    for (auto x : v)
    {
        cout << x << " ";
    }

    pair<int, int> p = {200, 300};
    

    cout << p.first;
    

    return 0;
}