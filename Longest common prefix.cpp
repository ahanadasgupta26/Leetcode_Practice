class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string res="";
        int i;
        for(i=0;i<strs[0].size();i++)
        {
            for(auto j:strs)
            {
                if(j[i]!=strs[0][i])
                {
                   return res;
                }
            }
            res=res+strs[0][i];
        }   
        return res;
    }
};
