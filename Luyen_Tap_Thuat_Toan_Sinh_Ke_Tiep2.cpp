#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

int n , a[1005] ;

void next(){
	int i = n - 1 ;
	while ( i >= 1 && a[i] > a[i+1] ){
		--i;
	}
	if( i == 0 ){
		for( int j = 1 ; j <= n ; j++){
			cout<< j <<" ";
		}
	}
	else{
		int j = n;
		while( i <= n && j >= 1 && j >= i){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		for(int i = 1 ; i<= n ;i++){
			cout << a[i] << " ";
		}		
	}
	
}

int main(){
	int tc ; cin >> tc;
	while(tc--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
		}
		next();	
		cout << endl;
	}


return 0;
}

