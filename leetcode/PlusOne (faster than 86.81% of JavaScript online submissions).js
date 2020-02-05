var plusOne = function (digits) {
    let flag = false;
    let cnt = 0;
    let i = digits.length - 1;

    for (let i = 0; i < digits.length; i++)
        if (digits[i] === 9) cnt++;

    if (cnt === digits.length) flag = true;

    if (digits[0] === 9 && flag === true) {
        digits[0] = 1;
        for (let i = 1; i < digits.length; i++)
            digits[i] = 0;
        digits.push(0);
    }
    else {
        while (digits[i] === 9) {
            digits[i] = 0;
            i--;
        }
        digits[i]++;
    }
    return digits;
};

console.log(plusOne([9, 8, 7, 6, 5, 4, 9, 9, 9, 9]));