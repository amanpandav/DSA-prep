class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = k;
        int bestlength = 0;
        int length = 0;
        int left = 0; int right = 0;
        while(right<nums.size()){
            if(nums[right]==1){
                right++;
            }
            else{
                if(zeros>0){
                    right++;
                    zeros--;
                }
                else{
                    while(zeros<=0){
                        if(nums[left]==1){
                            left++;
                        }
                        else{
                            zeros++;
                            left++;
                        }
                    }
                    right++;
                    zeros--;
                }
            }
            length = right - left;
            if(length>=bestlength) bestlength = length;
        }
        return bestlength;
    }
};