#include<bits/stdc++.h>

using namespace std;

void in(int a[],int n,int target){
	for(int i = 0 ; i < n ; i++ ){
		for(int j = i+1 ; j< n ;j++){
			if(a[i] + a[j] == target){
				cout << i <<" " << j ;
			}
		}
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	int target;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	cin>>target;
	in(a,n,target);

return 0;
}
