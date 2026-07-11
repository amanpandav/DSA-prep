class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size());
        int p = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                result[p++] = nums[i];            
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                result[p++] = nums[i];            
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                result[p++] = nums[i];            
            }
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = result[i];
        }
        return nums;
    }
};