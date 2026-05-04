// 4 Write a program to find the index of Largest valuse in the array.

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5] = {5,103,32,89,3};
    
    int largest = INT_MIN;
    int position = -1; 

    for(int i=0;i<5;i++){
        if(arr[i]>largest){ 
            largest = arr[i];

            position = i;
        }
    }

    cout<<"Largest number position is : "<<position;
     
    
    return 0;
}