Pow(x, n): https://leetcode.com/problems/powx-n/description/

class Solution {
public:
    double answer(double x, long long n) {
        if (n == 0)
            return 1;
        if (n % 2 == 0)
            return answer(x * x, n / 2);
        if (n % 2 == 1)
            return (x * answer(x * x, (n - 1) / 2));
        else
            return answer(1 / x, -n);
    }
    double myPow(double x, int n) { return answer(x, n); }
};
