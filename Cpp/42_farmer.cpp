#include <iostream>
#include <unordered_set>
#include <queue>
#include <tuple>

using namespace std;

// Represents the state of the problem.
struct State {
    int farmer, wolf, goat, cabbage;

    bool operator==(const State& other) const {
        return tie(farmer, wolf, goat, cabbage) == tie(other.farmer, other.wolf, other.goat, other.cabbage);
    }

    bool is_valid() const {
        if (goat == cabbage && farmer != goat) {
            return false;
        }
        if (wolf == goat && farmer != wolf) {
            return false;
        }
        return true;
    }
};

// Hash function for the State struct.
struct HashState {
    size_t operator()(const State& state) const {
        return hash<int>()(state.farmer) ^
               hash<int>()(state.wolf) ^
               hash<int>()(state.goat) ^
               hash<int>()(state.cabbage);
    }
};

// Solves the problem using BFS.
void solve() {
    State start_state = {1, 1, 1, 1};
    State end_state = {0, 0, 0, 0};

    unordered_set<State, HashState> visited;
    queue<State> q;
    q.push(start_state);

    while (!q.empty()) {
        State curr_state = q.front();
        q.pop();

        if (curr_state == end_state) {
            // Found a solution.
            cout << "Solution found!" << endl;
            return;
        }

        if (!curr_state.is_valid()) {
            continue;
        }

        // Try all possible moves.
        State next_state = curr_state;
        next_state.farmer = 1 - curr_state.farmer;
        if (curr_state.farmer == curr_state.wolf) {
            next_state.wolf = 1 - curr_state.wolf;
            if (visited.count(next_state) == 0) {
                visited.insert(next_state);
                q.push(next_state);
            }
            next_state.wolf = curr_state.wolf;
        }
        if (curr_state.farmer == curr_state.goat) {
            next_state.goat = 1 - curr_state.goat;
            if (visited.count(next_state) == 0) {
                visited.insert(next_state);
                q.push(next_state);
            }
            next_state.goat = curr_state.goat;
        }
        if (curr_state.farmer == curr_state.cabbage) {
            next_state.cabbage = 1 - curr_state.cabbage;
            if (visited.count(next_state) == 0) {
                visited.insert(next_state);
                q.push(next_state);
            }
            next_state.cabbage = curr_state.cabbage;
        }
    }

    // No solution found.
    cout << "No solution found!" << endl;
}

int main() {
    solve();
    return 0;
}