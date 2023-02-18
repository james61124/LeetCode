### 98. [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
- 題目要求是整個 subtree 都不可以有大於 root 或是小於 root 的，所以整個 subtree都要比到
- 直覺解法是傳入min max 然後 dfs 比較
- 另解是用 inorder 尋訪，BST 的話 inorder（left, 自己, right） 一定會從小到大