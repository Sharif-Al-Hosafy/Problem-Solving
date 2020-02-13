var board = [
    ["5", "3", ".", ".", "7", ".", ".", ".", "."],
    ["6", ".", ".", "1", "9", "5", ".", ".", "."],
    ["3", "9", "8", ".", ".", ".", ".", "6", "."],
    ["8", ".", ".", ".", "6", ".", ".", ".", "3"],
    ["4", ".", ".", "8", ".", "3", ".", ".", "1"],
    ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
    [".", "6", ".", ".", ".", ".", "2", "8", "."],
    [".", ".", ".", "4", "1", "9", ".", ".", "5"],
    [".", ".", ".", ".", "8", ".", ".", "7", "9"]
]

var isValidSudoku = function (board) {
    let arrTemp = Array(10).fill(0)
    var isValid = true;

    for (var i = 0; i < 9; i++) {
        for (var j = 0; j < 9; j++) {
            if (board[i][j] === ".") continue;
            else {
                var temp = parseInt(board[i][j]);
                if (arrTemp[temp] === 1) {
                    isValid = false;
                    return isValid;
                }
                else {
                    arrTemp[temp] = 1;
                }
            }
        }
        arrTemp = Array(10).fill(0)
    }

    for (var i = 0; i < 9; i++) {
        for (var j = 0; j < 9; j++) {
            if (board[j][i] === ".") continue;
            else {
                var temp = parseInt(board[j][i]);
                if (arrTemp[temp] === 1) {
                    isValid = false;
                    return isValid;
                }
                else {
                    arrTemp[temp] = 1;
                }
            }
        }
        arrTemp = Array(10).fill(0)
    }

    var index = 0;
    for (var i = 0; i < 3; i++) {
        if (checkBox(board, arrTemp, index, col = 0) === false) return false;
        index += 3;
    }

    var index = 0;
    for (var i = 0; i < 3; i++) {
        if (checkBox(board, arrTemp, index, col = 3) === false) return false;
        index += 3;
    }

    var index = 0;
    for (var i = 0; i < 3; i++) {
        if (checkBox(board, arrTemp, index, col = 6) === false) return false;
        index += 3;
    }
    return isValid
};

function checkBox(board, arrTemp, index, col) {
    arrTemp = Array(10).fill(0);

    for (var i = index; i < index + 1; i++) {
        for (var j = col; j < col + 3; j++) {
            if (board[i][j] === ".") continue;
            else {
                var temp = parseInt(board[i][j]);
                if (arrTemp[temp] === 1) {
                    return false;
                }
                else {
                    arrTemp[temp] = 1;
                }
            }
        }
    }

    for (var i = index + 1; i <= index + 1; i++) {
        for (var j = col; j < col + 3; j++) {
            if (board[i][j] === ".") continue;
            else {
                var temp = parseInt(board[i][j]);
                if (arrTemp[temp] === 1) {
                    return false;
                }
                else {
                    arrTemp[temp] = 1;
                }
            }
        }
    }

    for (var i = index + 2; i <= index + 2; i++) {
        for (var j = col; j < col + 3; j++) {
            if (board[i][j] === ".") continue;
            else {
                var temp = parseInt(board[i][j]);
                if (arrTemp[temp] === 1) {
                    return false;
                }
                else {
                    arrTemp[temp] = 1;
                }
            }
        }
    }
}
console.log(isValidSudoku(board));
