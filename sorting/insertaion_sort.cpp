#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int i,j;
        int n=arr.size();
        for(i=1;i<n;i++){
            
            for(j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
};