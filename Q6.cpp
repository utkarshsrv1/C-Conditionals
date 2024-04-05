//Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

#include <iostream>
using namespace std;

int main(){
    
    int Marks;
    
    //Taking Marks by the users
    cout<<"Enter your marks"<<endl;
    cin>>Marks;
    
    if (Marks<=100&Marks>=90){
        cout<<"Your grade is A+"<<endl;
    }
    else if(Marks<=90&Marks>=80){
        cout<<"Your grade is A"<<endl;
    }
    else if(Marks<=80&Marks>=70){
        cout<<"Your grade is B+"<<endl;
    }
    else if(Marks<=70&Marks>=60){
        cout<<"Your grade is B"<<endl;
    }
    else if(Marks<=60&Marks>=50){
        cout<<"Your grade is C"<<endl;
    }
    else if(Marks<=50&Marks>=40){
        cout<<"Your grade is D"<<endl;
    }
    else if(Marks<=40&Marks>=30){
        cout<<"Your grade is E"<<endl;
    }
    else if(Marks<=30&Marks>=0){
        cout<<"Your grade is F"<<endl;
    }
    return 0;
}
