class Solution {
public:
    int noofsubarray(vector <int> &arr, int k){
        if(arr.size()<=0){
            return 0;
        }
        int l = 0, r = 0, cnt = 0, sum = 0;
        while(r<arr.size()){
            sum += arr[r]%2;
            while(sum>k){
                sum -= (arr[l]%2);
                l++;
            }
            cnt += r-l +1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = noofsubarray(nums, k) - noofsubarray(nums, k-1);
        return ans;
    }
};