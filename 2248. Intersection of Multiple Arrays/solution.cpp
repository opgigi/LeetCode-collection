class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        /*
        Idea: we need to create an hashmap to store all the common values
        and then we need to figure out the way to sort the element exist
        in the array.
        */

        unordered_map<int, int> dic;

        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < nums[i].size(); ++j)
            {
                /*
                the key task for this problem is to find the element which are
                present in each array of nums, hence, we need to find the
                elements that are common in every array. to do this we need to
                count the number of elements are repeated while you re 
                scanning all the array. the main idea is, that we will count the
                integer every single time and that digit is repeated nums.size()
                times, that means that element will appear in each every array.
                */
                ++dic[nums[i][j]];
            
            }
        }

        vector<int> collection_of_common_element;
        // now we need to refer which element is reapeated nums.size() times.
        for(auto[key, value]: dic)
        {
            // if the key has repeatef nums.size() times, then we will keep the value.
            if(value == nums.size())
            {
                collection_of_common_element.push_back(key);
            }
        }

        // once you find all the element which one is common in every single array, then you will sort the array.

        sort(collection_of_common_element.begin(), collection_of_common_element.end());

        return collection_of_common_element;
    }
};
