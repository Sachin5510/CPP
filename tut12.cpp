 
 // what is pointer? => pointer is a variable that stores the address of another variable. 
//  It is a data type that holds the address of another variable.
 
 #include <iostream>
 using namespace std;
 
 int main(){
    
    int a = 3;
    int * p ;
    p= &a; // & ----> (Address of )operator
               
cout<<"The value of a is "<< p <<endl;
 cout<<"The value of a is "<< &a <<endl;
 
 // * ----> (value at)Pointer operator
    cout<<"The value of a is "<< *p <<endl;
    
//pointer to pointer
int **q = &p;
cout<<"The value of a is "<< **q <<endl;
    return 0;
 }