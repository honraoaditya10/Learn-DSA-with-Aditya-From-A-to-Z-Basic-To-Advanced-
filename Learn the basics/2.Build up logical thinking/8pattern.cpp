/*
Print pattern like this on the cmd

       *********
        *******
         *****
          ***
           *
*/
    #include<iostream>
    using namespace std;
    int main(){
        int no;
        cout<<"Enter a number : ";
        cin>>no;
        
     for(int i=1;i<=no;i++){
         for(int j=1;j<=i-1;j++){
            cout<<" ";
        }

        // for(int j=1;j<=2*(no-i)+1;j++){
        //     cout<<"*";
        // }

// BOTHE LOOP ARE CORRECT

        for(int j=i;j<=2*no-i;j++){
            cout<<"*";
        }
       
        cout<<endl;
    }

        return 0;
    }