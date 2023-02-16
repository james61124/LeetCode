### [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- 先判斷如果list1, list2有NULL的情況
- 再來判斷head要從哪裡開始，然後list1, list2移去要比較的那個node
- 再來就是比較，list1, list2都是保持在要比較的狀態
- 最後當一邊先到NULL，表示cur要指到另一排