#include <iostream>
using namespace std;

int paths[20][20]; // Adjacency matrix to store connections
int path[20];      // To store the current path
bool visited[20];  // To mark visited street corners
int pathCount = 0; // To count total paths

// Function to find all routes
void findRoutes(int current, int destination, int step) {
    path[step] = current; // Add current street corner to the path

    if (current == destination) {
        // Print the current path
        for (int i = 0; i <= step; i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        pathCount++; // Increment path count
        return;
    }

    // Explore connected streets
    for (int i = 1; i < 20; i++) {
        if (paths[current][i] == 1 && !visited[i]) { // If there is a connection and not visited
            visited[i] = true;      // Mark as visited
            findRoutes(i, destination, step + 1); // Recur to the next street corner
            visited[i] = false;     // Backtrack
        }
    }
}

int main() {
    int destination;

    // Input the destination
    cout << "Enter the destination street corner: ";
    cin >> destination;

    // Input the street connections
    cout << "Enter the street connections (enter '0 0' to stop):" << endl;
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        paths[a][b] = 1; // Mark connection
        paths[b][a] = 1; // Mark bidirectional connection
    }

    // Initialize visited array
    for (int i = 0; i < 20; i++) {
        visited[i] = false;
    }

    // Start the route finding from street corner 1
    visited[1] = true;
    cout << "Routes from the firestation to streetcorner " << destination << ":" << endl;
    findRoutes(1, destination, 0);

    // Print the total number of routes
    cout << "There are " << pathCount << " routes from the firestation to streetcorner " << destination << "." << endl;

    return 0;
}
