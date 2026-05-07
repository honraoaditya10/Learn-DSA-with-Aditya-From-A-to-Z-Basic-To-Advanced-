/* 8 Given an array of integers, rotating array of elements by k elements.
 */

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
    k = k % n;

    int temp[k];

    // Store first k elements
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shift remaining elements
    for(int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // Copy temp elements at end
    for(int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    leftRotate(arr, n, k);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}