
3005. Count Elements With Maximum Frequency

int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {}; //統計數字出現的次數,一開始是0 (每個陣列格子裡,都會補0)
    int best = 0; //出現次數最多的是 best次
    for(int i=0; i<numsSize; i++){
        int now = nums[i];//現在要統計的數字是 now
        a[now]++; //現在的數子now 統計出現的次數 a[now] ++; 增加一次
        if(a[now]>best) best = a[now];
    } 
    int ans = 0;
    for(int i=1; i<=100; i++){
        if (a[i]==best) ans+=a[i]; //是最好的答案,那增加次數
    }
    return ans;
}