#include <iostream>
using namespace std;

// void printstuff() {         //there is no parameters
//     cout<<"Writing my first function"<<endl;
// }

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main() {
   // printstuff();
    int a = 12, b = 23;
    int add_sum = sum(a, b);
    cout<<"The sum of two numbers are: "<<add_sum<<endl;
    return 0;
}