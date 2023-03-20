#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

// Khoi tao cau hinh dau tien 
// while (Khi chua phai la cau hinh cuoi cung)
// In ra cau hinh hien tai
// In ra cau hinh ke tiep

int n , a[100], ok;

void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while( i>=1 && a[i] == 1 ){
		a[i] = 0;
		--i;
	}
	if( i == 0 ){
		ok = 0; 
	}
	else{
		a[i] = 1;
	}
}

int main(){
cin >> n;
ok = 1;
ktao();
int cnt = 0 ;
while(ok){
	for(int i = 1 ; i <= n; i++){
		cout<< a[i] ;
	}
	cout<<endl;
	sinh();
	cnt++;
}
cout << cnt<<endl;

return 0;
}

