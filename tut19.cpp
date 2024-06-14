#include <iostream>
using namespace std;



// int add(int a, int b){
//     cout<<"Using function with 2 arguments"<<endl;
//     return a+b;
// }
// int add(int a, int b, int c){
//     cout<<"Using function with 3 arguments"<<endl;
//     return a+b+c;
// }
// calulatre the volume of a cylinder
int vol(double r , int h){

    return (3./14  * r * r * h );
}

// calulatre the volume of a cube
int vol(int a){

    return (a * a * a);

}

// area of rectangle
int area(int l, int b){

    return (l * b);
}


int main(){
    // cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    // cout<<"The sum of 3, 6 and 9 is "<<add(3,6,9)<<endl;
    cout<<"the volume of clinder is "<<vol(3,4)<<endl;
    cout<<"the volume of cube is " <<vol(3)<<endl;
    cout<<"the area of rectangle is "<<area(3,4)<<endl;


    return 0;
}