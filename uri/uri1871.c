#include <stdio.h>

int main(){
	int m,n,v[15],i;

	while(scanf("%d %d",&m,&n) && (m!=0 || n!=0)){
		int sm = m + n;

		for(i = 0 ; i < 11 ; i++){
			v[i] = sm %10;
			sm /= 10;
		}

		for(i = 10 ; i >= 0 ; i--){
			if(v[i] != 0){
				printf("%d",v[i]);
			}
		}
		printf("\n");
	}
}