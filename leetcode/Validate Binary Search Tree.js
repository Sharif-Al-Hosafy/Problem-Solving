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
 * @return {boolean}
 */

var isValidBST = function (root) {
  var stack = [];
  var leftChild;

  while (root || stack.length != 0) {
    while (root) {
      stack.push(root);
      root = root.left;
    }

    root = stack.pop();
    if (root.val <= leftChild) return false;
    leftChild = root.val;
    root = root.right;
  }
  return true;
};
