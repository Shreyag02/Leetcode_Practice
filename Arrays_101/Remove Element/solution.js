// /**
//  * @param {number[]} nums
//  * @param {number} val
//  * @return {number}
//  */
//  var removeElement = function(nums, val) {
//     let index = 0
//     for (let i = 0; i < nums.length; i++) {
//         if (nums[i] !== val) {
//             nums[index] = nums[i]
//             index++
//         }
//     }
//     return index
// };

// OR

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
  var res = nums.filter((num) => num !== val);
  for (let i = 0; i < res.length; i++) {
    nums[i] = res[i];
  }
  return res.length;
};
