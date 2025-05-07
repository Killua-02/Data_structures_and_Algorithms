#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            int dump=x;
            int ld;
            int rd=0;
            while(x>0){
                ld=x%10;
               
                if (rd > INT_MAX / 10 || (rd == INT_MAX / 10 && ld > 7)) return false;
                x=x/10;
                rd=(rd*10)+ld;
            }
            if(rd==dump)
            return true;
            else
            return false;
        }
    };