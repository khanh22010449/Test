#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool isUgly(int n){
    
    while(n % 2 == 0 && (n = n / 2));
    while(n % 3 == 0 && (n = n / 3));
    while(n % 5 == 0 && (n = n / 5));

    return n==1;

}
int main(){
    int n ; scanf("%d",&n);
    if(isUgly(n)){
    	printf("true");
	}
	else{
		printf("false");
	}
    return 0;
}
