class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = 0;
        int hare = 0;
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while(tortoise!=hare);
        tortoise = 0;
        while(tortoise != hare){
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return tortoise;
    }
};