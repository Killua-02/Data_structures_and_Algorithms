#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool isPrime(int n) {
          // code here
          int k=0;
          for(int i=2;i*i<=n;i++){
              if(n%i==0){
              k++;
              if(n/i==i)
              k++;
              }
          }
          if(k>0)
          return false;
          else 
          return true;
      }
  };