#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // ===================
    int oddSum = 0;
    int evenSum = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0) {
            odd++;
            oddSum += arr[i];
        } else {
            even++;
            evenSum +=arr[i];
        }
    }

    cout << even << endl;
    cout << odd << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;
    return 0;
}