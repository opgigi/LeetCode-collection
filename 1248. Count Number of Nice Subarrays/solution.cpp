class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        unordered_map<int, int> counts;
        int curr = 0;
        int left = 0;
        int ans = 0;

        /* 
        in this problem, we will create the hashmap to find all possible way
        of subarrays that satisfies the constraint where curr = k

        the main idea is, we will record the prefix sum based on how many
        possible odd number exist in the index i, and we we will find if
        curr - k does exist in the hash map, if the hashmap finds that
        curr - k present in the set then there are various subarrays
        satisfies that has curr - k odd numbers in each case of
        subarrays.

        hence, if the hashmap can specify there exist a subarrays does exists
        has curr - k. then if you add with the prefix sum at index i then 
        it will automatically give out the subarray has k odd numbers.
        */

        counts[0] = 1;


        for(int right = 0; right < nums.size(); ++right)
        {
            (nums[right] % 2 == 1) ? ++curr : curr = curr;

            ans += counts[curr - k];
            ++counts[curr];            
        }

        return ans;
    }
};
