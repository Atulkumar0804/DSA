class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long total = 0;
        for (long long b : batteries) total += b;
        
        long long left = 0, right = total / n;  // Max possible time
        
        auto canRun = [&](long long time) {
            long long available = 0;
            for (long long b : batteries) {
                available += min(b, time);
            }
            return available >= time * n;
        };
        
        while (left < right) {
            long long mid = (left + right + 1) / 2;
            if (canRun(mid)) left = mid;
            else right = mid - 1;
        }
        return left;
    }
};
