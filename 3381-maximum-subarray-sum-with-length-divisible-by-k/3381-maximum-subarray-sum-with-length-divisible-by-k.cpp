class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long prefix = 0, res = LLONG_MIN;
        
        vector<long long> best(k, LLONG_MAX);
        best[0] = 0;  // prefix before any element

        for (int i = 0; i < n; i++) {
            prefix += nums[i];

            int r = (i + 1) % k;  // subarray length = i+1

            if (best[r] != LLONG_MAX) 
                res = max(res, prefix - best[r]);

            best[r] = min(best[r], prefix);
        }
        
        return res;
    }
};
