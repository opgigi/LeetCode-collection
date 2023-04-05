class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        map<vector<int>, int> row;
        map<vector<int>, int> column;

        vector<int> row_input;
        vector<int> column_input;
        int number_of_possible_pairs = 0;
        

        for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[i].size(); ++j)
            {
                // let's consider all possible tuple existed in each rows of nxn matrices       
                row_input.push_back(grid[i][j]);
                column_input.push_back(grid[j][i]);
            }
            ++row[row_input];
            ++column[column_input];
            row_input.clear();
            column_input.clear();
        }

        for(auto[key, value] : row)
        {
            //if the key value does exist in the in the column at the same time,
            // then we will return the value with the product of values from
            // row and column hashmap.

            // if you find the key element in the row also does exist in the column, then you will run this code.
            if(column.find(key) != column.end())
            {
                number_of_possible_pairs += column[key] * value;
            }
        }

        return number_of_possible_pairs;
        
    }
};
