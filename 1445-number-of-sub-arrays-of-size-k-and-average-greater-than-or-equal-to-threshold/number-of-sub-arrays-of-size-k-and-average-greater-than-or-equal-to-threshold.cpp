class Solution {
public:
    int avg(vector<int>& arr, int k, int sum){
        int avg = sum/k;
        return avg;
   
    }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int firstksum = 0;
        for(int i = 0; i<k; i++){
            firstksum += arr[i];
        }
        int count = 0;
        int average = avg(arr, k, firstksum);
        if(average >= threshold){
                count += 1;
        }

        for(int i = k; i<arr.size(); i++){
            firstksum += arr[i];
            firstksum -= arr[i-k];
            average = avg(arr, k, firstksum);
            if(average >= threshold){
                count += 1;
            }
        }
        return count;
    }
};