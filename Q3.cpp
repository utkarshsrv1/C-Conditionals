//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
//calculate Profit or Loss.

#include <iostream>
using namespace std;

int main(){
    
    int CP,SP,profit,loss;
    
    //Taking input by the users
    cout<<"Enter the Cost Price"<<endl;
    cin>>CP;
    
    cout<<"Enter the Selling Price"<<endl;
    cin>>SP;
    
    //Checking the profit or loss through the conditionals
    if(CP<SP){
        profit=SP-CP;
        cout<<"profit= "<<profit<<endl;
    }
    else{
        loss=CP-SP;
        cout<<"Loss= "<<loss<<endl;
    }
    
    return 0;
}
