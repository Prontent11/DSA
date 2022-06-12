#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &arr){
     int mx=0;int n=arr.size();int mi=INT_MAX;
        for(int i=0;i<n;i++){
            mi=min(arr[i],mi);
            if(arr[i]>mi)mx=max(mx,arr[i]-mi);
        }
        return mx;
}