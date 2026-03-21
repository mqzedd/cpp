#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())
#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    unordered_map<int, vector<int>> adjList;

public:
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
    }

    void printGraph() const
    {
        for (const auto &pair : adjList)
        {
            cout << pair.first << " -> ";
            for (const int &neighbor : pair.second)
            {
                cout << neighbor << " ";
            }
            cout << "\n";
        }
    }

    bool hasEdge(int u, int v) const
    {
        if (adjList.find(u) == adjList.end())
            return false;
        for (const int &neighbor : adjList.at(u))
        {
            if (neighbor == v)
                return true;
        }
        return false;
    }

    vector<int> getNeighbors(int node) const
    {
        if (adjList.find(node) != adjList.end())
        {
            return adjList.at(node);
        }
        return {};
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Graph graph;

    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    cout << "graph adj list:\n";
    graph.printGraph();

    cout << "edge between 1 and 3: " << (graph.hasEdge(1, 3) ? "y" : "n") << "\n";
    cout << "edge between 2 and 5: " << (graph.hasEdge(2, 5) ? "y" : "n") << "\n";

    vector<int> neighbors = graph.getNeighbors(4);
    for (const int &neighbor : neighbors)
    {
        cout << neighbor << " ";
    }
    cout << "\n";

    return 0;
}
