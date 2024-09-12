#include<bits/stdc++.h>
using namespace std;


double averageScore(vector<pair<int, int>> v) {
    int sum1 = 0; int sum2=0;
    for(auto x: v) {
        sum1 += x.first*x.second;
        sum2 += x.first;
    } 
    return (double)sum1/sum2;
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    // vector<pair<int, int>> vt;
    map<string, vector<pair<int, int>>> mp;
    string name;
    while (cin >> name)
    {
        int a, b; 
        cin >>a >> b;
        mp[name].push_back({a, b});
    }

    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        cout << (*it).first << ": ";
        cout << fixed << setprecision(2) << (averageScore((*it).second));
        cout << endl;
    }
 
    return 0;
}