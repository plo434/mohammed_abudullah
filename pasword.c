#include <stdio.h>
#include <string.h>

int main()
{
	char password[22];
    int chacker=0;
    int i;
    printf("Enter your password: ");
    while (1)
    {
		 /* 
		 
	*Do It As Maths^
		 
		 */
    
    
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;
    if (strlen(password) > 8) {    
        chacker++;
    
    for( i=0 ; i<strlen(password); i++){
        unsigned char is = password[i];
        if(isupper(is)){
            chacker++;
            break;
        }
    }
        for(i=0 ;chacker ==2 && i<strlen(password); i++){
        unsigned char is = password[i];
        if(islower(is)){
            chacker++;
            break;
        }
    }
    for( i=0 ;chacker ==3 && i<strlen(password); i++){
        unsigned char is = password[i];
        if(isdigit(is)){
            chacker++;
            break;
        }
    }               
        
    for(  i=0 ;chacker ==4 && i<strlen(password); i++){
        unsigned char is = password[i];
        if(ispunct(is)){
            chacker++;
            break;
    }
    }
    }

 switch (chacker) {
        case 0:
            printf("The password must be more than 8 characters long.\n");
            break;
        case 1:
            printf("The password must contain at least one uppercase letter.\n");
            break;
        case 2:
            printf("The password must contain at least one lowercase letter.\n");
            break;
        case 3:
            printf("The password must contain at least one digit.\n");
            break;
        case 4:
            printf("The password must contain at least one special character.\n");
            break;  
        case 5:
            printf("Password accepted: %s\n", password);
            return 0;
            
 }
    printf("*************^^^^^^^^*************\n");
    printf("Enter your password again: ");
}

}
