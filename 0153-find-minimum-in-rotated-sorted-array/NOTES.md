- 用 binary search 做
- 如果中間>右邊，表示最小值會在右邊那段，反之亦然
- 控制住right讓right如果遇到最小值的時候不要挪到mid-1，挪到mid就好，這樣就不會讓最小值跑到區間外，最後輸出right