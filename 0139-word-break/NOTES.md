### 139. [Word Break](https://leetcode.com/problems/word-break/)
- O(n^3) 的方法，i, j跑一個n^2的尋訪，但是i,j框起來的字如果有在 dict 裡面的話那 dp[j] = 1，下一圈的i就要從dp[i]==1的地方開始
- 最後判斷最後面的dp[i] 是不是1就好