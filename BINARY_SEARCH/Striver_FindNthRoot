class Solution {
public:
  int NthRoot(int N, int M) {
       int low=1, high=M;
       while(low<=high){
        int mid=low+(high-low)/2;
        long long ans=1;
        for(int i=0; i<N; i++){
            ans*=mid;
            if(ans>M) break;}
            if(ans==M) return mid;
            if(ans<mid){
                low=mid+1;
            }   
            else{
                high=mid-1;
          }
       }
       return -1;
    }
};
