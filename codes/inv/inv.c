#include <stdio.h>

int main(){
int n;//taille 
printf("donner moi la taille du tableau \n");
scanf("%d",&n);
int tab[n];
printf("remplit votre tableau\n");
for(int i=0;i<n;i++){
	scanf("%d",&tab[i]);
	}
	for(int i=n;i>=0;i--){
	printf("%d\n",tab[i]);
	}
return 0;
}
