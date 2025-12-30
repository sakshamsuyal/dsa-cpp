class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n = nums.size();
         vector<int> result(n);
        int totalsum = 0;
        for(int i =0; i<n; i++){
            totalsum += nums[i];
        }
       int left = 0;
       int right = 0;
       for(int i=0; i<nums.size(); i++){
        right = totalsum -left-nums[i];
        result[i] = abs(left-right);
           left += nums[i];
           
       }
       return result;
    }
};