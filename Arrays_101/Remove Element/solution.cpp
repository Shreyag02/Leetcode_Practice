// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val)
//     {
//         vector<int>::iterator it=nums.begin();
//         while (it !=nums.end())
//         {
//             if (*it==val)
//                 it = nums.erase(it);
//             else
//                 it++;
//         }
//         return nums.size();
//     }
// };

// OR

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        int k=0;

        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==val){
                continue;
            }

            res.push_back(nums[i]);
            k++;
    
        }
      
        for(int i=0;i<res.size();i++)
            nums[i]= res[i];

        return k;
    }
};