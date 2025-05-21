#include<bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }

    int maxfreq=INT_MIN;
    int maxvalue=0;
    int minfreq=INT_MAX;;
    int minvalue=0;

    for(auto it:mpp){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second>maxfreq || (it.second==maxfreq && it.first<maxvalue)){
            maxfreq=it.second;
            maxvalue=it.first;
        }
        if(it.second<minfreq || (it.second==minfreq && it.first<minvalue)){
            minfreq=it.second;
            minvalue=it.first;
        }
    }
    return {maxvalue, minvalue};
}
