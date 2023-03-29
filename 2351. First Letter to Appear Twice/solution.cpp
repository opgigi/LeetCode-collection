class Solution {
public:
    char repeatedCharacter(string s) 
    {
        unordered_map<char, int> dic;
        

        for(int i = 0; i < s.size(); ++i)
        {
            char input = s[i];
            // if we find the letter is already existed in the hashmap, then we will return the output.
            if(dic.find(s[i]) != dic.end())
            {
                return s[i];
            }

            dic[input] = i;

        }

        //otherwise, if you do not find any letters then return - 1;
        return -1;
        
    }
};
