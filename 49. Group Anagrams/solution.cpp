class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> counts;
        string sorted_string;
        vector<vector<string>> ans;
        vector<string> input;

        for(int i = 0; i < strs.size(); ++i)
        {
            sorted_string = strs[i];
            sort(sorted_string.begin(), sorted_string.end());

            counts[sorted_string].push_back(strs[i]);
        }

        for(auto[key, value] : counts)
        {
            for(int i = 0; i < value.size(); ++i)
            {
                input.push_back(value[i]);
            }
            ans.push_back(input);
            input.clear();
        }


        return ans;
    }
};
