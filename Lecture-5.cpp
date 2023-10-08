#include <iostream>
using namespace std;

int main() {
    int x;      // variable name x of type int---> It can store a single integer which means x only one

    //arrays can be used to store multiple variable names

    inta[5]; //This means it is array of name a which can store multiple integers
    //Note: Thw indexing of array starts from 0 and not 1

    //Elements starting from 0--5
    //The first element have an index 0--> a[0]
    //The second element will hace an index 1--> a[1]
    //And goes til a[5]

    int a, b, c, d, e;

    cout<<"Give 5 integers as input"<<endl;
    cin>>a>>b>>c>>d>>e;

    cout<<"The integers in reverse order are: "<<e<<d<<c<<b<<a;
    

}