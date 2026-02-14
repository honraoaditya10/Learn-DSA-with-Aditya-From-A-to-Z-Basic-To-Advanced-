#include<iostream>
using namespace std;

int main(){
    int number = 10;   // Normal varible
    int *ptr = &number;  // pointer varible
    
    cout<<endl;
    cout<<"Value of number : "<<number<<endl;
    cout<<"Address of number : "<<&number<<endl;
    cout<<"Pointer ptr stores address : "<<ptr<<endl;
    cout<<"Value using pointer (*ptr) : "<<*ptr<<endl;

    return 0;
}