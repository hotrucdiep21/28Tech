#include <iostream>
#include <fstream>
using namespace std;

int cnt[100001];

int main()
{
    ifstream input("input.txt"); // Open input file for reading
    int n;
    input >> n;            // Read the number of elements
    int *arr = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; ++i)
    {
        input >> arr[i]; // Read each element into the array
    }
    // Close the input file
    input.close();
    /*--------------------------------*/
    int max_val = -1e9;
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
        max_val=max(max_val, arr[i]);
    }
    int max = cnt[0];
    int index = 0;
    for (int i = 0; i < max_val; i++)
    {
        if(cnt[i] > max) {
            max = cnt[i];
            index = i;
        }
    }
    
    cout << index << " " << cnt[index];
    
    

    return 0;
}