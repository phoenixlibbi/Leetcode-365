class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int D = 0, d = 0, tank = 0, index = 0;
        for (int i = 0; i < gas.size(); i++) {
            tank += gas[i] - cost[i];
            d += cost[i] - gas[i];
            if (tank < 0) {
                index = i + 1;
                D = d; tank = 0;
            }
        }
        return ((tank - D) >= 0) ? index : -1;
    }
};