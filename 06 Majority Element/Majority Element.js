/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    let mp = new Map();
    let mx = -Infinity, value;
    for (let i = 0; i < nums.length; i++) {
        let x = 1;
        if (mp.has(nums[i]))
            x += mp.get(nums[i]);
        mp.set(nums[i], x);
        if (x > mx)
            mx = x, value = nums[i];
    }
    return value;
};