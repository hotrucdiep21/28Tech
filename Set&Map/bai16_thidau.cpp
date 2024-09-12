#include <bits/stdc++.h>
using namespace std;

int pos(string str)
{
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '-')
        {
            return i;
        }
    }

    return -1;
}

void add(string str, int p)
{
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    map<string, vector<string>> mp;
    string str;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, str);

        int p = pos(str);

        string a = str.substr(0, p-1 );
        string b = str.substr(p + 2);

        mp[a].push_back(b);
        mp[b].push_back(a);
    }


    for (auto x : mp)
    {
        vector<string> tmp = x.second;
        sort(tmp.begin(), tmp.end());
        cout << x.first << ": ";
        for (int i = 0; i < tmp.size(); i++)
        {
            if(i > 0) {
                cout << ", ";
                
            }
            cout << tmp[i];
            
        }
        cout << endl;
    }
    return 0;
}