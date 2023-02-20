### 560. [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
- 老招 traverse array的同時記錄prefix sum 維護一個map去紀錄某個sum出現了幾次 每次算出新的prefix sum 拿他跟target相減 看一下減出來的在map中紀錄出現幾次
- prefix sum比較想不到 要多注意