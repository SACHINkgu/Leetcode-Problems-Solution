// #include<iostream>
// using namespace std;

// void col(vector<vector<int>> &matrix,int m ,int n, int i){

// }

// vector<vector<int>> makematzero(vector<vector<int>> matrix , int n ,int m)

// int main(){
//     vector<vector<int>> matrix ={{1,1,1},{1,0,1},{1,1,1}};

// }

leetcode solution 1.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        set<int>r,c;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }

            }
        }
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(r.count(i) || c.count(j))
                matrix[i][j]=0;
                }
            
    }
        
        
        
    }
};

