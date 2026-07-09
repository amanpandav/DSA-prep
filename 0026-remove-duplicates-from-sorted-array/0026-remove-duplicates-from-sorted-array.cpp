class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int u = 0;
       int s = 1;
       while(s < nums.size()){
            if(nums[s]==nums[u]){
                s++;
            }
            else{
                nums[++u] = nums[s++];
            }
       }
       return u+1; 
    }
};