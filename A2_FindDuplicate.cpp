class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long n  = nums.size();
        long long ans = INT_MIN;
        for(int i =0 ;i< n-1 ;i++){
            if(nums[i]==nums[i+1]){
                ans =nums[i];
            }   
            
           
        }
       return ans; 
    }
};