#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int l,int r,string& s) {
            if(l>=r) return true;
            
            if(!isalnum(s[l])) 
               return isPalindrome(l+1,r,s);
    
            if(!isalnum(s[r]))
               return isPalindrome(l,r-1,s);
    
            if(tolower(s[l])==tolower(s[r]))
               return isPalindrome(l+1,r-1,s);
    
            return false;
        }
        bool isPalindrome(string s) {
            return isPalindrome(0,s.size()-1,s);
        }
    };