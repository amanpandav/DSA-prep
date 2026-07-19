class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int sum = 0;
        int bestsum = 0;
        for(int k = i;k<=j;k++){
            sum = sum + nums[k];
        }
        bestsum = sum;
        while(j<nums.size()-1){
            i++;
            j++;
            sum = sum + nums[j] - nums[i-1];
            if(sum > bestsum){
                bestsum = sum;
            }
        }
        double avg = double(bestsum)/double(k);
        return avg;
    }
};