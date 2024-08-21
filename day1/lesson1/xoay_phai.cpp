#include <iostream>
#include <fstream>
using namespace std;

/*
    1. Tạo một mảng tạm thời chứa k phần tử đâu tiên
    2. Dịch chuyển phần tử còn lại theo k lần
    3. Copy từ temp sang arr
    4. Xóa temp
*/

void rotateRight(int arr[], int n, int k) {
    // tao 1 mang tam thoi chua k phan tu dau tien
    int *temp = new int[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n-k+i];
    }
    // Dich chuyen phan tu con lai theo k lan
    for (int i = n-1; i >=n-k; i--)
    {
        arr[i] = arr[i-k];
    }
    // Copy element tu temp sang arr
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    
    // Xoa temp
    delete[] temp;
}

void rotateLeft(int arr[], int n, int k) {
    int *temp = new int[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n-k; i++)
    {
        arr[i] = arr[k+i];
    }
    // [0,1,4,5]
    for (int i = 0; i < n-k ; i++)
    {
        arr[n-k+i] = temp[i];
    }

    delete[] temp;
    
    
}
int main()
{
    ifstream input("input.txt"); // Open input file for reading
    int n;
    input >> n; // Read the number of elements
    int k;
    input >> k;
    int *arr = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; ++i)
    {
        input >> arr[i]; // Read each element into the array
    }
    // Close the input file
    input.close();
    k = k%n;
    cout << k << endl;
    int count = 0;
    if(k>0) {
        rotateLeft(arr, n, k);
    }
    cout << "\n Xoay phai\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n Xoay trai";

    return 0;
}