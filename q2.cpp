#include <bits/stdc++.h>
using namespace std;

int N, M, budget;
vector<string> strings;
vector<int> costs, worths;
vector<vector<bool>> contradict;
int max_worth = 0;

int calcWorth(const string &s) {
    int w = 0;
    for(char c : s) w += c - 'a' + 1;
    return w;
}

void dfs(int i, vector<bool> &used, int total_cost, int total_worth) {
    if(total_cost > budget) return;
    if(i == N) {
        max_worth = max(max_worth, total_worth);
        return;
    }
    bool conflict = false;
    for(int j = 0; j < N; j++) {
        if(used[j] && contradict[i][j]) {
            conflict = true;
            break;
        }
    }
    // Include current string if no conflict
    if(!conflict) {
        used[i] = true;
        dfs(i+1, used, total_cost + costs[i], total_worth + worths[i]);
        used[i] = false;
    }
    // Skip current string
    dfs(i+1, used, total_cost, total_worth);
}

int main() {
    cin >> N >> M;
    strings.resize(N);
    costs.resize(N);
    worths.resize(N);
    contradict.assign(N, vector<bool>(N, false));
    map<string,int> idx;
    for(int i=0;i<N;i++) {
        cin >> strings[i];
        idx[strings[i]] = i;
    }
    for(int i=0;i<N;i++) cin >> costs[i];
    for(int i=0;i<M;i++) {
        string a,b;
        cin >> a >> b;
        int x = idx[a], y = idx[b];
        contradict[x][y] = contradict[y][x] = true;
    }
    cin >> budget;
    for(int i=0;i<N;i++) worths[i] = calcWorth(strings[i]);
    vector<bool> used(N,false);
    dfs(0, used, 0, 0);
    cout << max_worth;
    return 0;
}
