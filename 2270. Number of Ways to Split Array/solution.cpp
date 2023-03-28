class Solution {
public:
    int waysToSplitArray(vector<int>& nums) 
    {
        vector<long long int> prefix_sums;
        long long int left = 0;
        long long int right = 0;
        int total_number_vaild = 0;
        prefix_sums.push_back(nums[0]);
        // first, you have to construct the prefix sum to find all kind of possible subarray sums:
        for(int i = 1; i < nums.size(); ++i)
        {
            prefix_sums.push_back(nums[i] + prefix_sums[i - 1]);
        }

        // after you consturct the prefix sums, you need to evaluate the value using the difference between the value

        // to find the sum on the right side of the array, you have to catch the left part sum first by iterating on the left side of prefix sums.
        for(int i = 0; i < prefix_sums.size() - 1; ++i)
        {
            left = prefix_sums[i];
            right = prefix_sums[prefix_sums.size() - 1] - left;
            if(left >= right)
            {
                ++total_number_vaild;
            }

        }


        return total_number_vaild;
        
    }
};
