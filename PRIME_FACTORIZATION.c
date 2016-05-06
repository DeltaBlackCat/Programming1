#include<stdio.h>

int main(){
	int su,i,j;
	int beki[10][2];
	do{
		i = 2;
		for(j = 0;j <= 9;j++){
			beki[j][0] = 0;
			beki[j][1] = 0;
		}
		printf("Ž©‘R”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢. 0‚ÅI—¹‚µ‚Ü‚·. \n");
		scanf("%d", &su);
		if(su <= 0)
			break;
		else if(su == 1)
			printf("1");
		else{
			while(su != 1){
				if(su%i == 0){
					for(j = 0;j <= 9;j++){
						if(beki[j][0] == i){
							beki[j][1]++;
							break;
						}
						else if(beki[j][0] == 0){
							beki[j][0] = i;
							beki[j][1] = 1;
							break;
						}
					}
				su /= i;
				}
				else
					i++;
			}

			for(j = 0;j <= 9;j++){
				if(beki[j][0] != 0){
					printf("%d", beki[j][0]);
					if(beki[j][1] == 1){
						if(j != 9 && beki[j+1][1] != 0)
							printf("*");
					}
					else{
						printf("^%d", beki[j][1]);
						if(j != 9 && beki[j+1][0] != 0)
							printf("*");
					}
				}
				else
					break;
			}
		}
		printf("\n");
	}while(1);
	return 0;
}
