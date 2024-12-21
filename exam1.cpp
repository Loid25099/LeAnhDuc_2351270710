#include <iostream>
#include <vector>
#include <set>
using namespace std;
void dfs(int node, const vector<vector<int>>& graph, set<int>& visited) {
    visited.insert(node);
    cout << node << " ";
    for (int neighbor : graph[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(neighbor, graph, visited);
        }
    }
}
int main() {
    vector<vector<int>> graph = {
        {1, 2},   
        {0, 3},   
        {0},       
        {1}       
    };

    set<int> visited;

    cout << "DFS b?t d?u t? d?nh 0: ";
    dfs(0, graph, visited);

    return 0;
}


