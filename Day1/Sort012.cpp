#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{   
int z=0,t=n-1,o(0); //o=one,z=zero,t=two
while(o<=t){
      if(arr[o]==0){
          swap(arr[o],arr[z]);
          z++;o++;
      }
      else if(arr[o]==2) {
          swap(arr[o],arr[t]);
          t--;
      }
    else o++;
  }
}