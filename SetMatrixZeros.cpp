#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
     int rows = matrix.size();
        if(rows<=0) return ;
        int cols = matrix[0].size();
        bool FirstRow = false;
        bool FirstCol = false;

        for(int i=0 ; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(matrix[i][j]==0) 
                {
                    if(i==0) FirstRow = true;
                    if(j==0) FirstCol = true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=1;i<rows; i++)
        {
            for(int j=1; j<cols; j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0) 
                {
                    matrix[i][j]=0;
                }
            }
        }

        if(FirstRow) 
        {
            for(int i=0 ;i<cols;i++)
            {
                matrix[0][i] = 0;
            }
        }

        if(FirstCol) 
        {
            for(int i=0;i<rows;i++)
            {
                matrix[i][0] = 0;
            }
        }
    
    

}
