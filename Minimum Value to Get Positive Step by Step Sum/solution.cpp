class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int start_value = 0;
        int max_negative = 0;
        
        
        if(nums[0] <= 0)
        {
            max_negative = nums[0];
        }
        
        
        
        for(int i = 1; i < nums.size(); ++i)
        {
            nums[i] += nums[i - 1];
            
            if(nums[i] < max_negative && nums[i] <= 0)
            {
                max_negative = nums[i];
            }
        }
        
        return -max_negative + 1;
    }
};
