#include <iostream>
#include <fstream>
using namespace std;

void rotateLeft(int arr[], int n, int k) {
    // tao 1 mang tam thoi chua k phan tu dau tien
    int *temp = new int[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // Dich chuyen phan tu con lai theo k lan
    for (int i = 0; i < n-k; i++)
    {
        arr[i] = arr[k+i];
    }
    // Copy element tu temp sang arr
    for (int i = 0; i < n-k; i++)
    {
        arr[n-k+i] = temp[i];
    }
    
    // Xoa temp
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
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}