//Thuat toan tim kiem bang DSF
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void DFS(int start) {
        vector<bool> visited(V, false);
        stack<int> s;

        s.push(start);

        while (!s.empty()) {
            int v = s.top();
            s.pop();

            if (!visited[v]) {
                cout << v << " ";
                visited[v] = true;
            }

            for (int i = adj[v].size() - 1; i >= 0; i--) {
                if (!visited[adj[v][i]]) {
                    s.push(adj[v][i]);
                }
            }
        }
    }
};

