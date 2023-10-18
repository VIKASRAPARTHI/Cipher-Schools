#include <iostream>
using namespace std;

void printHi(){     //No parameters are required
    cout<<"Hi"<<endl;
}

int sum(int a, int b){
     int c;
     c = a + b;     //a+b will result in 10, therefore, the value of c will be 10
     cout<<"The value of c is "<<c<<endl;
     return c;
     
}

int main() {
    printHi();      //First calling the printHi function

    int a, b, d;
    a = 4;
    b = 6;
    int c = 75;        //The value of c over here in the main function is 75
    d = sum(a, b);

    cout<<"The sum is equal to "<<d<<" and the value of a is "<<a<<endl;
      //The value of a is modified by the function call
    cout<<"The value of c is "<<c<<endl;
    return 0;
}

//Local variable: All the variables declared inside the function are called local variables

//Scope of a variable: A point at which the variables are declared