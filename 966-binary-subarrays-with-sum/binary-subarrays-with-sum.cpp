class Solution {
public:
    int lessthanequalsum(vector<int>& arr, int k){
        if(k<0){
            return 0;
        }
        int cnt = 0, l = 0, r = 0, sum = 0;
        while(r<arr.size()){
            sum += arr[r];
            while(sum>k){
                sum -= arr[l];
                l++;
            }
            cnt += r-l +1;
            r++;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& arr, int k) {
        int ans = lessthanequalsum(arr, k) - lessthanequalsum(arr, k-1);
        return ans;
    }
};