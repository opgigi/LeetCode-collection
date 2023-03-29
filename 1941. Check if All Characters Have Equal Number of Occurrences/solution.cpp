class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        /*
        goal: to check if all characters have equal number of occurrences

        to solve this problem, we will first create a hash map to store all the
        character and the frequencies and then in addtion to that, we will also 
        define a set, to see if any of the frequencies has the different value 
        compared to any other frequinces in the hash map.
        */

        unordered_map<char, int> count;
        set<int> duplicate_frequencies;

        // first, we will iterate thru the string and catch the key and the frequiencie along to it.
        for(int i = 0; i < s.size(); ++i)
        {
            ++count[s[i]];
        }

        // after this process, we will go through one more loop to iterate through the frequencies of each letter exist in the hashmap
        for(auto[key, value] : count)
        {
            if(duplicate_frequencies.size() == 0)
            {
                duplicate_frequencies.insert(value);
            }
            
            
            // if you find the frequencies that differ from every other frequencies that is, this means the characters does not apprear in the same degree.
            if(duplicate_frequencies.find(value) == duplicate_frequencies.end())
            {
                return false;
            }
        }


        return true;
    }
};
