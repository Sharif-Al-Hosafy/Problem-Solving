var singleNumber = function(arr) {
  if (arr.length === 1) return arr[0];
  else {
    let arrTempPos = [];
    let arrTempNeg = [];

    for (let i = 0; i < arr.length; i++) {
      arrTempPos[i] = 0;
      arrTempNeg[i] = 0;
    }

    for (let i = 0; i < arr.length; i++) {
      if (arr[i] > 0) {
        arrTempPos[arr[i]] += 1;
      } else {
        arrTempNeg[Math.abs(arr[i])] += 1;
      }
    }

    for (let i = 0; i < arr.length; i++) if (arrTempPos[i] === 1) return i;
    for (let i = 0; i < arr.length; i++) if (arrTempNeg[i] === 1) return -i;
  }
};
