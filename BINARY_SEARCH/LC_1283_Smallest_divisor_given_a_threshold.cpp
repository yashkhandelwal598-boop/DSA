#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool answer(vector<int> &nums, int divisor, int threshold){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=ceil((double)nums[i]/divisor);
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int result = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(answer(nums,mid,threshold)){
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