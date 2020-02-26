# https://leetcode-cn.com/problems/bulls-and-cows/
class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        num_a = num_b = 0
        word_dict = {}
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                num_a += 1
            elif secret[i] not in word_dict.keys():
                word_dict[secret[i]] = 1
            else:
                word_dict[secret[i]] += 1
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                continue
            else:
                if guess[i] in word_dict.keys() and word_dict[guess[i]] >= 1:
                    num_b += 1
                    word_dict[guess[i]] -= 1
                    
        res = str(num_a) + "A" + str(num_b) + "B"
        return res
        
        
if __name__ == "__main__":
    solu = Solution()
    secret = "19487290"
    guess = "29065513"
    print(solu.getHint(secret, guess))
                