 #include <iostream>
 using namespace std;
 
//  inline int prod(int a, int b){
//     // Not recommended to use below lines with inline functions
// // static int c = 0; // this line will be executed only once     
// // c = c + 1; // next time this function is run the value of c will be retained  
//      int pro = a*b;

//     return pro;
// }

// default arguments
// defalut arguments always come at the end of the arguments.
// Compulsory arguments should always be on the left side of the default arguments.
float moneyrecived(int currentMoney, float factor=1.04) 
{
return currentMoney*factor;
}


//  Constant arguments
// int strlen(const char *p){


// }






 int main(){

int a, b;
// cout<<"enter the value of a & b "<<endl;
// cin>>a>>b;
// cout<< "the product of a and b is "<<prod(a,b)<<endl;

int money=100000;
cout<<"if you have "<<money<<"Rs in your account you will recive "<<moneyrecived(money)<<"Rs after 1 year"<<endl;
cout<<"  FOR VIP ;-if you have "<<money<<"Rs in your account you will recive "<<moneyrecived(money,1.1)<<"Rs after 1 year"<<endl;

    return 0;
 }