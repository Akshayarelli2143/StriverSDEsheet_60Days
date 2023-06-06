class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
       unordered_set<int> st1;
        unordered_set<int> st2;
        for(int i=0;i<n;i++)	
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                   st1.insert(i);
                    st2.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(st1.find(i)!=st1.end() or st2.find(j)!=st2.end())
                    matrix[i][j]=0;
            }
        }
    }
};