class Solution {
public:
    int trap(vector<int>& h) {
        int lmax=0,rmax=0,total=0;
        int l=0,r=h.size()-1;
        while(l<r){
            if(h[l]<=h[r]){
                if(lmax>h[l]){
                    total+=lmax-h[l];
                }
                else{
                    lmax=h[l];
                }
                l++;
            }
            else{
                if(rmax>h[r]){
                    total+=rmax-h[r];

                }
                else{
                    rmax=h[r];
                }
                r--;
            }
        }
        return total;
    }
};