#include<bits/stdc++.h>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    char word;
    for(int i=1;i<=n;i++){
        for(word='A'+n-1;word>='A'+n-1-i+1;word--){
            cout<<word<<" ";
        }
        cout<<endl;
    }
}