class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int count = 1;
        int bestcount = 1;
        while(j<nums.size()){
            if(nums[j]>nums[j-1]){
                count++;
                j++;
                if(bestcount<count) bestcount = count;
            }
            else{
                i = j;
                j++;
                if(bestcount<count) bestcount = count;
                count = 1;
            }
        }
        return bestcount;
    }
};