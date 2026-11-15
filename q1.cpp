#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

long long cross(Point O, Point A, Point B) {
    return 1LL * (A.x - O.x) * (B.y - O.y) - 1LL * (A.y - O.y) * (B.x - O.x);
}

double distance(Point a, Point b) {
    return sqrt((a.x - b.x) * 1.0 * (a.x - b.x) + (a.y - b.y) * 1.0 * (a.y - b.y));
}

int main() {
    int N;
    cin >> N;
    vector<Point> pts(N);
    for (int i = 0; i < N; i++) cin >> pts[i].x >> pts[i].y;

    sort(pts.begin(), pts.end(), [](Point a, Point b) {
        return a.x == b.x ? a.y < b.y : a.x < b.x;
    });

    vector<Point> hull;
    for (auto &p : pts) {
        while (hull.size() >= 2 && cross(hull[hull.size()-2], hull.back(), p) <= 0) {
            hull.pop_back();
        }
        hull.push_back(p);
    }

    double perimeter = 0.0;
    for (int i = 1; i < (int)hull.size(); i++) {
        perimeter += distance(hull[i-1], hull[i]);
    }

    cout << (int)round(perimeter) << endl;
    return 0;
}