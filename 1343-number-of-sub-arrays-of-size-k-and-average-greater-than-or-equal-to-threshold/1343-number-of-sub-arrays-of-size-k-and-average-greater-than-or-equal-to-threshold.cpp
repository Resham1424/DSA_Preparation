class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int windowSum=0;

        for(int i=0;i<k;i++){
            windowSum+=nums[i];
        }
        int count=0;
        if (windowSum >= threshold * k)
            count++;

        for(int i=k;i<nums.size();i++){
            windowSum+=nums[i];
            windowSum-=nums[i-k];

        
        if (windowSum >= threshold * k)
            count++;
        }
        return count;
    }
};