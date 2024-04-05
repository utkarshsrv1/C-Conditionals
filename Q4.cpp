//Q4- Write a program to print positive number entered by the user, if user enters a negative
//number, it is skipped.

#include <iostream>
using namespace std;

int main(){
    
    int number;
    
    //Taking input by the users
    cout<<"Enter a negative or positive numbers"<<endl;
    cin>>number;
    
    //Now we will check the conditions
    if(number<0){
        cout<<"The number is negative and skipped"<<endl;
    }
    else{
        cout<<number<<endl;
    }
    return 0;
}
