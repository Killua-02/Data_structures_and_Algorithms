#include<bits/stdc++.h>
using namespace std;

void nStarDiamond(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        }
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }  
}