class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> res(n);
        int left=0;
        int right=n-1;
        int pos=n-1;
        while(left<=right)
        {
            int leftsq=pow(nums[left],2);
            int rightsq=pow(nums[right],2);
            if(leftsq>rightsq)
            {
                res[pos]=leftsq;
                left++;
            }
            else
            {
                res[pos]=rightsq;
                right--;
            }
         pos--;
        }
    return res;
    }
};