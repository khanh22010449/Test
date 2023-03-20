#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

int chuyendoi(string s){
	int num = 0 ;
	for ( int i = s.length() - 1 ; i >= 0; --i){
		num += (s[i] -48)*pow(10,s.length() -1 - i);
	}
	return num;
}

int main(){
  string s ; cin >> s;
  int a = chuyendoi(s);
	cout << a ;
return 0;
}

