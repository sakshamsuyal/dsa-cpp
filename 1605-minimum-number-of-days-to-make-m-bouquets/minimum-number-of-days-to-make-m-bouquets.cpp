class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int cnt = 0;     
        int bouquets = 0;

        for (int d : bloomDay) {
            if (d <= day) {
                cnt++;
                if (cnt == k) {
                    bouquets++;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers = 1LL * m * k;
        if (totalFlowers > bloomDay.size()) return -1;

        int low = INT_MAX;
        int high = INT_MIN;

        for (int d : bloomDay) {
            low = min(low, d);
            high = max(high, d);
        }

        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
