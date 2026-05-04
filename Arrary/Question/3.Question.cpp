// 2 Write a program or algorithm to find the Largest valuse of the array.
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5] = {10,103,32,89,3};
    
    int largest = INT_MIN;

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<"Largest number is : "<<largest;
     
    
    return 0;
}