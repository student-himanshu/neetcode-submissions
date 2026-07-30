#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> toposort(int v, vector<unordered_set<int>>& adj, vector<int>& indegree) {
        queue<int> q;
        for (int i = 0; i < v; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for (auto it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) q.push(it);
            }
        }
        return topo;
    }

public:
    string foreignDictionary(vector<string>& words) {
        vector<unordered_set<int>> adj(26);
        vector<int> indegree(26, 0);
        vector<int> present(26, 0);

        // Mark all present characters
        for (string &w : words) {
            for (char c : w) present[c - 'a'] = 1;
        }

        // Build graph
        for (int i = 0; i < words.size() - 1; i++) {
            string s1 = words[i];
            string s2 = words[i + 1];

            // ✅ Condition 1: Invalid Prefix (e.g., "wrtkj", "wrt")
            if (s1.size() > s2.size() && s1.rfind(s2, 0) == 0) {
                return "";
            }

            int len = min(s1.size(), s2.size());
            bool foundDifference = false;

            for (int j = 0; j < len; j++) {
                if (s1[j] != s2[j]) {
                    int u = s1[j] - 'a';
                    int v = s2[j] - 'a';

                    // ✅ Condition 2: Avoid contradictions (a<b<a)
                    // If edge v→u already exists, we have a cycle
                    if (adj[v].count(u)) return "";

                    if (!adj[u].count(v)) {
                        adj[u].insert(v);
                        indegree[v]++;
                    }
                    foundDifference = true;
                    break; // only first differing char matters
                }
            }
            // No difference found → handled prefix case above
        }

        // Topological Sort
        vector<int> topo = toposort(26, adj, indegree);

        // If cycle exists (not all chars included), return ""
        int totalChars = accumulate(present.begin(), present.end(), 0);
        if ((int)topo.size() < totalChars) return "";

        // Build final answer
        string ans;
        for (int it : topo) {
            if (present[it]) ans += char(it + 'a');
        }
        return ans;
    }
};
