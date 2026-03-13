class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        priority_queue<
            tuple<long long,long long,long long>,
            vector<tuple<long long,long long,long long>>,
            greater<>
        > pq;

        for (long long w : workerTimes) {
            pq.push({w, w, 1});
        }

        long long ans = 0;

        while (mountainHeight--) {
            auto [time, w, k] = pq.top();
            pq.pop();

            ans = time;

            k++;
            pq.push({time + w * k, w, k});
        }

        return ans;
    }
};