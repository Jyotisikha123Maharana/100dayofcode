class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        vector<int>nums1;
        vector<int>nums2;
       
       int n = nums.size();
        k = k%n;
        for ( int i = 0 ; i < n - k ; i++){
            nums1.push_back(nums[i]);
        }
        for ( int j = n - k ; j<n; j++){
            nums2.push_back(nums[j]);
        }
        int index = 0;
        for (int l = 0 ;l < nums2.size();l++ ){
            nums[index]= nums2[l];
            index++;
        }
        for(int m = 0 ; m < nums1.size();m++){
            nums[index]=nums1[m];
            index++;
        }  
    }
};