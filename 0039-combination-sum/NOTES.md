### 39. [Combination Sum](https://leetcode.com/problems/combination-sum/)
- 以範例 candidates = [2,3,6,7], target = 7 來看
- 宣告兩個 vector，vector<vector<int>>ans, vector<int>r
- r 先放 2, target = 5, 然後就進遞迴
- 出遞迴後把2從r拿掉，再放3，target = 4
- 以此類推跑到最後，這樣每種狀況就都會被跑到