#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    char word='A';
    for(int i=1;i<=n;i++){
        for(word='A';word<='A'+i-1;word++){
             cout<<word<<" ";
        }
        cout<<endl;
    }
}