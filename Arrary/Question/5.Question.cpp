/* 5 Given an array of size n, write a program to check if the given array is sorted in
(ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False. */

#include<iostream>

using namespace std;

bool isSorted (int arr[] , int n){
    for(int i=1;i<n;i++){
        if (arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

    cout<<"Array is  sorted : "<<boolalpha<<isSorted(arr,n);
    
    
    return 0;
}