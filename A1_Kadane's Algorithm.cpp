class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=0,max_ending_here=INT_MIN;
        for(int i=0;i<nums.size();i++){
            max_so_far +=nums[i];
              max_ending_here=max(max_so_far,max_ending_here);
            if(max_so_far<0)
            max_so_far=0;
           }
        return max_ending_here;
       
    }
};