/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */

var sortedArrayToBST = function (nums, start = 0, end = nums.length) {
  if (nums.length === 0) return null;

  if (start >= end) {
    return null;
  }
  const mid = Math.floor((start + end) / 2);
  const root = new TreeNode(nums[mid]);
  root.left = sortedArrayToBST(nums, start, mid);
  root.right = sortedArrayToBST(nums, mid + 1, end);
  return root;
};