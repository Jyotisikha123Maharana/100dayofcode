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
       int goal = nums.size() - 1 ;
       for ( int i = nums.size( )- 2; i >= 0 ; i --){
        if ( i+nums[i] >= goal ){
            goal = i ;
        }
       }
       return goal == 0 ; 
    }
};