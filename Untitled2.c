#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

typedef struct Thongtin{
	int mts;
	char ht[30];
	float dt;
}tt;

void nhap(tt *a){	
	gets(a->ht);
	scanf("%d", &a->mts);
	scanf("%f",&a->dt);	
	getchar();
}
void in(tt a){
	printf(" %s   %d    %f \n", a.ht , a.mts , a.dt);
}

int main(){
	int n ; scanf("%d",&n);
	getchar();
	tt a[n];
	int i;
	for ( i = 0 ; i < n ; i++){
		nhap(&a[i]);
	}
	for( i = 0 ; i < n ; i++ ){
		if (a[i].dt > 7.0){
			in(a[i]);
		}
	}
return 0;
}
