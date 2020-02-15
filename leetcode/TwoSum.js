var twoSum = function (nums, target) {
    var indicies = [];
    var sum = 0;
    for (var i = 0; i < nums.length; i++) {
        for (var j = i + 1; j < nums.length; j++) {
            sum = nums[i] + nums[j];
            if (sum === target) {
                indicies[0] = i;
                indicies[1] = j;
                return indicies;
            }
            sum = 0;
        }
    }
    return undefined;
};

console.log(twoSum([2, 7, 11, 15], 26));