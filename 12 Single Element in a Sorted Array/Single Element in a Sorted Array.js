/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function (nums) {
    let x;
    if (nums.length == 1)
        return nums[0];
    for (let i = 0; i < nums.length;) {
        if (nums[i] == nums[i + 1])
            i += 2;
        else
            x = nums[i], i++;
    }
    return x;
};