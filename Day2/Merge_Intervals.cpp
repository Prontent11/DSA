#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &v)
{
  vector<int>pr(2);
        vector<vector<int>>result;
        sort(v.begin(),v.end());
        int n=v.size();
        pr[0]=v[0][0];pr[1]=v[0][1];
        for(int i=0;i<n;i++){
            if(pr[1]>=v[i][0]){
                if(pr[1]<v[i][1]){
                    pr[1]=v[i][1];
                }
                if(pr[0]>v[i][0]){
                    pr[0]=v[i][0];
                }
            }
            else {
               result.push_back(pr);
                pr[0]=v[i][0];
                pr[1]=v[i][1];
            }
        }
        result.push_back(pr);
            return result;
    
}
