class Solution {
public:
    int floorSqrt(int n)  {
      int st=1 , end = n;
      while(st<=end){
        int mid=st+(end-st)/2;
        if((long long)mid*mid==n){
            return mid;
        }
        else if((long long)mid*mid>n){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
      }
      return end;
    }
};