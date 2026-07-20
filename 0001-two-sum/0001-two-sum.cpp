class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr(n); 
        for(int i = 0; i < n; i++){
            arr[i] = {nums[i], i};
        }
        sort(arr.begin(), arr.end());

        int st = 0;
        int end = n - 1;
        while(st < end){
            if(arr[st].first + arr[end].first == target){
                break;
            }
            else if(arr[st].first + arr[end].first > target){
                end--;
            }
            else{
                st++;
            }
        }
        return {arr[st].second, arr[end].second}; 
    }
};