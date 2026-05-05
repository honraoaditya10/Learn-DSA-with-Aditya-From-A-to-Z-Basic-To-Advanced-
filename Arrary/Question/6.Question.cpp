    /* 6  Given an integer array sorted in non-decreasing order, remove the duplicates in place 
    such that each unique element appears only once. The relative order of the elements should be kept the same.
    */

#include<iostream>
using namespace std;

/* Remove duplicates from sorted array */
int removeDuplicates(int arr[], int n) {
    int k = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}

int main() {
    int arr[] = {1,1,2,2,3,3,4,5,5,5,5,5,5,5,5,5};
    int n = 16;

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}