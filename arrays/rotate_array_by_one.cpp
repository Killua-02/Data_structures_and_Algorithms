#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int temp=arr[n-1];
        for(int i=n-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }
};