#include <bits/stdc++.h>
using namespace std;
vector<int> merge(int a[], int b[], int n, int m)
{
    int i = 0;
    int j = 0;

    vector<int> result;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }
    while (j < m)
    {
        result.push_back(b[j]);
        j++;
    }
    while (i < n)
    {
        result.push_back(a[i]);
        i++;
    }
    return result;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> result = merge(arr1, arr2, n, m);

    for (auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}