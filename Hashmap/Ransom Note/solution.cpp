class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> magazine_hash;
        unordered_map<char, int> ransomNote_hash;
        
        for(int i = 0; i < ransomNote.size(); ++i)
        {
            ++ransomNote_hash[ransomNote[i]];
        }
        
        for(int i = 0; i < magazine.size(); ++i)
        {
            ++magazine_hash[magazine[i]];
        }
        
        if(ransomNote_hash.size() > magazine_hash.size())
        {
            return false;
        }
        
        for(auto[key, value]: ransomNote_hash)
        {
            if(magazine_hash[key] < ransomNote_hash[key])
            {
                return false;
            }
        }
        
        return true;
        
        
    }
};
