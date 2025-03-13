class Solution {
public:
    int minChanges(string s) {
        int i;
        int n=s.size();
        int change=0;
        for(i=0;i<n;i=i+2)
        {
            if(s[i]!=s[i+1])
            {
                change++;
            }
        }
        return change;
    }
};
