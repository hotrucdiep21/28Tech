#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    

    while (cin >> n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        set<int> s;

        for (auto &i : arr)
        {
            s.insert(i);
        }

        cout << s.size() << endl;
    }

    return 0;
}