#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b=t;
    }
    return a;
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
    int count = 0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int check = gcd(arr[i], arr[j]);
            if (check == 1)
            {
                cout << arr[i] <<" "<< arr[j] << endl;
                count+=1;
            }
        }
    }

    cout << count;

    return 0;
}