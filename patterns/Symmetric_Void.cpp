#include<bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"* ";
        }
        for(j=1;j<=2*i-2;j++){
            cout<<"  ";
        }
         for(j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        cout<<"* ";
        }
        for(j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
        cout<<"* ";
        }
        cout<<endl;
    }
    
}