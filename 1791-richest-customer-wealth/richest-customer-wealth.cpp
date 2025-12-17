class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long maxWealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            long long sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            if (sum > maxWealth) {
                maxWealth = sum;
            }
        }
        return maxWealth;
    }
};