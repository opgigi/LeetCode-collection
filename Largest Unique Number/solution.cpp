class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) 
    {
        unordered_map<int, int> counts;
        int maximum = -INT_MAX;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            ++counts[nums[i]];
        }
        
        for(auto&[key, value] : counts)
        {
            if(value == 1)
            {
                maximum = max(maximum, key);
            }
                
        }
        
        
        if(maximum == -INT_MAX)
        {
            return -1;
        }
        
        return maximum;
        
    }
};
