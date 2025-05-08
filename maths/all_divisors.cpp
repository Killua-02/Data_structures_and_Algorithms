#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
vector<int> getAllDivisors(int n){
    // Write your code here
    vector<int> v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i)
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}