#include <stdio.h>
int main (){
	int a, b;
	printf("escreva dois numeros inteiros:");
	scanf("%d %d" , &a, &b);
	if(a > b){
		printf("%d � maior que %d" , a, b);
	}else if(b > a){
		printf("%d � maior que %d" , b, a);
	}
	return 0;
}
