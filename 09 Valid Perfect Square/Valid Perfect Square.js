/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
    let low = 1, high = 100000;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        let sq = mid * mid;
        if (sq == num)
            return true;
        else if (sq > num)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
};