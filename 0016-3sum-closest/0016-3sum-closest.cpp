class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int bestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n; i++) {
            int st = i + 1;
            int end = n - 1;

            while (st < end) {
                int currentSum = nums[i] + nums[st] + nums[end];

                if (currentSum == target) {
                    return currentSum; // can't get closer than exact match
                }

                if (abs(currentSum - target) < abs(bestSum - target)) {
                    bestSum = currentSum;
                }

                if (currentSum > target) {
                    end--;
                } else {
                    st++;
                }
            }
        }

        return bestSum;
    }
};