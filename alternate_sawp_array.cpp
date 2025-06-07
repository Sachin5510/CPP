#include<bits/stdc++.h>
using namespace std;

 void alternate(int nums[], int n){

  int s= 0; //
  int al= s+1; 
  int end = n-1;
  while(s<=end)  {

    swap(nums[s], nums[al]);
    s++;
    end--;
  }

// other way to solve it 
// Function to swap every pair of alternate elements
// void swapAlternateElements(int arr[], int length) {
//     // i goes from 0 to length-2 with a step of 2 (to access pairs)
//     for (int i = 0; i < length - 1; i += 2) {
//         swap(arr[i], arr[i + 1]);
//     }
// }


  

}

void printarray(int nums[] , int n){

  for(int i=0 ; i< n; i++){

    cout<<nums[i]<<" ";
  }
cout<<endl;
}


int main(){

  //for user input
  // int size;
  // cout<<"size";
  // cin>>size;

  // int arr[100];
  
  // for(int i=0;i<size;i++){

  //   cin>>arr[i];

  // }

int arr[6]={10,2,3,3,30,20};

alternate(arr, 6);
printarray(arr,6);
  return 0;
}