class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) 
    {
        vector<bool> result;
        int num = 0;

        for(int bit : nums)
        {
            num = (num * 2 + bit) % 5;  
            result.push_back(num == 0);
        }
        return result;
    }
};
