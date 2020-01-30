nums = [1, 2, 3, 1, 5];

function merge(arr1, arr2) {
  let results = [],
    i = 0,
    j = 0;

  while (i < arr1.length && j < arr2.length) {
    if (arr1[i] < arr2[j]) {
      results.push(arr1[i]);
      i++;
    } else {
      results.push(arr2[j]);
      j++;
    }
  }

  while (i < arr1.length) {
    results.push(arr1[i]);
    i++;
  }

  while (j < arr2.length) {
    results.push(arr2[j]);
    j++;
  }
  return results;
}

function mergeSort(arr) {
  if (arr.length <= 1) return arr;
  let mid = Math.floor(arr.length / 2);
  let left = mergeSort(arr.slice(0, mid));
  let right = mergeSort(arr.slice(mid));
  return merge(left, right);
}

var containsDuplicate = function(nums) {
  let sorted = mergeSort(nums);
  let duplicate = false;
  for (let i = 0; i < sorted.length; i++)
    if (sorted[i] === sorted[i + 1]) {
      duplicate = true;
      break;
    }
  return duplicate;
};

console.log(containsDuplicate(nums));
