#include<bits/stdc++.h>

using namespace std;

bool check(int a) {
    if(a < 2) {
        return true;
    }

    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0) {
            return true;
        }
    }

    return false;
    
}

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
    int count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(check(arr[i])) {
            continue;
        } else
        {
            count++;
            sum+=arr[i];
        }
        
    }
    cout << count << endl;
    cout << sum << endl;
    cout << sum / count;

    
    return 0;
}