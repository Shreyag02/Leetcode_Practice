/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
  let maxLength = 0;
  let count = 0;

  nums.forEach((num) => {
    if (num) count++;
    else count = 0;

    maxLength = maxLength < count ? count : maxLength;
  });
  return maxLength;
};
