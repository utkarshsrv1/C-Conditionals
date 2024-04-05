//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
//and division.

#include <iostream>
using namespace std;

int main(){
    
    char OP;
    int f_no,l_no;
    
    //Taking input by the users
    cout<<"Enter any one given operatrs (+ , - , * , /)"<<endl;
    cin>>OP;
    
    switch (OP){
        
        case '+':
        cout<<"Enter the first number"<<endl;
        cin>>f_no;
        
        cout<<"Enter the last number"<<endl;
        cin>>l_no;
        
        cout<<"Sum of these two numbers are: "<<f_no+l_no<<endl;
        break;
        
        case '-':
        cout<<"Enter the first number"<<endl;
        cin>>f_no;
        
        cout<<"Enter the last number"<<endl;
        cin>>l_no;
        
        cout<<"Sub of these two numbers are: "<<f_no-l_no<<endl;
        break;
        
        case '/':
        cout<<"Enter the first number"<<endl;
        cin>>f_no;
        
        cout<<"Enter the last number"<<endl;
        cin>>l_no;
        
        cout<<"Division of these two numbers are: "<<f_no/l_no<<endl;
        break;
        
        case '*':
        cout<<"Enter the first number"<<endl;
        cin>>f_no;
        
        cout<<"Enter the last number"<<endl;
        cin>>l_no;
        
        cout<<"Multiplication of these two numbers are: "<<f_no*l_no<<endl;
        break;
    }
    return 0;
}
