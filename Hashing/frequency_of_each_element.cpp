#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n,i;
        cin>>n;
        unordered_map<int, int> mpp;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            cout<<mpp[arr[i]]<<" ";
        }
        cout<<endl;
    }
}