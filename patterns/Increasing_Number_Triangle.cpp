#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x=x+1;
        }
        cout<<endl;
    }
}