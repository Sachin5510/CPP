 #include <iostream>
 using namespace std;
 

//  int factorail(int n){


// if(n<=1){
//     return 1;
//  }
//  return n * factorail(n-1);
//  }


// 
// step by step factorail calculation of 5! = 5*4*3*2*1 = 120
// factorail(5) = 5*factorail(4);
// factorail(4) = 4*factorail(3);
// factorail(3) = 3*factorail(2);
// factorail(2) = 2*factorail(1);
// factorail(1) = 1;

int fib(int n){
if(n<2){

    return 1;
}
else{
return fib(n-1)+fib(n-2);
}

    
}

 int main(){
    
int a;
cout<<"Enter the number to find"<<endl;
cin>>a;
// factorail
// cout<<"the factoraal of a is:  "<<factorail(a)<<endl;

// fibonacci series
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
cout<<"the term in fibonacci  sequence at postion of "<<a<<" is " <<fib(a)<<endl;

    return 0;
 }


 // steps of fibonacci series
    // fib(5) = fib(4)+fib(3);
    // fib(4) = fib(3)+fib(2);
    // fib(3) = fib(2)+fib(1);
    // fib(2) = fib(1)+fib(0);
    // fib(1) = 1;
    // fib(0) = 1;