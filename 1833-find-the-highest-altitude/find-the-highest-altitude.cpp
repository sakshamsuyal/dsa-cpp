class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int maxalt = 0;
        for(int i =0; i<gain.size(); i++){
            altitude = gain[i] +altitude;
            maxalt = max(maxalt, altitude);
        }
           return maxalt;
    }
};