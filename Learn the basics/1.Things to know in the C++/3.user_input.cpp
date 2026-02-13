#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int age;
    string name;
    cout << "Enter your name :";
    getline(cin,name);
    cout << "Enter a your age: ";
    cin >> age;

    cout << "You name is : " << name << endl;
    cout << "You age is : " << age << endl;

    return 0;
}
