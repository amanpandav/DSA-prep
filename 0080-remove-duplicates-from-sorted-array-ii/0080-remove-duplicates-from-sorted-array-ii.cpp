class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 2;
        int n = nums.size();
        if(n==1){
            return 1;
        }
        while(j < n){
            if(nums[i-1]!=nums[j]){
                nums[++i] = nums[j++];
            }
            else{
                j++;
            }
        } 
        return i+1;
    }
};