class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
    // Check if the starting points are blocked
    if (grid[0][1] > 1 && grid[1][0] > 1) return -1;
    
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> dirs{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
    
    pq.push({grid[0][0], 0, 0}); // Start at top-left corner
    while (!pq.empty()) {
        // Get the current time, row, and column
        int time = pq.top()[0], row = pq.top()[1], col = pq.top()[2];
        pq.pop();
        
        // Check if we've reached the bottom-right corner
        if (row == m - 1 && col == n - 1) return time;
        
        // Mark the current cell as visited
        if (visited[row][col]) continue;
        visited[row][col] = true;
        
        // Explore the neighboring cells
        for (auto dr: dirs) {
            int r = row + dr[0], c = col + dr[1];
            if (r < 0 || r >= m || c < 0 || c >= n || visited[r][c]) continue;
            
            // Calculate the time required to reach the neighboring cell
            int wait = (grid[r][c] - time) % 2 == 0;
            pq.push({max(grid[r][c] + wait, time + 1), r, c});
        }
    }
    return -1; // We couldn't reach the bottom-right corner. 
               // We will never actually encounter this in practice.
}
};