/*
Print pattern like this on the cmd
1
12
123
1234
12345

*/

#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter a number :";
    cin>>no;

    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=no;j++){
            
            cout<<j;
            if(j==i){
                break;
            }
        }
        cout<<endl;
    }
}
