class Solution {
public:
    int reverse(int x) {
        int p, q = 0, r;
        p = x;
        while (p != 0) {
            r = p % 10;
            if (q > INT_MAX / 10 || q < INT_MIN / 10) {
                return 0;
            }
            q = q * 10 + r;
            p = p / 10;
        }
        return q;
    }
};
