class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count_ones = 0 ;
        int Max_ones = 0;
        for ( int i = 0 ; i < nums.size(); i++){
            if ( nums[i]==1){
                count_ones++;
                Max_ones = max(Max_ones,count_ones);
            }
            else{
                count_ones = 0 ; 
            }
        }
       return Max_ones;
        }
    
};