#include<bits/stdc++.h>
using namespace std;

bool isPangram(string str) {
    set<char> s;
    for (char c : str) {
        if (isalpha(c)) {
            s.insert(tolower(c));  // Chuyển ký tự về chữ thường và thêm vào set
        }
    }
    return s.size() == 26;  // Kiểm D nếu có đủ 26 ký tự từ 'a' đến 'z'
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T;
    cin >> T;
    cin.ignore();  // Bỏ qua ký tự xuống dòng sau khi nhập số lượng test case
    
    while (T--) {
        string str;
        getline(cin, str);  // Đọc cả dòng cho mỗi test case
        
        if (isPangram(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
