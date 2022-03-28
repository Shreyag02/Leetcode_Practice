/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
  // nums1.splice(m,n,...nums2);
  // nums1.sort((a,b)=>a-b)

  let combined = m + n - 1,
    first = m - 1,
    second = n - 1;

  while (second >= 0) {
    if (nums1[first] > nums2[second]) {
      nums1[combined] = nums1[first];
      first--;
    } else {
      nums1[combined] = nums2[second];
      second--;
    }
    combined--;
  }
};
