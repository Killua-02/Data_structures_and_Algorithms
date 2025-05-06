#include<bits/stdc++.h>
using namespace std;

void getStarPattern(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=n-2;i++){
        for(j=1;j==1;j++){
            cout<<"* ";
        }
        for(j=1;j<=n-2;j++){
            cout<<"  ";
        }
        for(j=1;j==1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        cout<<"*";
    }
}
