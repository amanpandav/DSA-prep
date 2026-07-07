class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boats = 0;
        sort(people.begin(), people.end());
        int st = 0;
        int end = n-1;
        while(st<=end){
            if(st!=end && people[st]+people[end]<=limit){
                boats++;
                st++;
                end--;
            }
            else{
                boats++;
                end--;
            }
        }
        return boats;
    }
};