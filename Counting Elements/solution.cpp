class Solution {
public:
    int countElements(vector<int>& arr) 
    {
        // first we will create a hash map and store all the element in the array
        unordered_map<int, int> dic;
        int vaild_numbers = 0;
        
        // we are going to store all element we are searching for in the hashmap and we will go through the loop again.
        for(int i = 0; i < arr.size(); ++i)
        {
            dic[arr[i]] = i;
        }
        
        
        for(int i = 0; i < arr.size(); ++i)
        {
            // if you find the element in the hashmap then increment the number.
            if(dic.find(arr[i] + 1) != dic.end())
            {
                ++vaild_numbers;
            }
        }
        
        
        return vaild_numbers;
    }
};
