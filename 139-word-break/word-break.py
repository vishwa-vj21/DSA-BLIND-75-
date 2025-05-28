class Solution(object):
    def wordBreak(self, s, wordDict):

        dp =[False]*(len(s)+1)
        dp[(len(s))]=True

        for i in range(len(s)-1, -1, -1):
            for w in wordDict:
                if(i+len(w)<=len(s) and s[i:i+len(w)]==w): #it has to go from i to len(w) and not len(w)+1. and we gotta make sure if we can add the word or it's exceeding the length of the string itself.
                    dp[i]=dp[i+len(w)]  #if one match is made then we check for the remaing match with this formula
                if dp[i]:
                    break #no need to check rest if one match is found
        return dp[0]

    
        