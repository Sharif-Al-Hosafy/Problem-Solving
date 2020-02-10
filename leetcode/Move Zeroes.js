var arr = [1, 0, 2, 0, 3, 0, 0];
var moveZeroes = function (arr) {
    var cnt = 0;
    var swap = function (i, j) {
        var temp = arr[i];
        arr[i] = arr[j]
        arr[j] = temp;
    };
    for (var i = 0; i < arr.length;) {
        if (arr[i] === 0) {
            cnt++;
            i++;
        }
        else {
            while (cnt != 0) {
                swap(i, i - 1);
                i--;
                cnt--;
            }
            i++;
        }
    }
};

moveZeroes(arr);
console.log(arr);