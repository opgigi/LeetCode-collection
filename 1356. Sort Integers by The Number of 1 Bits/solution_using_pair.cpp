class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        int copy = 0;
        vector<pair<int, int>> number_of_binary_digit;
        pair<int, int> data_entry;
        // let's convert all the element into the binary code.
        for(int i = 0; i< arr.size(); ++i)
        {
            if(copy == 0)
            {
                data_entry.first = 0;
                data_entry.second = 0;
                
            }


            data_entry.second = arr[i];
            data_entry.first = 0;
            
            while(arr[i] >= 1)
            {

               
                if(arr[i] % 2 == 0)
                {
                    arr[i] = (arr[i]/ 2);
                }
                else
                {
                    arr[i] = (arr[i]/ 2);
                    ++data_entry.first;

                    
                }
                
                
            }

            
            
            
            
                number_of_binary_digit.push_back(data_entry);
            


        }

        sort(number_of_binary_digit.begin(), number_of_binary_digit.end());
        vector<int> sorted_array_by_bits;
        for(int i = 0; i < arr.size(); ++i)
        {
            sorted_array_by_bits.push_back(number_of_binary_digit[i].second);
        }


        return sorted_array_by_bits;
    }
};
