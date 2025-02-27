class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastIndex[128];
        memset(lastIndex, -1, sizeof(lastIndex));  
        int maxLength = 0, left = 0;

        for (int right = 0; right < s.size(); right++) {
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            lastIndex[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
