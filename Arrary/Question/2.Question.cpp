// 2 Write a program or algorithm to find the smallest valuse of the array.
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5] = {5,9,20,3,23};

    int smallest = INT_MAX;

    for(int i=0;i<5;i++){
    
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout<<"Smallest number is : "<<smallest;
    
    return 0;
}