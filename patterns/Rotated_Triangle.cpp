#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}