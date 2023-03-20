#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

int n , k , a[1005] ;

void next(){
	int i = k;
	while( i >= 1 && a[i] == n - k + i){
		--i;
	}
	if ( i == 0){
		for( int j = 1 ; j<= k ; j++){
			cout << j << " " ;
		}
	}
	else{
		a[i]++;
		for(int j = i+ 1 ; j<= k ;j++){
			a[j] = a[j-1] + 1;
		}
		for( i = 1 ; i<= k ; i++){
			cout<< a[i] <<" " ;
		}
	}
}

int main(){
	int tc; cin >> tc;
	while(tc--){
		cin >> n >> k;
		for( int i = 1 ; i<= k ;i++){
			cin >> a[i];
		}
		next();
		cout << endl;
	}
   

return 0;
}

