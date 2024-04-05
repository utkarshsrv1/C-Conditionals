//Q1 - Write a program which takes the values of length and breadth from user and check if it is
//a square or not.

#include <iostream>
using namespace std;

int main(){
    
    int length,breadth;
    
    //Taking input from the users
    cout<<"Enter the length"<<endl;
    cin>>length;
    
    cout<<"Enter the breadth"<<endl;
    cin>>breadth;
    
    //Checking conditions for the given l*b whether it is square or not
    
    if(length==breadth){
        cout<<"It's a square"<<endl;
    }
    else{
        cout<<"It's a rectangle"<<endl;
    }
    
    return 0;
}
