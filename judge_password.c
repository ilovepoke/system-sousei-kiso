#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
	
	int i;
	int len;
	int low = 0, upp = 0, digit = 0;
	char password[100];
	
	printf("Input your password:");
	fgets(password, sizeof(password), stdin);
	
	password[strcspn(password, "\n")] = '\0';
	len = strlen(password);
	
	if(len < 8){
		printf("Your password is too short. Please make it longer than 8 letter.\n");
		return 0;
	}

	for(i=0; i < len; i++){
		if(islower(password[i])){
			low = 1;
		}
		else if(isupper(password[i])){
			upp = 1;
		}
		else if(isdigit(password[i])){
			digit = 1;
		}
	}
	
	if(low == 0){
		printf("You should contain lower case at least one letter.\n");
	}
	if(upp == 0){
		printf("You should contain upper case at least one letter.\n");
	}
	if(digit == 0){
		printf("You should contain digits.\n");
	}
	if(low == 1 && upp == 1 && digit == 1){
			printf("Your password is strong enouogh!!\n");
		}
	
	return 0;
}