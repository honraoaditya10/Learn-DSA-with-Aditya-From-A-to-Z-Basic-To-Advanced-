/*
Print pattern like this on the cmd
        *
       ***
      ***** 
     *******
*/
    #include<iostream>
    using namespace std;
    int main(){
        int no;
        cout<<"Enter a number : ";
        cin>>no;
        
        for(int i=1;i<=no;i++){

            for(int j=i;j<=no-1;j++){
                cout<<" ";
            }
                
                for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }

            cout<<endl;
        }

        return 0;
    }