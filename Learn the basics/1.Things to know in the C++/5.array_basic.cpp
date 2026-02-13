#include<iostream>
using namespace std;

// Array are used to store multiple values in the single varible of same data type

int main(){
    // 1d array
    cout<<"one d Array !<<endl";
    int arr[5]={12,23,34,34,53};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    //2d arrya
    cout<<"Two d Array !"<<endl;
int arr1[2][2] = {
    {1, 2},
    {3, 4}
};

    cout<<arr1[0][0]<<"  ";
    cout<<arr1[0][1]<<endl;
    cout<<arr1[1][0]<<"  ";
    cout<<arr1[1][1]<<endl;

    return 0;

}