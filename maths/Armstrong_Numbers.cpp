#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool armstrongNumber(int n) {
          // code here
          int dump=n;
          int ld;
          int sum=0;
          while(n>0){
              ld=n%10;
              n=n/10;
              sum=sum+(ld*ld*ld);
          }
          if(sum==dump) return true;
          else return false;
      }
  };