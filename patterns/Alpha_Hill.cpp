#include<bits/stdc++.h>
using namespace std;

void alphaHill(int n) {
    // Write your code here.
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        char word='A';
        int b =(2*i-1)/2;
        for(j=1;j<=2*i-1;j++){
            cout<<word<<" ";
            if(j <= b) word++;
            else word--;
        }
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
}