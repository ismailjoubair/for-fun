#include <stdio.h>
#include <string.h>

int main(){
char c[50];
char list[5][20] = {"ismail","mohammed","yasser","youssef","reda"};
printf("votre prenom s'il vous plait\n");
scanf("%s", c);
if(strcmp(list[0], c)==0){
	printf("ismail vous avez eu 15\n");
	printf("votre mensssion est tres bien \n");
	}
//------------------------------------------------
	else if(strcmp(list[1], c)==0){
        printf("mohammed vous avez eu 10\n"); 
        printf("votre mensssion est passable \n"); 
        }
//-------------------------------------------------
	else if(strcmp(list[2], c)==0){
        printf("yasser vous avez eu 15\n"); 
        printf("votre mensssion est tres bien \n"); 
        }
//----------------------------------------------------
	else if(strcmp(list[3], c)==0){
        printf("youssef vous avez eu 15\n"); 
        printf("votre mensssion est tres bien \n"); 
        }
//----------------------------------------------------
	else if(strcmp(list[4], c)==0){
        printf("reda vous avez eu 15\n"); 
        printf("votre mensssion est tres bien \n"); 
        }
	else{
	printf("vous etes pas a la liste");
	}

return 0;
}
