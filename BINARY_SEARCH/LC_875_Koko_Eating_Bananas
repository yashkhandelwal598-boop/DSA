#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int CalcTotalH(vector<int> &piles, int speed){
    int totalH=0;
    for(int bananas : piles){
        totalH+=ceil(double(bananas)/speed);
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = *max_element(piles.begin(),piles.end());
        int low=1, high=maxpile;
        while(low<=high){
            int mid = low+(high-low)/2;
            int totalh = CalcTotalH(piles, mid);
            if(totalh<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};