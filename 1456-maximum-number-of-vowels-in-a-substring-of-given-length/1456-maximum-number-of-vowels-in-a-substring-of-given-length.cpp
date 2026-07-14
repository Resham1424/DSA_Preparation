class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int count=0;
        int maxV=0;
        int n=s.length();
        auto isVowel=[&](char ch){
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
        };
        while(j<n){
            if(isVowel(s[j]))
               count++;
            if(j-i+1==k){
               maxV=max(maxV,count);
               if(isVowel(s[i]))
                    count--;
                i++;
        }
        j++;
    }
    return maxV;
    }
};