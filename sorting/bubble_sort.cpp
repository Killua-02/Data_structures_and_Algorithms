#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int i,j,temp;
        int n=arr.size();
        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    count=1;
                }
            }
            if(count=0)
            break;
        }
    }
};