#include <iostream>
using namespace std;
void modify(int a){
    a = a + 10;
}
void modify1(int &a){
    a = a + 10;
}
int main(){

    //Pass by Value
    int x = 5;
    modify(x);  
    cout<<x<<endl; // output will be 5
    
    // Pass By Reference
   int x1 = 5;
   modify1(x1);
   cout<<x1<<endl; //This will print 15

    return 0;

}