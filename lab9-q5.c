#include <stdio.h>
#include <string.h>


void reverse(char str[]) {
    int length = strlen(str);
    char temp[length-1];
    int a=0,i;
   
    for(i=length-1;i>=0;i--)
    {
    	temp[a]=str[i];
    	a=a+1;
	}
	printf("The reversed word id: %s",temp);
}

int main() {
    char word[50];
    
    
    printf("Enter a word: ");
    scanf("%s",&word);
    
   
    /*if (word[strlen(word) - 1] == '\n') {
        word[strlen(word) - 1] = '\0';  
    }*/
    
   
    reverse(word);
    
    
    //printf("Reversed word: %s\n", word);
    
    return 0;
}
