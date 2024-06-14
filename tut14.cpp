#include <iostream>
using namespace std;


  // 1.
// struct employee{
//       int eid;
//       char fav;
//       long sal;
// }; 

// more short way to write struct(2.)
// typedef struct employee{ 
//       int eid; //typedf is used to give a name to the struct easy short way to write struct
//       char fav;
//       long sal;
// } ep;




// //Union
// union money{
// int rice;
//  char car;
//  float pounds;

// };

int main(){
           // 1.
      // struct employee e1;
      // e1.eid = 1;
      // e1.fav = 'c';
      // e1.sal = 1200000;
      
      //*************union is a user defined data type which can store different data types in it but at a time it can store only one data type
// ep e1;
// union money m1;
// m1.rice = 34;
// m1.car = 'c';
// cout<<m1.rice<<endl;
// cout<<m1.car<<endl;

     
      // ep e1;
      // e1.eid = 1;
      // e1.fav = 'c';
      // e1.sal = 1200000;

   
      // cout<<"Employee id is "<<e1.eid<<endl;
      // cout<<"Employee fav char is "<<e1.fav<<endl;
      // cout<<"Employee salary is "<<e1.sal<<endl; 
   
   enum Meal{breakfast, lunch, dinner};
   Meal m1 = breakfast;
   
   cout<<m1<<endl;
   // cout<<(m1==1)<<endl; // its zwro because breakfast is 0 , lunch is 1 and dinner is 2

   Meal m2 =dinner;
   cout<<m2<<endl; // dinner is 2 so it will print 2
   



   return 0;
}