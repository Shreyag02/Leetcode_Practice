class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength = 0;
        int count = 0;

        for(int num : nums){
            
            if(num) count++;
            else count = 0;

            if(maxLength<count) maxLength = count;
                
        }
            
        return maxLength;
    }
};