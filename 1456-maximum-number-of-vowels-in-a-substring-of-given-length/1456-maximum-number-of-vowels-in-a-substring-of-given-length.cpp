class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    int maxVowels(string s, int k) {
        int i = 0;
        int j = k-1;
        int count = 0;
        int bestcount = 0;
        for(int l=i;l<=j;l++){
            char ch = s[l];
            if(isVowel(ch)){
                count++;
            }
        }
        bestcount = count;
        while(j<s.size()-1){
            i++;
            j++;
            count = count + isVowel(s[j]) - isVowel(s[i-1]);
            if(count > bestcount){
                bestcount = count;
            }
        }
        return bestcount;
    }
};