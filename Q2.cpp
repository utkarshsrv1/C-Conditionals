//Q2 - Write a program to print absolute value of a number entered by the user.

#include <iostream>
using namespace std;

int main(){
    
    int Absolute;
    
    //Taking input from the users
    cout<<"Enter a number"<<endl;
    cin>>Absolute;
    
    if(Absolute<0){
        Absolute=Absolute*(-1);
    }
    
    cout<<Absolute<<endl;
    
    return 0;
}
