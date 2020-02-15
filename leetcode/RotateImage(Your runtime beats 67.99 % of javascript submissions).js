var matrix =
    [
        [1, 2],
        [3, 4]
    ]

var rotate = function (matrix) {
    var cnt = 0;
    var size = matrix[0].length;
    var j = size;
    var k = 0;
    var arrTemp = [];

    for (var i = 0; i < matrix.length; i++)
        arrTemp = arrTemp.concat(matrix[i]);

    while (cnt < size) {
        j--;
        for (var i = 0; i < size; i++ , k++) {
            matrix[i][j] = arrTemp[k];
        }
        cnt++;
    }
};
rotate(matrix);
console.log(matrix)