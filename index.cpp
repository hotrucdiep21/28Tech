#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> board(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> prefix_white(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> prefix_black(n + 1, vector<int>(n + 1, 0));
    
    // Đọc dữ liệu bàn cờ
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }

    // Tính bảng prefix sum cho các ô trắng và đen
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefix_white[i][j] = prefix_white[i-1][j] + prefix_white[i][j-1] - prefix_white[i-1][j-1];
            prefix_black[i][j] = prefix_black[i-1][j] + prefix_black[i][j-1] - prefix_black[i-1][j-1];
            
            if ((i + j) % 2 == 0) {
                // Ô trắng
                prefix_white[i][j] += board[i][j];
            } else {
                // Ô đen
                prefix_black[i][j] += board[i][j];
            }
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        // Tính tổng các ô trắng và đen trong vùng (x1, y1) đến (x2, y2)
        int total_white = prefix_white[x2][y2] - prefix_white[x1-1][y2] - prefix_white[x2][y1-1] + prefix_white[x1-1][y1-1];
        int total_black = prefix_black[x2][y2] - prefix_black[x1-1][y2] - prefix_black[x2][y1-1] + prefix_black[x1-1][y1-1];
        
        // Tính giá trị tuyệt đối của độ chênh lệch
        cout << abs(total_white - total_black) << endl;
    }

    return 0;
}
