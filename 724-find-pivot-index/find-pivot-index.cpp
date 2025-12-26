class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix = nums;
        int totalsum = 0;
        for(int i=0; i<nums.size(); i++){
           totalsum +=nums[i];
        }
         if(nums.empty()) return-1;
         if(totalsum -nums[0] ==0) return 0;
        for(int i=1; i<nums.size(); i++){
           
          prefix[i] += prefix[i-1];
          int sumleft = prefix[i-1];
          int sumright =totalsum - prefix[i];
            if(sumleft==sumright){
            return i;
          }
    }
      return -1;
    }  
};