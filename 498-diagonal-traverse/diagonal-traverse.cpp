class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> answer;
        map<int,vector<int>> map;

        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                map[i+j].push_back(mat[i][j]);
            }
        }

        for(auto k: map)
        {
            if((k.first)%2==0)
            {
                reverse(k.second.begin(),k.second.end());
            }
        

        for(auto i:k.second)
        {
            answer.push_back(i);
        }
        }
        return answer;
    }
};