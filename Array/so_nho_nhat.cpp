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
    // ================
    float min = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            count++;
        }
        
    }

    cout << min << endl;
    cout << count;
    

    return 0;
}
