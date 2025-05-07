#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	// Write your code here.	
	int k=0;
	while(n>0){
		k=k+1;
		n=n/10;
	}
	return k;
}