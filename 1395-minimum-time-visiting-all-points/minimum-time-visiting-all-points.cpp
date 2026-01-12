class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int total=0;
        int n=points.size();
        for(int i=1;i<n;i++){
            int x1=points[i-1][0];
            int y1=points[i-1][1];
            int x2=points[i][0];
            int y2=points[i][1];
            int dx=abs(x2-x1);
            int dy= abs(y2-y1);
            total+=max(dx,dy);
        }
        return total;
    }
};