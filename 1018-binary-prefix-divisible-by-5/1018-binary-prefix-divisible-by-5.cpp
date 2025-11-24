class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) 
    {   
        vector<bool> res;
        int num=0;
        for(int bit:nums)
        {
            num=(num*2+bit)%5;
            res.push_back(num==0);
        }
    return res;
    }

};