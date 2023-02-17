### 287. [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
- 因為數字在 [1, n]，所以一直 nums[nums[i]] 一定不會 overflow
- 再來要找重複，如果有重複就表示一定有環，就可以用快慢指標
- 但快慢指標只能找到在哪裡相遇，不代表一定會在環的頭相遇，所以slow要回到原點，然後一次走一格，fast也要改成一次走一格，這樣第二次相遇就會是環的頭
![](https://i.imgur.com/SoH27aK.png)
- 第一次相遇是 2(L+x) = L+nC+x，所以 L+x = nC
- 第二次相遇就是 cycle head
​