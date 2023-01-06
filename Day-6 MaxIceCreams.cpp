class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0;
        int counts=0;
        for(int i=0;i<costs.size();i++){
            if(sum<coins){
                sum+=costs[i];
                counts++;
                if(sum>coins){
                    return --counts;
                }
            }
            if(sum==coins){
                break;
            }
        }
        return counts;
    }
};