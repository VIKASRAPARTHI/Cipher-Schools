#include <iostream>
using namespace std;

int main() {
     // int marks;
    // cout<<"Student, please enter the marks to calculate the grade: ";
    // cin>>marks;

    // if(marks>90) {
    //     cout<<"A";
    // } 
    // else if(marks>80) {
    //     cout<<"B";
    // }
    // else if(marks>70) {
    //     cout<<"C";
    // }
    // else{
    //     cout<<"Passs";
    // }

    // int a, b, c, d;
    // cout<<"Give three integers as input : a, b, c"<<endl;
    // cin>>a>>b>>c>>d;

    // if(a>b && c>d) {
    //     cout<<"haha";
    // }
    // else if(a>b && c<d) {
    //     cout<<"hehe";
    // }
    // else{
    //     cout<<"huhu";
    // }


    int a;
    cout<<"Enter a number: ";
    cin>>a;

    switch (a) {        //to the condition in this paranthesis, it will be always be executed
        case 1:
            cout<<"the value of a is 1"<<endl;
            break;
        case 2:
            cout<<"The value of b is 2"<<endl;
            break;
        case 3:
            cout<<"The value of b is 3"<<endl;
            break;    
        default:
            cout<<"default will be always printed";
    }
}