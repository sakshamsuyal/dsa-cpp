class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long l = 0, total = 0, ans = 0;

        for (long long r = 0; r < nums.size(); r++) {
            total += nums[r];

            // if we need more than k operations, shrink window
            while ((long long)nums[r] * (r - l + 1) - total > k) {
                total -= nums[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
