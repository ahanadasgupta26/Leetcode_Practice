class Solution {
public:
    bool isPalindrome(int x) 
    {
        int p,q=0,r;
        p=x;
        if(x<0)
        {
            return false;
        }
        while(p!=0)
        {
            r=p%10;
            if (q > (INT_MAX - r) / 10) 
            {
                return false;
            }
            q=q*10+r;
            p=p/10;
        }
        return q==x;
    }
};
