# https://leetcode-cn.com/problems/keyboard-row/
class Solution:
    def findWords(self, words):
        word_dict = {}
        for i in "qwertyuiopQWERTYUIOP":
            word_dict[i] = 1
        for j in "asdfghjklASDFGHJKL":
            word_dict[j] = 2
        for k in "zxcvbnmZXCVBNM":
            word_dict[k] = 3
        res = []
        for word in words:
            tmp = word_dict[word[0]]
            if all([word_dict[word[x]] == tmp for x in range(len(word))]):
                res.append(word)
        return res
        
        
if __name__ == "__main__":
    solu = Solution()
    words = ["Hello","Alaska","Dad","Peace"]
    print(solu.findWords(words))
                