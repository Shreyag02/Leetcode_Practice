/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
  let count = 0;

  nums.forEach((num) => {
    //OR
    //    let length = 0;
    //         while (num) {
    //           num /= 10;
    //           length += 1;
    //         }
    //         if (length % 2 == 0) count += 1;

    if (num.toString().length % 2 === 0) count++;
  });

  return count;
};
