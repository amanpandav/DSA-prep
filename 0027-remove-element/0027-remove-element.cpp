class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int u = -1;
        int s = 0;
        while(s < nums.size()){
            if(nums[s]==val){
                s++;
            }
            else{
                nums[++u] = nums[s++];
            }
        }
        return u+1;
    }
};