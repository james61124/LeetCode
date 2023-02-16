### 128. [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)
- unordered_set 存所有數字
- 一個一個找，如果該數是那個區段最小的數字，那就在set裡面往上找有沒有更大的，如果不是最小的話（就是往下數在set裡還有）就可以直接跳過，這樣一個數列就只會被尋訪過一次