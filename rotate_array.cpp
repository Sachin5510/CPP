 #include<bits/stdc++.h>
 using namespace std;
 
 
 void rotate(vector<int> &arr) {
        int n=arr.size();
        // code here
        if (n <= 1) return;  // No rotation needed for size 0 or 1

    int last = arr[n - 1];  // Store the last element

    // Shift all elements to the right by one
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; 
    }

    int main(){
  
  return 0;
 }