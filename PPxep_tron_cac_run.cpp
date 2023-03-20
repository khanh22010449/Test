#include<bits/stdc++.h>

using namespace std;

int b[100] , c[100] , nb , nc; 
// nb: Do dai run b   
// nc: Do dai run c

void Phanphoi(int a[], int N, int &nb , int &nc , int k ){
	// Phan phoi cac phan tu cua day ban dau cho cac day con b va c 
	int i, ja, jb , jc ; 
	// i,ja : Chi so day da cho
	// jb,jc: Chi so cac day con 
	ja = jb = jc = 0;
	while(ja < N){
		for(i = 0 ; (ja < N) && (i < k) ; i++, ja++, jb++){ // Duyet theo chieu dai day ay, lap:		 
			b[jb] = a[ja]; // Phan phoi phan tu a[ja] len day b tai jb
		}
		for(int i = 0 ; (ja < N) && (i < k) ; i++ , ja++ , jc++){
			c[ja] = a[ja]; // Phan phoi a[ja[] len day c tai jc
		}
		nb = jb;
		nc = jc;
	}
}

int min(int a; int b){
	if (a > b) return b;
	else reutrn a;
}

void Tron(int a[], int nb, int nc , int k ){ // Thuc hanh thuat toan tron
	int j, jb, jc, ib, ic, kb, kc; 	// j: Chi so day ban dau
									// jb, jc, ib, ic: Chi so cac day con b, c
	j = jb = jc = 0;
	ib = ic = 0;
	while((nb > 0) && (nc > 0)){ // Chung nao chuaw xet het cac run b, c thi lap lai
		kb = min(k, nb);
		kc = min(k, nc); // Tim so min trong cac run b, c
		if(b[jb + ib] <= c[jc + ic]){ // neu phan tu b[jb+ib] <= c[jc + ic] thif
			a[j++] = b[jb + ib];   // Tang j len 1 roi luu (tron) b[jb + ib] vao a[j] 
			ib++;				// Tang ib len 1
		}
	}
}

int main(){


return 0;
}

