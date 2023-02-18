### 105. [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
- preorder 的第一個一定是 root
- 再來去找 inorder，左邊就是left tree，右邊就是right tree
- preorder 的概念就是先走自己，再走完左邊的樹，再走完右邊的樹，所以可以用遞迴，紀錄subtree的root後，先建左邊的樹，preorder的index就按照順序走，再去建右邊的樹