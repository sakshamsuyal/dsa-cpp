class Solution {
public:
    bool canShip(vector<int>& weights, int days, int cap) {
        int daysUsed = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w <= cap) {
                load += w;
            } else {
                daysUsed++;
                load = w;
            }
        }
        return daysUsed <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for (int w : weights) high += w;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canShip(weights, days, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
