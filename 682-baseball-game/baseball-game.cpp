class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (string x : operations) {

            if (x == "C") {
                s.pop();
            }
            else if (x == "D") {
                s.push(s.top() * 2);
            }
            else if (x == "+") {
                int top1 = s.top(); s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
            }
            else {
                s.push(stoi(x));   
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};
