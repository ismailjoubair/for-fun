#include <stdio.h>


int main(){
int num;
int res;
printf("donner moi votre nombre  :\n");
scanf("%d",&num);
res=num%2;
	if(res==0){
	printf("le nombre est pair\n");
	}else{
	printf("le nombre est impaire\n");
	}
return 0;
}
