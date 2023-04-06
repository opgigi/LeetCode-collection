class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char, int> dic;
        int number_of_jewels = 0;
        
        for(int i = 0; i < stones.size(); ++i)
        {
            ++dic[stones[i]];
        }
        
        
        for(int i = 0; i < jewels.size(); ++i)
        {
            // once you re done putting stones in the dic, then you will go through jewels to find the total numbers of the jewels available in the stone.
            if(dic.find(jewels[i]) != dic.end())
            {
                number_of_jewels += dic[jewels[i]];
                dic[jewels[i]] = 0;
            }
        }
        
        
        return number_of_jewels;
        
    }
};
