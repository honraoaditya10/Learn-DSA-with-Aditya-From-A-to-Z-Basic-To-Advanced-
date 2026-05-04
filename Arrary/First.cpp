#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,3};

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<sizeof(arr);
    return 0;
}