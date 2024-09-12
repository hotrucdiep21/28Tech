#include <bits/stdc++.h>
using namespace std;

vector<int> check(int arr[], int n)
{
    vector<int> result;
    result.push_back(arr[0]);
    int mark = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > mark) {
            mark = arr[i];
            result.push_back(arr[i]);
        }
    }
    return result;
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

    for(auto item: check(arr, n)) {
        cout << item << " ";
    }

    return 0;
}