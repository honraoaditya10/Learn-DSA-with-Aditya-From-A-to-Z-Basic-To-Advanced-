#include<iostream>
using namespace std;
/*
A school has following rule for grading system
1. below 25 = F
2. 25 to 44 = E
3. 45 to 49 = D
4. 50 to 59 = C
5. 60 to 79 = B
6. 80 to 100 = A

Ask user to enter mark and pring corresponding grad
 */ 
int main()
{

    int marks;
    cout<<"Enter Your Marks : ";
    cin>>marks;

    if(marks <= 100 && marks >= 80){
        cout<<"You got 'A' Grade :)"<<endl;
    }
    else if(marks <= 79 && marks >= 60){
        cout<<"You got 'B' Grade :)"<<endl;
    }
      else if(marks <= 59 && marks >= 50){
        cout<<"You got 'C' Grade :)"<<endl;
    }
      else if(marks <= 49 && marks >= 45){
        cout<<"You got 'D' Grade :)"<<endl;
    }
      else if(marks <= 44 && marks >= 25){
        cout<<"You got 'E' Grade :)"<<endl;
    }
      else if(marks < 25){
        cout<<"You got 'F' Grade :("<<endl;
    }
    else{
        cout<<"You Entered Wrong Marks :("<<endl;
    }

    return 0;

}