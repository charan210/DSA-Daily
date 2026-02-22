class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool flag=true;;
        int p1sc=0,p2sc=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
               if(flag==true) flag=false;
                else flag=true;
            }
            if((i+1)%6==0){
                 if(flag==true) flag=false;
                 else flag=true;
            }
            if(flag==true) p1sc+=nums[i];
            else p2sc+=nums[i];
            
        }
        return (p1sc-p2sc);
        }
    };
