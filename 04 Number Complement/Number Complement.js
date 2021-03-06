/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function (num) {
    let result = 0, power = 1;
    while (num > 0) {
        result += (num % 2 ^ 1) * power;
        power = power << 1;
        num = num >> 1;
    }
    return result;
};