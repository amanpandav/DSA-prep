class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need_table;
        unordered_map<char, int> window_table;
        for(char ch:t){
            need_table[ch]++;
        }
        int left = 0;
        int bestlen = INT_MAX;
        int bestleft = 0;
        int currentlen;
        int required = need_table.size();
        int formed = 0;
        for(int right=0;right<s.size();right++){
            char ch = s[right];
            window_table[ch]++;
            if(need_table.count(ch)>0 && window_table[ch]==need_table[ch]){
                formed++;
            }
            while(formed==required){
                currentlen = right-left+1;
                if(currentlen<bestlen){
                    bestlen = currentlen;
                    bestleft = left;
                }
                window_table[s[left]]--;
                if(need_table.count(s[left])>0 && window_table[s[left]]<need_table[s[left]]){
                    formed--;
                }
                left++;
            }
        }
        if(bestlen==INT_MAX) return "";
        else return s.substr(bestleft, bestlen);
    }
};