class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int> q;
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        for(auto &n: prerequisites){
            adj[n[1]].push_back(n[0]);
            indegree[n[0]]++;
        }
        
        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            for(int ad: adj[top]){
                indegree[ad]--;
                if(indegree[ad]==0){
                    q.push(ad);
                }
            }
            count++;
            
        }
    return count==numCourses;
    }
};