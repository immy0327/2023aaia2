1208. Get Equal Substrings Within Budget

#week15-1.py 寫到一半的python版，等一下還有 寫到一半的c版
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用Python 把字串的迴圈寫出來
        N = len(s) #先知道字串的長度
        ans = 0
        j = 0 #毛毛蟲的尾巴
        for i in range(N): # 字串的迴圈 毛毛蟲的頭i
            maxCost -= abs(ord(s[i]) - ord(t[i])) #用多少的能量，才能吃到i格
            while maxCost < 0: #能量不夠，尾巴要縮起來
                maxCost += abs(ord(s[i]) - ord(t[i]))
                j += 1
            ans = max(ans, i-j+1)
            print( s[i], t[i] ) #字串的陣列
        return ans #課堂作業1，先隨便給個0當答案(答案當然不對)