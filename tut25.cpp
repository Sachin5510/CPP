 #include <iostream>
 using namespace std;
 
 class emp{

    int id;
    int sal;
    public:
    void SetId(void){
  cout<<"Enter the id of employee"<<endl;
  cin>>id;

    }
    void getId(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
 };

 int main(){
    // emp h , p, r;
    // h.SetId();
    // h.SetId();
    emp fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].SetId();
        fb[i].getId();
    }
    

    return 0;
 }