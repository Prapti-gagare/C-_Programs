#include<iostream>
#include<vector>
using namespace std;
vector<double> matrixmul(const vector<vector<double>>&matrix,const vector<double>&vec)
{
int rows=matrix.size();
int cols=matrix[0].size();
vector<double>result(rows,0.0);
for(int i=0;i<rows;i++)
{
  for(int j=0;j<cols;j++)
    {
     result[i]+=matrix[i][j]*vec[j];
    }
}
  return result;
}
int main()
{
vector<vector<double>>matrix
{
{1,2,3,4},
{6,7,8,9},
{10,11,12,13},
{14,15,16,17}
};

vector<double>vec{{3},{4},{5},{6}};

vector<double>result=matrixmul(matrix,vec);
 for(double val : result)
  cout<<val<<' ';
return 0;
}