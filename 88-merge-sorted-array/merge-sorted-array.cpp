class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       /* long long arr3[n + m];
         int left = 0 ;
         int right = 0 ;
         int index  = 0 ;
         while ( left <n && right < m){
            if ( arr1[left]<= arr2[right]){
                arr3[index] = arr1[left];
                left++; index++;

            }
            else {
                arr3[index] = arr2[right];
                right ++; index ++;
            }
         }
         while (left<n){
            arr3[index++]=arr1[left++];
         }
         while ( right < m ){
            arr3[index++]=arr2[right++];
         }
         for (int i = 0 ; i < n+m ;i ++){
        if ( i< n) arr1[i]=arr3[i];
        else arr2 [i - n]=arr3[i];*/
    
    //}
    /*int left = n -1 ;
    int right = 0 ;
    while ( left > = 0 && right < m ){
        if (arr1[left]>arr2[right ]){
            swap ( arr1[left], arr2[right]);
            left --, right ++;
        }
        else{
            break ;
        }
    }
    sort ( arr1 , arr1+ n );
    sort ( arr2 , arr2 + m );
   */ 
  

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }  
    }
};