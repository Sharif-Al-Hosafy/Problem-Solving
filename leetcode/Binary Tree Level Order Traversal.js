/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function (root) {
  if (!root) return [];
  var Q1 = [];
  var Q2 = [];
  var arr = [];
  var r = [];
  r.push(root.val);
  arr.push(r);

  Q1.push(root);
  var cnt = 0,
    i = 0;
  while (Q1.length !== 0) {
    Q2 = [];
    while (cnt < arr[i].length) {
      cnt++;
      var current = Q1.shift();
      if (current.left) {
        Q1.push(current.left);
        Q2.push(current.left.val);
      }
      if (current.right) {
        Q1.push(current.right);
        Q2.push(current.right.val);
      }
    }
    if (Q2.length != 0) arr.push(Q2);
    cnt = 0;
    i++;
  }
  return arr;
};
