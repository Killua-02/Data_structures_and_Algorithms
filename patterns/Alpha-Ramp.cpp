#include<bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    // Write your code here.
    char word='A';
    for(int i=1;i<=n;i++){
        word='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<word<<" ";
        }
        cout<<endl;
    }
}
