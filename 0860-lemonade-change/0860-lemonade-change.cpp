class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans=true;
        int n=bills.size();
        int f=0;
        int t=0;
        int t2=0;
        for (int i=0;i<n;i++){
            if(bills[i]==5) f++;
            if(bills[i]==10){
                t++;
                f--;
                 if(f<0) ans=false;
            }
            if(bills[i]==20){
                if(t>0){
                    t--;
                    f--;
                }
                else {
                    
                    f=f-3;
                
                }
                 if(f<0) ans=false;
                t2++;
            }
        }
    return ans ;
    }
};