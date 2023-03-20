#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> retval;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int> temp(1,1);
            for(int j=1;j<i;j++)
            {
                temp[j]=retval[i-1][j-1] + retval[i-1][j];  
            }
            retval.push_back(temp);
        }
        return retval;
	}
int main(){
	int n ; cin >> n ;
	vector<vector<int>> v = generate(n);
		for(int i = 0 ; i < v.size() ; i++){
			for(int j = 0 ; j <= i ;j++){
				cout << v[i][j] << " ";
			}
		cout << endl;
	}

return 0;
}

