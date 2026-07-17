class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0; int i;
        for(i=0;i<arr.size() && count<arr.size();i++){
            if(arr[i]==0){
                count+=2;
            }
            else{
                count++;
            }
        }
        int w = arr.size()-1;
        int r = i-1;
        if (count > arr.size()) {
            arr[w] = 0;
            w--;
            r--;
        }
        while(r>=0 && w>=0){
            if(arr[r]!=0){
                arr[w] = arr[r];
                w--;
                r--;
            }
            else{
                arr[w] = arr[r];
                arr[w-1] = arr[r];
                w-=2;
                r-=1;
            }
        }
    }
};