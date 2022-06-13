#include <bits/stdc++.h> 
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	int gap = ceil((float)(n + m) / 2);
    while(gap>0){
        int i=0,j=gap;
        while(j<(n+m)){
            if(j<n and arr1[i]>arr1[j])swap(arr1[i],arr1[j]);
            else if(j>=n and i<n and arr1[i]>arr2[j-n])swap(arr1[i],arr2[j-n]);
            else if(j>=n and i>=n and arr2[i-n]>arr2[j-n])swap(arr2[i-n],arr2[j-n]);
            i++;j++;
        }

        if(gap==1)gap=0;
        else gap=ceil((float)(gap)/2);
    }
    int l=0;
    for(int k=n;k<arr1.size();k++){
        arr1[k]=arr2[l];l++;
    }
    return arr1;
}