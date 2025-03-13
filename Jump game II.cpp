class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        int jumps=0;
        int ce=0;
        int far=0;
        for(int i=0;i<n-1;i++)
        {
            far=max(far,i+nums[i]);
                if(i==ce)
                {
                    jumps++;
                    ce=far;
                }
                if(ce>=n-1)
                {
                    break;
                }
        }
        return jumps;
    }
};
