
2000. Reverse Prefix of Word
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):#重點1: 找到字母
            if word[i]==ch:#找到字母了這時候i很重要
                #重點2: 把word[0]...word[i]字寫反
                return word[i::-1] + word[i+1:] #python特殊範圍的寫法
            #如果都沒有提早結束，就是找不到。就原來的字回傳
        return word