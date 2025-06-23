#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end()); // Step 1: Reverse entire string

        int i = 0;
        while (i < n) {
            // Step 2: Skip any spaces
            while (i < n && s[i] == ' ') i++;

            string word = "";
            // Step 3: Collect the word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Step 4: Reverse the word and add to result
            if (!word.empty()) {
                reverse(word.begin(), word.end());
                if (!ans.empty()) ans += " ";
                ans += word;
            }
        }

        return ans;
    }
};

int main(){
  
  return 0;
}