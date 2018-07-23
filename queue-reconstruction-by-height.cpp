class Solution {
  static bool sortby(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) return (a.second < b.second);
    return (a.first > b.first);
  }

 public:
  vector<pair<int, int>> reconstructQueue(vector<pair<int, int>> &people) {
    // sort(people.begin(),people.end());
    sort(people.begin(), people.end(), sortby);
    vector<pair<int, int>> res;
    for (pair<int, int> p : people) res.insert(res.begin() + p.second, p);
    return res;
  }
};
// https://leetcode.com/problems/queue-reconstruction-by-height/discuss/89407/Python-Documented-solution-in-O(n*n)-time-that-is-easy-to-understandclass
// Solution {
static bool sortby(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first == b.first) return (a.second < b.second);
  return (a.first > b.first);
}

public:
vector<pair<int, int>> reconstructQueue(vector<pair<int, int>> &people) {
  // sort(people.begin(),people.end());
  sort(people.begin(), people.end(), sortby);
  vector<pair<int, int>> res;
  for (pair<int, int> p : people) res.insert(res.begin() + p.second, p);
  return res;
}
}
;
