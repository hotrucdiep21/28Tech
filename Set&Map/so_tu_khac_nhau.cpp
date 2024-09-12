#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; 
    cin >> n;  // Number of lines (test cases)
    cin.ignore();  // Ignore the newline after the number of test cases

    set<string> a, b;

    // Loop to handle input lines
    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);  // Read the whole line

        stringstream ss(str);
        string word;

        // Depending on the line, add words to set a or b
        if (i == 0) {
            // Add words from the first line to set `a`
            while (ss >> word) {
                a.insert(word);
            }
        } else if (i == 1) {
            // Add words from the second line to set `b`
            while (ss >> word) {
                b.insert(word);
            }
        }
    }

    // Print set `a`
    cout << "set a: ";
    for (const auto &x : a) {
        cout << x << " ";
    }
    cout << endl;

    // Print set `b`
    cout << "set b: ";
    for (const auto &x : b) {
        cout << x << " ";
    }

    return 0;
}
