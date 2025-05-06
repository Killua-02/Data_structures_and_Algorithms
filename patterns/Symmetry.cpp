#include<bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(j=1;j<=2*i;j++){
            cout<<" ";
        }
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}