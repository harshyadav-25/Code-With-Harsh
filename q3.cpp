#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

// Function to turn left
int turn_left(int direction) {
    return (direction - 1 + 4) % 4; // Ensure positive direction
}

// Function to turn right
int turn_right(int direction) {
    return (direction + 1) % 4;
}

// Function to turn back
int turn_back(int direction) {
    return (direction + 2) % 4;
}

// Function to move in the current direction
pair<int, int> move(pair<int, int> position, int direction, int distance) {
    if (direction == 0) { // North
        return {position.first, position.second + distance};
    } else if (direction == 1) { // East
        return {position.first + distance, position.second};
    } else if (direction == 2) { // South
        return {position.first, position.second - distance};
    } else if (direction == 3) { // West
        return {position.first - distance, position.second};
    }
    return position; // Should never reach here
}

// Function to simulate the journey based on instructions
pair<int, int> simulate_journey(const vector<pair<string, int>>& instructions, pair<int, int> start_pos) {
    int direction = 0; // Start facing North
    pair<int, int> position = start_pos;

    for (const auto& instruction : instructions) {
        string turn = instruction.first;
        int distance = instruction.second;

        if (turn == "left") {
            direction = turn_left(direction);
        } else if (turn == "right") {
            direction = turn_right(direction);
        } else if (turn == "straight") {
            // No change in direction
        } else if (turn == "back") {
            direction = turn_back(direction);
        }

        position = move(position, direction, distance);
    }

    return position;
}

int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> instructions(N);

    for (int i = 0; i < N; ++i) {
        string turn;
        int distance;
        cin >> turn >> distance;
        instructions[i] = {turn, distance};
    }

    int start_x, start_y;
    cin >> start_x >> start_y;
    int target_x, target_y;
    cin >> target_x >> target_y;

    pair<int, int> start_pos = {start_x, start_y};
    pair<int, int> target_pos = {target_x, target_y};

    // Simulate the journey with the original instructions
    pair<int, int> final_position = simulate_journey(instructions, start_pos);

    if (final_position == target_pos) {
        cout << "No" << endl;
        return 0;
    }

    // Check for each instruction if correcting it leads to the target position
    for (int i = 0; i < N; ++i) {
        string original_turn = instructions[i].first;
        int original_distance = instructions[i].second;

        // Try correcting the turn
        for (const auto& [correct_turn, correct_distance] : {
            make_pair("left", original_distance),
            make_pair("right", original_distance),
            make_pair("straight", original_distance),
            make_pair("back", original_distance)
        }) {
            // Create a new instruction list with the corrected instruction
            vector<pair<string, int>> new_instructions = instructions;
            new_instructions[i] = {correct_turn, correct_distance};

            pair<int, int> new_final_position = simulate_journey(new_instructions, start_pos);

            if (new_final_position == target_pos) {
                cout << "Yes" << endl;
                cout << original_turn << " " << original_distance << endl;
                cout << correct_turn << " " << correct_distance << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
