class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> counts;
        counts[0] = 1;
        int ans = 0, curr = 0;

        
        

        for(int i = 0; i < nums.size(); ++i)
        {
            /*
            the whole idea is, you will first calculate the prefix sum at each
            index i, and store in the curr, and then we will proceed to find
            how many subarray does exist in the hashmap.

            remember that the subarray should be the contiguous order,
            and everytime the line ++counts[curr] will execute to store all 
            possible prefix sum in the hash map.

            if curr - k matched with any value at the hashmap, then we catched 
            there are possible subarray equal to k.

            because curr - k exist in the hashmap, then previous prefix sum has
            the element equivalent to curr - k, and current prefix sum curr and
            curr -k has tied to such a relationship as:

            curr - (curr - k) = k;

            hence, if we catched any counts[curr - k] then it will drive all the
            possible way of subarrays that is equal to curr - k.
            then, ans will cumulate all possible ways of solutions into the ans.
            */
            curr += nums[i];
            ans += counts[curr - k];
            ++counts[curr];

        }


        return ans;
        
    }
};
