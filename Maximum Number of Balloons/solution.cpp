class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        unordered_map<char, int> counts;
        counts['b'] = 0;
        counts['a'] = 0;
        counts['l'] = 0;
        counts['o'] = 0;
        counts['n'] = 0;
        
        int ans = 0;
        
        for(int i = 0; i < text.size(); ++i)
        {
            ++counts[text[i]];
        }
        
        ans = counts['a'];
        
        ans = min(ans, counts['b']);
        
        ans = min(ans, counts['l'] / 2);
        
        ans = min(ans, counts['o'] / 2);
        
        ans = min(ans, counts['n']);


         
        return ans;
    }
};
