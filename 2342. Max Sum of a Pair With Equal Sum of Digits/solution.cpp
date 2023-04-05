class Solution {
public:
    int maximumSum(vector<int>& nums) 
    {
        unordered_map<int, vector<int>> dic;
        int max_sum = -1;

        for(int i = 0; i < nums.size(); ++i)
        {
            int digit_sum = convert_into_digit_sum(nums[i]);
            dic[digit_sum].push_back(nums[i]);
        }

        for(auto[key, value] : dic)
        {
            if(value.size() > 1)
            {
                sort(value.begin(), value.end());

                for(int i = 0; i < value.size(); ++i)
            {
                max_sum = max(max_sum, value[value.size() - 1] + value[value.size() - 2]);
            }
            }
            
        }


        return max_sum;
    }

    int convert_into_digit_sum(int target)
    {
        int convert_digit_sum = 0;
        while(target > 0)
        {
            convert_digit_sum += target % 10;
            target = target / 10;
        }

        return convert_digit_sum;
    }
};
