//  Cpp control structures
// 1.sequence structure
// 2.selection structure
// 3.loop structure

// 1. sequence structure
// int a = 45;

//1. if else statement
//2. switch case statement
//3. goto statement
//4. break statement

#include<iostream>
using namespace std;
int main()
{
cout<<"this is tutorial 9"<<endl;
cout<<"tell me your age"<<endl;
int age;
cin>>age;

// *******if else-if-else ladder statement********

// if((age<=18) && (age==17)){
// cout<<"you can not vote"<<endl;
// }

// else if (age>100 && age<150)
// {
// cout<<"you are too old to vote"<<endl;
// }

// else{
// cout<<"you can vote"<<endl;
// }

// ************switch case statement**********
     

switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;

case 22:
    cout<<"you are 22"<<endl;
    break;

case 2:
    cout<<"you are 2"<<endl;
    break;

case 50:    
    cout<<"you are 50"<<endl;
    break;

default:
    cout<<"no special cases"<<endl;
    break;
}

}