class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int currgas=0;
        int total=0;
        int tot_cost=0;
        for(int i=0; i<gas.size(); i++){
            currgas+=gas[i]-cost[i];
            if(currgas<0){
                start=i+1;
                currgas=0;
            }
            total+=gas[i];
            tot_cost+=cost[i];
        }
        
        
        return (total>=tot_cost)? start: -1;
    }
};