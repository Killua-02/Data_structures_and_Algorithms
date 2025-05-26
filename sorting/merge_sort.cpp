#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void mergeSort(vector<int>& arr, int l, int h) {
        // code here
        if(l>=h)
            return;
        
        int m=(l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,h,m);
    }
  
    void merge(vector<int>& arr, int l, int h,int m){
        int left=l;
        int right=m+1;
        vector<int> temp;
        while(left<=m && right<=h){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right<=h){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=l;i<=h;i++){
            arr[i]=temp[i-l];
        }
    } 
};