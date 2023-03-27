class Solution {
public:
    
    
    
    
    int longestOnes(vector<int>& nums, int k)
    {
        // we are going to use sliding window to catch the max length of the sub_array
        int right = 0;
        int left = 0;
        int how_many_zero = 0;
        int max_length = 0;
        
        

            
            
            while(right < nums.size())
            {
                
                if(nums[right] == 0 && how_many_zero < k)
                {
                    ++how_many_zero;
                    ++right;
                }
                else if(nums[right] == 0 && how_many_zero == k) // this is the case when you catch the moment where you have more then k number of zeros on the array
                {
                    max_length = max(max_length, right - left);
                    ++how_many_zero;
                    // you need to shrink the size on the left hand side.
                    while(how_many_zero > k && left <= right)
                    {
                        if(nums[left] == 1)
                        {
                            ++left;
                        }
                        else if(nums[left] == 0)
                        {
                            ++left;
                            --how_many_zero;
                        }
                    }
                    
                    ++right;
                }
                else if(nums[right] == 1 && how_many_zero == k)
                {
                    ++right;
                }
                else
                {
                    ++right;
                }
                
                
            }
        
            
        
        if(how_many_zero <= k && right - left == nums.size())
        {
            return right - left;
        }
        
        max_length = max(max_length, right - left);
        
        
        
        return max_length;
    }
};
