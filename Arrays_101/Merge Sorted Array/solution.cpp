// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         int ans[m+n];
//         int i=0,j=0,ind=0;
        
//         while(i<m && j<n)
//         {
//             if(nums1[i]<nums2[j])
//             {
//                 ans[ind] = nums1[i];
//                 i++;
//                 ind++;
//             }
//             else
//             {
//                 ans[ind] = nums2[j];
//                 j++;
//                 ind++;
//             }
//         }
        
//         while(i<m)
//         {
//             ans[ind] = nums1[i];
//             i++;
//             ind++;
//         }
        
//         while(j<n)
//         {
//             ans[ind] = nums2[j];
//             j++;
//             ind++;
//         }
        
//         for(int i=0; i<(m+n); i++)
//             nums1[i] = ans[i];
//     }
// };

// OR

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    

    for(int i = 0; i< n ; i++)
        nums1[m++] = nums2[i];

    sort(nums1.begin(), nums1.end());
    }

};