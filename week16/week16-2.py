
1002. Find Common Characters

class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        #其實題目不是三個
        #counter = Counter(words[0]) & Counter(words[1]) & Counter(words[2])
        counter = Counter(words[0])
        for i in range(1,len(words)):
            counter &= Counter(words[i])
        ans = []
        for c in counter:
            for i in range(counter[c]): # 看要出現幾次
                ans.append(c)  # 就重複幾次
        return ans
        