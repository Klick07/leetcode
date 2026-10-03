class Solution {
public:
    bool canJump(vector<int>& arr) {
        int maxgo = 0;
        if(arr.size() == 1){
            return true;
        }
        for(int i = 0; i<arr.size(); i++){
            maxgo = max(maxgo, arr[i]+1+i);
            if(maxgo<=(i+1)){
                return false;
            }
            if(maxgo>=arr.size()){
                return true;
            }
        }
        return false;
    }
};