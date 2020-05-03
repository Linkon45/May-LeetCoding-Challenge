/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function (J, S) {
    let mp = new Map();
    for (let i = 0; i < S.length; i++) {
        let x = 1;
        if (mp.has(S[i]))
            x += mp.get(S[i]);
        mp.set(S[i], x);
    }
    let cnt = 0;
    for (let i = 0; i < J.length; i++) {
        if (mp.has(J[i]))
            cnt += mp.get(J[i]);
    }
    return cnt;
};