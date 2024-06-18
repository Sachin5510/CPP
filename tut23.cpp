 #include <iostream>
 using namespace std;
 


 class shop{
int itemId[100];
int itemPrice[100];
int counter;
public:
void initCounter(void) {counter = 0;}
void getprice(void);
void setprice(void);
void displayprice(void);
 };

 void shop :: setprice(void) {
    cout<<"Enter the Id of your item no "<<counter+1<<endl; 
    cin>>itemId[counter];
cout<<"Enter the price of your item no "<<endl; 
    cin>>itemPrice[counter];
    counter++;
 }
 void shop :: displayprice(void) { 
    for(int i=0;i<counter;i++){
        cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    
    }
    cout<<endl;
 }
 int main(){
     shop D;
     D.initCounter();
     D.setprice();
     D.setprice();
     D.setprice();
     D.displayprice();

    return 0;
 }