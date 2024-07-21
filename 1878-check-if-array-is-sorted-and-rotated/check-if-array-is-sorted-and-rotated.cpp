class Solution {
public:
    bool check(vector<int>& nums) {
       int a = 0 ;
       for ( int i = 0 ; i < nums.size()-1; i++){
        if (nums[i]>nums[i+1]){
            a++;
        }
        if (a > 1  ){
           return false ;
        }
        if (a==1 && nums[0] < nums[i+1]) {
            return false ;
        }
       }
       return true ;
    }
};