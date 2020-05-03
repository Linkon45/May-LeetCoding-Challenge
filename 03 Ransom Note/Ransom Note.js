/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
    let mp = new Map();
    for (let i = 0; i < magazine.length; i++) {
        let x = 1;
        if (mp.has(magazine[i]))
            x += mp.get(magazine[i])
        mp.set(magazine[i], x);
    }
    for (let i = 0; i < ransomNote.length; i++) {
        if (!mp.has(ransomNote[i]) || mp.get(ransomNote[i]) == 0)
            return false;
        else
            mp.set(ransomNote[i], mp.get(ransomNote[i]) - 1);
    }
    return true;
};