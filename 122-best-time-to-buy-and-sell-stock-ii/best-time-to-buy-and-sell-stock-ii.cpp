class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int totalprofit = 0;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i]>arr[i-1]){
                totalprofit += arr[i]-arr[i-1];
            }
        }
        return totalprofit;
    }
};