#include <bits/stdc++.h>
using namespace std;

string check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << check(arr, n);

    return 0;
}