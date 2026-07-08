class Solution {
public:
    int maxArea(vector<int>& h) {
    int low=0;
    int high=h.size()-1;
     int maxh=INT_MIN;
     while(low<high){
        int width=high-low;
        int br=min(h[low],h[high]);
        int area=width*br;
        maxh=max(maxh,area);
        h[low]<h[high]?low++:high--;
     }
     return maxh;
    }
};