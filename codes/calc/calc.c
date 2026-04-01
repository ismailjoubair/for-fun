#include <stdio.h>

int main(){
int a;//operateurs
int one,two;//le nombres
int res;
float s;
printf("donner moi le premier numero :\n");
scanf("%d",&one);
printf("donner moi le deuxieme numero :\n");
scanf("%d",&two);
printf("donner moi l'operatuers :\n");
printf("entre 1 si vous voulez + \n");
printf("entre 2 si vous voulez - \n");
printf("entre 3 si vous voulez * \n");
printf("entre 4 si vous voulez / \n");
scanf("%d",&res);
	if(res==1){
		s= one+two;
		printf("le resultats est : %f\n",s);
	}if(res==2){
		s= one-two; 
                printf("le resultats est : %f\n",s);
	}if(res==3){
		s= one*two; 
                printf("le resultats est : %f\n",s);
	}if(res==4){
		s= one/two; 
                printf("le resultats est : %f\n",s);
	}if(0<res || res>4){
		printf("error 404\n");
	}

return 0;
}
