class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int less = 0;
        int eql = 0; int more = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                less++;
            }
            else if(nums[i]==pivot){
                eql++;
            }
            else{
                more++;
            }
        }
        int lessptr = 0;
        int eqlptr = less;
        int moreptr = less + eql;
        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                result[lessptr++] = nums[i];
            }
            else if(nums[i]==pivot){
                result[eqlptr++] = nums[i];
            }
            else{
                result[moreptr++] = nums[i];
            }
        }
        return result;
    }
};