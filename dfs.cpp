#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

class Graph {
public:
    // Using an adjacency list to represent the graph
    std::unordered_map<int, std::vector<int>> adjList;

    // Add edge to the graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    // Recursive DFS function
    void dfsRecursive(int start, std::unordered_map<int, bool>& visited) {
        // Mark the current node as visited
        visited[start] = true;
        std::cout << start << " ";

        // Recur for all the vertices adjacent to this vertex
        for (int neighbor : adjList[start]) {
            if (!visited[neighbor]) {
                dfsRecursive(neighbor, visited);
            }
        }
    }

    // Iterative DFS function
    void dfsIterative(int start) {
        std::unordered_map<int, bool> visited;
        std::stack<int> stack;

        // Push the starting vertex onto the stack
        stack.push(start);

        while (!stack.empty()) {
            // Pop a vertex from stack
            int vertex = stack.top();
            stack.pop();

            // If the vertex is not visited, mark it visited and print it
            if (!visited[vertex]) {
                visited[vertex] = true;
                std::cout << vertex << " ";
            }

            // Push all unvisited adjacent vertices onto the stack
            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                }
            }
        }
    }

    // Function to perform DFS traversal from a given source
    void performDFS(int start) {
        std::unordered_map<int, bool> visited; // To keep track of visited vertices

        std::cout << "DFS (Recursive): ";
        dfsRecursive(start, visited);
        std::cout << std::endl;

        // Resetting visited map for iterative DFS
        visited.clear();
        std::cout << "DFS (Iterative): ";
        dfsIterative(start);
        std::cout << std::endl;
    }
};

int main() {
    Graph g;

    // Adding edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);
    g.addEdge(3, 7);
    g.addEdge(4, 8);
    g.addEdge(5, 9);

    int startVertex = 0;
    g.performDFS(startVertex);

    return 0;
}


