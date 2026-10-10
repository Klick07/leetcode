class Solution {
public:
    bool yesornot(vector <int> & gas, vector<int> &cost, int j){
        int i = j;
        int size = gas.size();
        int ccapacity=0;
        do{
            if(ccapacity == 0 && i % size != j){
                return false;
            }
            ccapacity += gas[i%size] - cost[i%size];
            if(ccapacity<0){
                return false;
            }
            i++;
        }while ( i % size != j);
        return true;

    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        for(int i = 0; i<gas.size(); i++){
            bool ans = yesornot(gas, cost, i);
            if(ans){
                return i;
            }
        }
        return -1;
    }
};