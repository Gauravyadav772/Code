class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int count=0;
        int add=0;
        int box=0;
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<n;i++){
               count+=apple[i];
        }
         for (int j = m- 1; j >= 0 && add < count; j--) {
            add += capacity[j];
            box++;
        }
        return box;
    }
};