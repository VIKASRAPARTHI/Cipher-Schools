#include <iostream>
using namespace std;

int main() {
    // int password;
    // cout<<"Enter the password: ";
    // cin>>password;

    // while(password<999999) {        //password should not be less than 6 digits
    //     cout<<"The password does not meet the required condition, Please enter the correct password again.."<<endl;
    //     cin>>password;
    // }
    // cout<<"The user has now entered the correct password";
    // return 0;

    // do
    // {           //do while loop, of the above code
    //     cin>>password; 
    // } while (password<999999);


    // int count = 0;
    // while(1) {          //the condition in the while loop, until it is true, the loop will run
    //     cout<<"Chocolates";
    //     count++;

    //     if(count>10) break;     //infinte loops
    // }

    //Infinte loop using for loop
    for(int i=0; i<101; i++) {
        cout<<i<<" ";
        if(i>10) break;     //This statement gets executed when i is 11
    }
}
