class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int st, end;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                st = j+1;
                end = n-1;
                while(st<end){
                    long long sum = (long long) nums[st] + nums[end] + nums[i] + nums[j];
                    if(sum==target){
                        result.push_back({nums[i], nums[j], nums[st], nums[end]});
                        while(st<end && nums[st]==nums[st+1]) st++;
                        st++;
                        while(st<end && nums[end]==nums[end-1]) end--;
                        end--;
                    }
                    else if(sum<target){
                        st++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return result;
    }
};