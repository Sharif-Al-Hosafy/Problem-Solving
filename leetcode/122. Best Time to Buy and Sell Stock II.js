let arr = [1, 2, 3, 4, 5];

function profit(arr) {
  let stock = 0;
  for (let i = 0; i < arr.length - 1; i++)
    if (arr[i] < arr[i + 1]) stock = stock + (arr[i + 1] - arr[i]);
    else continue;

  return stock;
}

console.log(profit(arr));
