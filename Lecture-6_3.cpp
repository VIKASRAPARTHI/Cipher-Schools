#include <iostream>
using namespace std;
 
int main() {
    // int i=5, n;       //initialization
    // cout<<"Enter a number: ";       
    // cin>>n;
    // while(i>n) {            //condition
    //     cout<<i<<" ";       //loop
    //     i--;                //update
    // }

    // int i=0, n;       //initialization
    // cout<<"Enter a number: ";       
    // cin>>n;
    // while(i<n) {            //condition
    //     cout<<i<<" ";       //loop
    //     i++;                //update
    // }

    int input;
    for(int i=1; i<101; i++) {
        cin>>input;        
        if(input == 65) {
            cout<<"Congrats you have guessed correct number!";
            break;
        }      
    }
}