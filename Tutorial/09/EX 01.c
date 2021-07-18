// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A
#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[100000] , newword[100000]; // declare array
	int size , i ,j;  
	
	printf("Enter Word :");  // geting input for array
	scanf("%s" , word);
	
	size = strlen(word);  //arry size
	
	for(i=0 ; i <= size ; i++)
	{
		newword[i] = word[size-i-1];   //geting palindrome word
	}
	
	// cheak if it is palindrome
	for(i=0 ; i <= size ; i++)
	{
		if(newword[i] == word[i])   
		{
			continue;	
		}	
		else
		{
			j = 0;
		}
	}
	
	//output
	if(j == 0)
		printf("Word is not palindrome");
	else
		printf("Word is palindrome");
		
	return 0;
}
