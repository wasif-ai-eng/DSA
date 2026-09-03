class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int i=0;
        int j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                res++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};