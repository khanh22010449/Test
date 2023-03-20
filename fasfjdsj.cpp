#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0, temp, digit;
    cout << "Nhap so nguyen duong N: ";
    cin >> n;

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, int(log10(n))+1);
        temp /= 10;
    }

    if(sum == n) {
        cout << n << " la so Armstrong.";
    }
    else {
        cout << n << " khong phai la so Armstrong.";
    }


	return 0;
}

