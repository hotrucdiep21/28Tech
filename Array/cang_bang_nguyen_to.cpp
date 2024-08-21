#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int num)
{
    if (num == 1)
        return false;
    if (num == 2)
        return true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
    {
        cin >> x;
    }

    //=========
    int sumL = 0;
    int sumR = 0;
    for (int i = 0; i < n; i++)
    {
        int sumL = 0;
        int sumR = 0;

        for (int j = 0; j < i; j++)
        {
            sumL += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            sumR += arr[j];
        }

        if (checkPrime(sumL) && checkPrime(sumR))
        {
            cout << i;
        }
    }
    return 0;
}