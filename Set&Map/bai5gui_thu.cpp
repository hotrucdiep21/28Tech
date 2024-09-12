#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> cal(int arr[], int n)
{
    vector<pair<int, int>> result;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        if (i == 0)
        {
            p.first = arr[i + 1] - arr[i];
            p.second = arr[n - 1] - arr[0];
            result.push_back(p);
        }
        else if (i == n - 1)
        {
            p.first = arr[i] - arr[i - 1];
            p.second = arr[i] - arr[0];
            result.push_back(p);
        }
        else
        {
            int minLeft = arr[i] - arr[i-1];
            int minRight = arr[i+1] - arr[i];
            int maxLeft = arr[i] - arr[0];
            int maxRight = arr[n-1] - arr[i];
            if(minLeft <= minRight) {
                p.first = minLeft;
            }
            else
            {
                p.first = minRight;
            }

            if(maxLeft >= maxRight) {
                p.second = maxLeft;
            }
            else
            {
                p.second = maxRight;
            }
            
            result.push_back(p);
            
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
    vector<pair<int, int>> result = cal(arr, n);
    for(auto x: result){
        cout << x.first <<" "<<x.second << endl;
    }


    return 0;
}