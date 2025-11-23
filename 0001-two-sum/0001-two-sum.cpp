class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int resd=target-nums[i];
            if(mp.find(resd)!=mp.end())
                return {mp[resd],i};
            mp[nums[i]]=i;
        }
    return {};    
    }
};