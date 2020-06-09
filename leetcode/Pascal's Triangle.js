/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
  if (numRows === 0) return [];
  if (numRows === 1) return [[1]];
  var arr = [[1], [1, 1]];
  for (var i = 1; i < numRows - 1; i++) {
    var temp = [];
    for (var j = 0; j < arr[i].length - 1; j++) {
      temp.push(arr[i][j] + arr[i][j + 1]);
    }
    temp.unshift(1);
    temp.push(1);
    arr.push(temp);
  }
  return arr;
};
