class Solution {
public:
    bool canJump(vector<int>& nums) {
       /*int n = nums.size();
       for ( int i = 0 ; i < n  ; i++) {
        if (i == n - 1 ) {
          return true;
        }
         int p = i + nums[i];
       if ( p <= i){
        break ;
       }
       i = p;
       }
      
       return false ;*/
       /*int goal = nums.size() - 1 ;
       for ( int i = nums.size( )- 2; i >= 0 ; i --){
        if ( i+nums[i] >= goal ){
            goal = i ;
        }
       }
       return goal == 0 ; 
    }*/
    //bool canJump(vector<int>& nums) {
        int maxi=INT_MIN, index=-1;
        if(nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i+=index-i){
            if(nums[i]==0) return false;
            if(nums[i]+i>=nums.size()-1) return true;
            for(int j=i+1;j<=nums[i]+i;j++){
                if(nums[j]+j>maxi){
                    maxi=nums[j]+j;
                    index=j;
                }
            }
            maxi=INT_MIN;
        }
        return false;
    }
};