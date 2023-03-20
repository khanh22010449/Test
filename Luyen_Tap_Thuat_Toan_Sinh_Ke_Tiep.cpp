#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;



void sinh(string s){
	int i = s.length() - 1;
	while( i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if( i == -1){
		for(int j = 0 ; j < s.length() ; j++){
			s[j] = '0';
		}
		cout<< s << endl;
	}
	else{
		s[i] = '1';
		cout<< s << endl;
	}
}

int main(){
	int tc; cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		sinh(s);
	}
return 0;
}

