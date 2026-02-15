/*
Print pattern like this on the cmd
*****
*****
*****
*****
*****

*/

#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter a nunber : ";
    cin>>no;
    
    for(int i=1;i<=no;i++){
        for(int j=1;j<=no;j++)
        {
        cout<<"*";
        }
        cout<<endl;

    }
    return 0;

}

