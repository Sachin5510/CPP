#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
             int n = nums.size();
          for(int i=0; i<n;i++){
                int min =i;
              for(int j=i+1;j<n-1;j++){

                if(nums[j]<nums[min]){
                     min =j;
                }
            }
               swap(nums[min], nums[i]);
        
    }
  }
};



int main(){
  
  return 0;
}