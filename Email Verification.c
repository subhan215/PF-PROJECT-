#include<stdio.h>
#include<stdlib.h>
int main(){
	char email[50];
	int counter,alpha=0,dot=0;
	
	printf("\t\t\nEnter your e-mail id : ");
	scanf("%s",&email);
	
	for(counter=0;email[counter]!='\0';counter++)
	{
		if(email[counter]!='@'&&email[counter]!='.'){
			printf("\t\nYour E-mail is not correct\n\nPress any key to re enter your E-mail\n");
			getch();
			system("cls");
	}
		else {
			printf("Thankyou for registering yor e-mail\n");
		}
		}
	
		
			
		
}


		

		
		
			
			

		
		



