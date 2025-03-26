
## Documentation 

### C++ implementation of the Depth-First Search (DFS) algorithm, showcasing both recursive and iterative methods.

- Graph Representation: The graph is represented using an adjacency list, which is a map where each key corresponds to a vertex, and its value is a vector containing the adjacent vertices.
- Depth-First Search (DFS): DFS is a graph traversal algorithm that explores as far as possible along each branch before backtracking. It can be implemented in both recursive and iterative forms.
- Visited Tracking: A map is utilized to track visited vertices, preventing cycles and ensuring that each vertex is processed only once.

Code

The code is organized into a Graph class with the following essential components:

- addEdge: A method to create edges between vertices.
- dfsRecursive: A method that implements the recursive DFS algorithm.
- dfsIterative: A method that implements the iterative DFS algorithm using a stack.
- performDFS: A method that starts the DFS traversal from a specified starting vertex.

Explanation:

- Graph Class: The Graph class encapsulates the graph's functionality, including the adjacency list and methods for adding edges and executing DFS.
- addEdge Method: This method takes two integers, u and v, and establishes an undirected edge between them by updating the adjacency list.
- dfsRecursive Method: This method carries out a recursive DFS starting from the initial vertex. It marks the vertex as visited and recursively visits all unvisited neighbors.
- dfsIterative Method: This method implements DFS iteratively using a stack. It processes vertices by popping from the stack and pushing unvisited neighbors onto it.
- performDFS Method: This method coordinates the DFS traversal by invoking both the recursive and iterative approaches.
