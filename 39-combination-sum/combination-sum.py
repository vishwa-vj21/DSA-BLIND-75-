class Solution(object):
    def combinationSum(self, candidates, target):
        res=[]

        def dfs(i, cur, total):
            if total==target:
                res.append(cur[:])  #found valid combination, append only it's copy using slice op
                return
            if total>target or i>=len(candidates):
                return  #exceeded sum

            #include candidate[i]
            cur.append(candidates[i])
            dfs(i, cur, total+candidates[i])

            #exclude cand
            cur.pop()
            dfs(i+1, cur, total)

        dfs(0, [], 0)
        return res
       
        