#include <stdio.h>
int main(){
int tab[10];
int s;
printf("fait remplit le tableau ");
for(int i =0;i<10;i++){
	scanf("%d",&tab[i]);
	}
printf("quel est le nbr vous voulez ");
scanf("%d",&s);
	for(int j=0;j<10;j++){
		if(s==tab[j]){
		printf("CHEC !\n");
		}else{
		printf("en train de cherche\n");
		}
	}
return 0;
}
