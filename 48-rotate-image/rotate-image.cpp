class Solution {
public:
    void rotate(vector<vector<int>>& mt) {

        int n = mt[0].size();
        int m = mt.size();

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               swap(mt[i][j] , mt[j][i]);
            }
        }


        for(int i=0;i<n;i++)
        {
            reverse(mt[i].begin(), mt[i].end());
        }
        
    }
};