Top K Frequent Elements: https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    typedef pair<int, int> pr;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pr, vector<pr>, greater<pr>> pq;
        unordered_map<int, int> mp;
        vector<int> result;
        for (auto it : nums) {
            mp[it]++;
        }
        for (auto it : mp) {
            int freq = it.second;
            int num = it.first;
            pq.push({freq, num});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
