#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int num = 1;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            if(num == arr[i]){
                num++;
            }
            else{
                if(num < arr[i]){
                    ans.push_back(num);
                    num++;
                    }
                }
            }
        for(int i=1; i<=k; i++){
            ans.push_back(arr[arr.size()-1]+i);
        }
        return ans[k-1];
    }
};