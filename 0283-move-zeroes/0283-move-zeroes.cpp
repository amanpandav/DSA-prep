class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int exp = 0;
        int anc = 0;
        while(exp<nums.size()){
            if(nums[exp] != 0){
                swap(nums[anc], nums[exp]);
                exp++;
                anc++;
            }
            else{
                exp++;
            }
        }
    }
};