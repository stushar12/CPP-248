bool isValidSudoku(vector<vector<char>>& board) 
    {
        map<string,int>mp;
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string row="row"+to_string(i)+board[i][j];
                    string column="column"+to_string(j)+board[i][j];
                    string box="box"+to_string((i/3)*3)+to_string(j/3)+board[i][j];
                    if(mp.find(row)!=mp.end() or mp.find(column)!=mp.end())
                        return false;
                    else
                        mp[row]=1;
                         mp[column]=1;;
                    
                    if(mp.find(box)!=mp.end())
                        return false;
                    else
                        mp[box]=1;
                    
                }
            }
        }
        return true;
    }