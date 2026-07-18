#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool countflower(vector<int> &bloomDay , int day, int k, int m){
        int count=0;
        int bouquets=0;
        for(int bloom : bloomDay){
            if(bloom<=day){
                count++;
                if(count==k){
                    bouquets++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouquets >=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
      long long total = (long long)m*k;
      if(total>bloomDay.size()){
        return -1;
      }

      int low = *min_element(bloomDay.begin(), bloomDay.end());
      int high = *max_element(bloomDay.begin(), bloomDay.end());
      int result =-1;
      while(low<=high){
        int mid = low+(high-low)/2;
        if(countflower(bloomDay, mid , k, m)){
            result = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
      }
      return result;
    }
};