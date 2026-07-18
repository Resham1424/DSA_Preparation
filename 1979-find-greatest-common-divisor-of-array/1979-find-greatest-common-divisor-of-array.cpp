class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return __gcd(nums[0],nums[n-1]);
    }
};