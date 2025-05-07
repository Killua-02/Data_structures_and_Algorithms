#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int reverseDigits(int n) {
          // Code here
          int rd=0;
          while(n>0){
              int ld=n%10;
              rd=(rd*10)+ld;
              n=n/10;
          }
          return rd;
          
      }
  };