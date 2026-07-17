#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstOccurence(vector<int> &arr, int low, int high, int target){
        int ans=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
    int lastOccurence(vector<int> &arr, int low, int high, int target){
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
        int first=firstOccurence(arr,0,arr.size()-1,target);
        if(first==-1){
            return 0;
        }
        int last=lastOccurence(arr,0,arr.size()-1,target);
        return last-first+1;
    }
};