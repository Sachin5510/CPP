//  Call by Value & Call by Reference in C++
 
 #include <iostream>
 using namespace std;
 
int sum(int a, int b){

    int c = a+b;
    return c;

}
// these will not swap the actual values a & b
void swap(int a , int b){  // temp a  b
    int temp =a;          // 12   12  4
    a=b;                  // 12   4  4
    b= temp;             // 12   4  12
}

// call by reference using pointers
void swappointer(int* a , int* b){  // temp a  b
    int temp =*a;          // 12   12  4
    *a=*b;                  // 12   4  4
    *b= temp;             // 12   4  12
}

// call by reference using C++ reference Variables
// int & 
void swapRef(int &a , int &b){  // temp a  b
    int temp = a;          // 12   12  4
    a=b;                  // 12   4  4
    b= temp;             // 12   4  12

    //    return a;
}



 int main(){
    int  x= 4, y=5;
    
    cout<<"the sum of 12 & 4 is "<<sum(12, 4)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // this will not swap the actual values
    // swappointer(&x, &y); // this will swap the actual values using pointer reference
    swapRef(x, y); // this will swap the actual values using reference variables
    // swapRef(x, y)= (766,233); // this will swap the actual values using reference variables
      cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
 }