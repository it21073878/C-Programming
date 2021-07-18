#include<stdio.h>
int game();
int instruction();
int result(int gam);
void quit ();

int main (void)
{
	int choice;
	int gam;
	int ins;
	int re;
	
	//Introduction Header
	printf("%50s" , "====================\n" );
	printf("%50s" , "| :: X - O game :: |\n" );
	printf("%50s" , "====================\n" );
	printf("%55s" , "developed by Tharush Senasinghe\n");
	printf("%60s" , "__________________________________________");
	
	printf("\n\n\n\n\n");
	
	//Starting page of game
	printf("\tGmae Option :\n");
	printf("\t\t 1)New Game \n");
	printf("\t\t 2)Instructions \n");
	printf("\t\t 3)Quit \n");
	printf("\n");
	printf("\tEnter Your Choice : ");
	scanf("%d" , &choice);
	
	while(choice != 3){
	
	switch(choice){
		case 1:
			gam = game();
			break;
		case 2:
			ins = instruction();
			if(ins == 1)
				gam = game();
			else
				quit ();
			break;
		case 3:
			quit ();
			break;
		default:
			printf("#### Invalid Input #### ");
			

		printf("\tEnter Your Choice : ");
		scanf("%d" , &choice);
			
		}
		re = result(gam);
		if(re == 1)
			choice = 1;
		else {
			quit ();
			break;
		}
				
	}
	
	return 0;
}


int game()
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
	
	for(n=0 ;n<9 ;n++){
		
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
		//printf("\n %d \n" , result);
		break;
	else
	{
		result = 0;
	}
		

	}
	
	return result;
}

int instruction()
{
	int ins;
	printf("Player 01 should Enter X \n");
	printf("Player 02 should Enter O \n");
	printf("If You can set 3 boxes with yr character, You will win the game... \n ");
	printf("\n\n");
	printf(" 1) Start game \n");
	printf(" 1) Quit game \n");
	printf("My choice :  ");
	scanf("%d" , &ins);
	
	return ins;
	
}

void quit ()
{
	int rat;
	printf("\t\t ::::: Thank you ::::: \n");
	printf("\t\t :: Give a rating  - (1 / 2 / 3 / 4) : ");
	scanf("%d" , &rat);
	
	//return 0;
}

int result(int gam)
{
	int ch;
	
	if(gam == 1)
	{
		printf("\n\t\t\t :::::: Player 01 is the Winner :::::::::\n\n ");
	}
	else if(gam == 2)
	printf("\n\t\t\t :::::: Player 02 is the Winner :::::::::\n\n ");
	
	else
		printf("\n\t\t\t :::::: Game is Draw :::::::::\n\n ");
		
	printf("\t\t 1) New Game \n");
	printf("\t\t 2) Quit \n");
	printf("\t\t  Answer : ");
	scanf("%d" , &ch);
	
	printf("\n\n\n ");
	return ch;
}
