let arr1 = [1, 2, 3, 4, 5, 8],
  arr2 = [11, 12, 20, 3, 4, 9];
var intersect = function(arr1, arr2) {
  let arrTemp = [];

  if (arr1.length > arr2.length) {
    for (let i = 0; i < arr2.length; i++) {
      for (let j = 0; j < arr1.length; j++) {
        if (arr2[i] === arr1[j]) {
          arrTemp.push(arr2[i]);
          arr1[j] = " ";
          break;
        }
      }
    }
  } else {
    for (let i = 0; i < arr1.length; i++) {
      for (let j = 0; j < arr2.length; j++) {
        if (arr1[i] === arr2[j]) {
          arrTemp.push(arr1[i]);
          arr2[j] = " ";
          break;
        }
      }
    }
  }

  return arrTemp;
};

console.log(intersect(arr1, arr2));
