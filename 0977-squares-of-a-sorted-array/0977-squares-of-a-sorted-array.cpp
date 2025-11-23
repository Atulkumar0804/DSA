class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {   vector<int>a; // negative array
        vector<int>b; // positive array
        for(int i=0;i<nums.size();i++) // split intital array into two
        {
            if(nums[i]<0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }
        if(a.size()==0) //no negative element in the initial array
        {   
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=pow(nums[i],2);
            }
            return nums;   
        }
        else if(b.size()==0) // no positive element in initial array
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=pow(nums[i],2);
            }
            reverse(nums.begin(),nums.end()); // reverse the array for sorted array
            return nums; 
        }
        else // both postive and negative elements in array
        {
            for(int i=0;i<a.size();i++)
            {
                a[i]=pow(a[i],2);//square negative elements
            }
            reverse(a.begin(),a.end());//reverse them
            for(int i=0;i<b.size();i++)
            {
                b[i]=pow(b[i],2);//square positive elements
            }
            vector<int> result; // initialzed result array
            int i=0,j=0;
            while(i<a.size() && j<b.size())
            {
                if(a[i]<b[j])
                {
                    result.push_back(a[i]);
                    i++;
                }
                else
                {
                    result.push_back(b[j]);
                    j++;
                }    
            }
            while(i<a.size())//only when above while is executed
                result.push_back(a[i++]);
            while(j<b.size())
                result.push_back(b[j++]);
        return result;// return final resultant array
        }

        
    }
};