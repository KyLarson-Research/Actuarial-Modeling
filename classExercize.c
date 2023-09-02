#include <stdio.h>
int main(void){
	char* nameFirst[20];
	char* nameLast[20];
	//int addressNumbers;
	char addressChars[50];
	
	printf("\nName, Address (using '_' instead of whitespace):\n");
	scanf("%s%s", nameFirst, nameLast); 
	//scanf("%d", &addressNumbers);
	

//	printf("\nAddress:\n");
//	fflush(stdin);        
        scanf("%s", addressChars);
	printf("\n%s\n%s\n%s\n", nameFirst, nameLast, addressChars);
	return 0;
}
