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

    int max_value = -1e9;
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]] = 1;
        max_value = max(max_value, arr[i]);     
    }

    int count = 0;
    for (int i = 0; i <= max_value; i++)
    {
        if(cnt[i]!=0) {
            ++count;
        }
    }
    cout << count;
    /*
    cnt[3] = 1


    */
    
    return 0;
    
}