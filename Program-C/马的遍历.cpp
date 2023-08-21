#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

const int MOD = 1000000007;

struct Interval {
    int left;
    int right;
};

bool compareIntervals(const Interval &a, const Interval &b) {
    return a.left < b.left;
}

int main() {
    int n;
    cin >> n;

    vector<Interval> intervals(n);
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].left >> intervals[i].right;
    }

    sort(intervals.begin(), intervals.end(), compareIntervals);

    long long ans = 1;
    int prevRight = intervals[0].right;

    for (int i = 1; i < n; ++i) {
        if (intervals[i].left <= prevRight) {
            prevRight = min(prevRight, intervals[i].right);
        } else {
            ans = (ans * (prevRight - intervals[i - 1].left + 1)) % MOD;
            prevRight = intervals[i].right;
        }
    }

    ans = (ans * (prevRight - intervals[n - 1].left + 1)) % MOD;
    cout << ans << endl;

    return 0;
}