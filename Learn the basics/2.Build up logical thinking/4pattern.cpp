/*
Print pattern like this on the cmd
1
11
222
3333
44444
555555

*/

#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number:";
    cin>>no;

    for(int i=1;i<=no;i++){
        for(int j=1;j<=no;j++){
            cout<<i;
            if(j==i){
                break;
            }
        }
        cout<<endl; 
    }
}