class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixGcd;

        int maxEle=-1;
        for(int i=0;i<n;i++){
            maxEle=max(maxEle,nums[i]);
            prefixGcd.push_back(__gcd(nums[i],maxEle));
        }

        sort(begin(prefixGcd),end(prefixGcd));
        long long result=0;
        int i=0;
        int j=n-1;
        while(i<j){
            result+=__gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return result;
    }
};