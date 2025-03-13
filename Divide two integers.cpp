class Solution {
public:
    int divide(long int dividend, long int divisor) 
    {
        if (dividend == -2147483648 && divisor == -1) 
        {
            return 2147483647;
        }
        else
        {
        long int res=dividend/divisor;
        return res;
        }
    }
};
