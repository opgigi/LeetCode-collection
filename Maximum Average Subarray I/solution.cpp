class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int left = 0;
        int right = 0;
        double current = 0;
        double max_average = 0;
        
        if(nums.size() == 1)
        {
            return nums[0];
        }
        // this problem is about the fixed-size sliding window.
        
        // first, you have to find the very first sub-array has the length k.
        for(int i = 0; i < k; ++i)
        {
            current += nums[i];
        }
        
        
        max_average = current / k;
        right = k - 1;
        left = 0;
        
        //once you find the very first average, you will move the fixed-size window and calculate the average;
        while(right < nums.size())
        {
            current -= nums[left];
            ++left;
            ++right;
            current += nums[right];
            
            
            max_average = max(max_average, current / k);
        }
        
        
        return max_average;
    }
};
