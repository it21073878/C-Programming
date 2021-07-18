#include<windows.h>
#include<stdio.h>

int main()
{
   	char xo[3][3] = {49,50,51,52,53,54,55,56,57,58};
	int i , j , box ;
	int x,y,z , player = 1 , n;
	int result = 0;
	
	//printing Main Box
	for(i=0 ; i<3 ; i++){
		printf("\t");
		for(j=0 ; j<3 ; j++){
			printf(" | %c " , xo[i][j]);
		}
		printf("| \n \t ---------------\n");
	
	}
	
	printf("\n\n\n");
	
	do{
		
	if(player == 1){
	printf("Player {01} - Enter |X| for box number : ");
	scanf("%d" , &box);
	}
	
	else if(player ==2)
	{
		printf("Player {02} - Enter |O| for box number : ");
		scanf("%d" , &box);
	}
	
	x= box - 3;
	y = box - 6;
	z = box - 9;
	if(x<=0)
	{
		if(player == 1)
			xo[0][box-1] = 'X';
		else
			xo[0][box-1] = 'O';
	}
	else if(x>0 && y<=0)
	{
		if(player == 1)
			xo[1][x-1] = 'X';
		else
			xo[1][x-1] = 'O';
	}
	
	else if(y>0 && z<=0)
	{
		if(player == 1)
			xo[2][y-1] = 'X';
		else
			xo[2][y-1] = 'O';
	}
	
	
	
	
	
	for(i=0 ; i<3 ; i++){
		printf("\t");
		for(j=0 ; j<3 ; j++){
			printf(" | %c " , xo[i][j]);
		}
		printf("| \n \t ---------------\n");
	
	}
	
	n++;
	
	if(player == 1)
		player++;
	else
		player--;
	
	if(xo[0][0] == 'X' && xo[0][1] == 'X' && xo[0][2] == 'X')
	result = 1;
	if(xo[1][0] == 'X' && xo[1][1] == 'X' && xo[1][2] == 'X')
	result = 1;
	if(xo[2][0] == 'X' && xo[2][1] == 'X' && xo[2][2] == 'X')
	result = 1;
	if(xo[0][0] == 'X' && xo[1][0] == 'X' && xo[2][0] == 'X')
	result = 1;
	if(xo[0][1] == 'X' && xo[1][1] == 'X' && xo[2][1] == 'X')
	result = 1;
	 if(xo[0][2] == 'X' && xo[1][2] == 'X' && xo[2][2] == 'X')
	result = 1;
	if(xo[0][0] == 'X' && xo[1][1] == 'X' && xo[2][2] == 'X')
	result = 1;
	if(xo[2][0] == 'X' && xo[1][1] == 'X' && xo[0][2] == 'X')
	result = 1;

	
	if(xo[0][0] == 'O' && xo[0][1] == 'O' && xo[0][2] == 'O')
	result = 2;	
	if(xo[1][0] == 'O' && xo[1][1] == 'O' && xo[1][2] == 'O')
	result = 2;	
	if(xo[2][0] == 'O' && xo[2][1] == 'O' && xo[2][2] == 'O')
	result = 2;	
	 if(xo[0][0] == 'O' && xo[1][0] == 'O' && xo[2][0] == 'O')
	result = 2;	
	if(xo[0][1] == 'O' && xo[1][1] == 'O' && xo[2][1] == 'O')
	result = 2;	
	if(xo[0][2] == 'O' && xo[1][2] == 'O' && xo[2][2] == 'O')
	result = 2;	
	 if(xo[0][0] == 'O' && xo[1][1] == 'O' && xo[2][2] == 'O')
	result = 2;	
	if(xo[2][0] == 'O' && xo[1][1] == 'O' && xo[0][2] == 'O')
	result = 2;	


	if(result == 1 || result == 2)
		break;
	else
	{
		result = 0;
		continue;
	}
		

	}while(n < 9);
	
    return 0;
}
