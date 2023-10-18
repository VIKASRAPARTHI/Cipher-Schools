#include <iostream>
using namespace std;

// void swap(int a, int b){        //passing by value, the value of the variables are copied to the function
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     cout<<"The values of a and b after swapping inside the function "<<a<<" "<<b<<endl;
//     return;
// }

void swap(int &a, int &b){        //passing by reference,  by including the keyword & after thr name of the data type anf before the variables, we are able to change the actual parameters
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"The values of a and b after swapping inside the function "<<a<<" "<<b<<endl;
    return;
}

void fun(int &a, int b){
    a = 9876;
    b = 6789;

    cout<<"The values of a and b inside the fun function are: "<<a<<" "<<b<<endl;
 }

int main() {
    int a = 4, b = 6;
    swap(a, b);
    cout<<"The values of a and b after swapping outside the function: "<<a<<" "<<b<<endl;

    fun(a, b);
    cout<<"The values of a and b after the function call"<<a<<" "<<b<<endl;
}