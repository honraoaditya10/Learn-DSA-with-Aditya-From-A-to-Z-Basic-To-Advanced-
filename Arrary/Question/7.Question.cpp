/* 7 Given an integer array nums, rotate the array to the left by one.
 */

#include <iostream>
using namespace std;

void rotateByOne(int arr[], int n)
{
    int temp[n];

    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];

    for (int i = 0; i < 5; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {12, 13, 45, 65, 4};

    rotateByOne(arr, n);

    return 0;
}