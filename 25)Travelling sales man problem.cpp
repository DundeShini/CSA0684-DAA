#include <stdio.h>
#include <limits.h>
#define V 4 
int min(int a, int b) {
    return (a < b) ? a : b;
}
int tsp(int graph[][V], int mask, int pos, int n, int dp[][V]) {
    if (mask == (1 << n) - 1) { 
        return graph[pos][0]; 
    }
    if (dp[mask][pos] != -1) {
        return dp[mask][pos]; 
    }
    int ans = INT_MAX;
    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) { 
            int newAns = graph[pos][city] + tsp(graph, mask | (1 << city), city, n, dp);
            ans = min(ans, newAns);
        }
    }
    return dp[mask][pos] = ans;
}
int main() {
    int graph[V][V];
    printf("Enter adjacency matrix for the graph: \n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    int dp[1 << V][V];
    for (int i = 0; i < (1 << V); i++) {
        for (int j = 0; j < V; j++) {
            dp[i][j] = -1;
        }
    }
    printf("Minimum cost: %d\n", tsp(graph, 1, 0, V, dp)); 
    return 0;
}

