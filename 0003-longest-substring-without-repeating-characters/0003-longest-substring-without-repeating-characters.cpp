class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length();
        int sl = 0;
        int f = 0;
        int length = 0;
        int bestlength = 0;
        unordered_map<char, int> records;
        while(f<size){
            if(records.count(s[f])>0 && records[s[f]]>=sl){
                sl = records[s[f]]+1;
                records[s[f]] = f;
                length = f-sl+1;
                f++;
            }
            else{
                length++;
                records[s[f]] = f;
                f++;
            }
            if(length>bestlength){
                bestlength = length;
            }
        }
        return bestlength;
    }
};