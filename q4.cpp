#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

// Function to simulate the placement of a band
set<pair<int, int>> simulate_band(int start_x, int start_y, const string& movements, int S) {
    set<pair<int, int>> occupied;
    int x = start_x, y = start_y;
    
    // Mark the starting position
    occupied.insert({x, y});
    
    for (char move : movements) {
        if (move == 'u') {
            y--;
        } else if (move == 'd') {
            y++;
        } else if (move == 'l') {
            x--;
        } else if (move == 'r') {
            x++;
        }
        
        // Ensure the position is within bounds
        if (x >= 0 && x < S && y >= 0 && y < S) {
            occupied.insert({x, y});
        }
    }
    
    return occupied;
}

int main() {
    int S;
    cin >> S;

    // Band 1
    int start1_x, start1_y;
    cin >> start1_x >> start1_y;
    string movements1;
    cin >> movements1;

    // Band 2
    int start2_x, start2_y;
    cin >> start2_x >> start2_y;
    string movements2;
    cin >> movements2;

    // Simulate both bands
    set<pair<int, int>> band1_positions = simulate_band(start1_x, start1_y, movements1, S);
    set<pair<int, int>> band2_positions = simulate_band(start2_x, start2_y, movements2, S);

    // Find overlaps
    int overlap_count = 0;
    for (const auto& pos : band1_positions) {
        if (band2_positions.count(pos)) {
            overlap_count++;
        }
    }

    // Check for interlocking
    bool interlocked = false;
    for (const auto& pos : band1_positions) {
        if (band2_positions.count(pos)) {
            // If both bands occupy the same position, check if they are interlocked
            interlocked = true;
            break;
        }
    }

    // Output the result
    if (interlocked) {
        cout << "Impossible" << endl;
    } else {
        cout << overlap_count << endl;
    }

    return 0;
}
