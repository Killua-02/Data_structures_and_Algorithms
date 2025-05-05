#include<bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n) {
    // Write your code here.
    int x=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            x=0;
        }else 
        x=1;
        for(int j=1;j<=i;j++){
            cout<<x<<" ";

            if(x==1){
                x=0;
            }
            else
            x=1;
        }
        cout<<endl;
    }
}