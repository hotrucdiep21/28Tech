#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    multiset<int> mul;
    for (auto x : arr)
        mul.insert(x);

    int k;
    cin >> k;
    mul.erase(k);

    if (!mul.empty())
    {
        cout << *mul.begin() << endl;
        cout << *mul.rbegin() << endl;
    }

    for (auto x : mul)
    {
        cout << x << " ";
    }

    return 0;
}