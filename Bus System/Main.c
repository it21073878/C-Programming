#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>

float timeH();
float timeM();
void timeSlot(int a , int b , int prNum , int ts);

int main (void)
//void display();


{
	//display();
	char loc[50];
	char dec[50];
	char c[50][50];
	int num , val , cut = 0 , i , j , k , ts;
	int prNum ,a,b;
	
	system("color 0a");
	
	printf("\t\t\t **************************\n");
	printf("\t\t\t *** BUS SHEDULE SYSTEM ***\n");
	printf("\t\t\t **************************\n");
	printf("\t\t\t (c) *Tharush Senasinghe \n");
	
	printf("\t\t\t------------------------------");
	a = timeH();
	b = timeM();
	printf("\t\t\t------------------------------\n");
	
	printf("\n\n\n");
	
	printf("Enter Your Location : ");
	scanf("%s" , loc);
	
	printf("Enter Your Destination : ");
	scanf("%s" , dec);
	
	FILE*bus;
	bus = fopen("bus.txt" , "r");
	
	
	fscanf(bus , "%d" , &num);
	for(j = 0 ; j <10 ; j++)
	{
		fscanf(bus ,"%s" , c[j]);
	}	
	
	while(!feof(bus))
	{
		cut = 0;
		val = 0;
		
		for(i=0 ; i<10 ; i++)
		{
			val = strcmp(c[i] , loc);
			if(val == 0)
			{
				cut = cut + 1;
				ts = i;
			}
			
			val = strcmp(c[i] , dec);
			if(val == 0)
			{
				cut = cut + 1;
			}
		
		}
		
			if(cut == 2)
			{
				prNum = num;
				break;
			}
			
		fscanf(bus , "%d" , &num);
		for(k = 0 ; k < 10 ; k++)
		{
			fscanf(bus ,"%s" , c[k]);
		}
			
	}
			
		if(cut == 2)
		{
			prNum = num;
			printf("Bus Number : %d" , num);
		}

	fclose(bus);
	
		
	//	printf("\n\n %d : %d " , a,b);
		
	timeSlot( a , b ,  prNum ,  ts);
	
	
	return 0;
}

float timeH()
{
	
	float t_H;
	
    // variables to store the date and time components
    int hours, minutes, seconds, day, month, year;
 
    // `time_t` is an arithmetic time type
    time_t now;
 
    // Obtain current time
    // `time()` returns the current time of the system as a `time_t` value
    time(&now);
 
    // Convert to local time format and print to stdout
    printf("\n \t\t\tToday is %s", ctime(&now));
 
    // localtime converts a `time_t` value to calendar time and
    // returns a pointer to a `tm` structure with its members
    // filled with the corresponding values
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // get hours since midnight (0-23)
    minutes = local->tm_min;        // get minutes passed after the hour (0-59)
    seconds = local->tm_sec;        // get seconds passed after a minute (0-59)
 
    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
 
    // print local time
    if (hours < 12) {    // before midday
        printf("\t\t\tTime is %02d:%02d:%02d am\n", hours, minutes, seconds);
    }
    else {    // after midday
        printf("\t\t\tTime is %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
    }
 
    // print the current date
    printf("\t\t\tDate is: %02d/%02d/%d\n", day, month, year);
 
 	t_H = hours ;
 	
    return t_H;
	
}

float timeM()
{
		float t_M;
	
    // variables to store the date and time components
    int hours, minutes, seconds, day, month, year;
 
    // `time_t` is an arithmetic time type
    time_t now;
 
    // Obtain current time
    // `time()` returns the current time of the system as a `time_t` value
    time(&now);
 
 
    // localtime converts a `time_t` value to calendar time and
    // returns a pointer to a `tm` structure with its members
    // filled with the corresponding values
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // get hours since midnight (0-23)
    minutes = local->tm_min;        // get minutes passed after the hour (0-59)
    seconds = local->tm_sec;        // get seconds passed after a minute (0-59)
 
    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
 
 
 	t_M = minutes;
 	
    return t_M;
}


void timeSlot(int a , int b , int prNum , int ts)
{
	FILE*timeS;
	timeS= fopen("time.txt" , "r");
	int busNum , i, j , k , save=0, num;
	int timeH[10] , timeM[10] ;
	char c[50][50];
	
	
	fscanf(timeS , "%d" , &busNum);
	fscanf(timeS , "%d" , &timeH[0]);
	fscanf(timeS , "%d" , &timeM[0]);
	if(timeM[j] == 0)
			{
				timeM[j] = 60;
			}
	for(i=1 ; i<10 ; i++)
		{
			fscanf(timeS , "%d" , &timeH[i]);
			for(j=i ; j<=i ; j++)
			{
				fscanf(timeS , "%d" , &timeM[j]);
				if(timeM[j] == 0)
				{
					timeM[j] = 60;
				}
			}
		}		

	while(!feof(timeS))
	{
		
		
		
		if(busNum == prNum)
		{
			for(i=1 ; i<10 ; i++)
			{
				if(a >= timeH[i-1] && a <= timeH[i])
				{
					if(b >= timeM[i-1] && b <= timeM[i])
					{
						save = i;
						break;
					}
					else if(timeM[i-1] == timeM[i])
					{
						save = i;
						break;
					}
				}
			}
		
		}
		
	fscanf(timeS , "%d" , &busNum);
	fscanf(timeS , "%d" , &timeH[0]);
	fscanf(timeS , "%d" , &timeM[0]);
	if(timeM[j] == 0)
			{
				timeM[0] = 60;
			}

		for(i=1 ; i<10 ; i++)
		{
			fscanf(timeS , "%d" , &timeH[i]);
			for(j=i ; j<=i ; j++)
			{
				fscanf(timeS , "%d" , &timeM[j]);
				if(timeM[j] == 0)
				{
				timeM[j] = 60;
				}
			}
		}

	}
	
	fclose(timeS);
	
	FILE*bus;
	bus = fopen("bus.txt" , "r");
	
	
	fscanf(bus , "%d" , &num);
	for(j = 0 ; j <10 ; j++)
		{
			fscanf(bus ,"%s" , c[j]);
		}	
	
	while(!feof(bus))
	{
		
		
		
		if(num == prNum && save >0)
		{
			printf("\n\n Bus is between  %s   - %s " , c[save-1] , c[save]);
			break;
		}
		else
		{
		//	printf("\n\n Bus is missed");
		//	break;
		}
			
		fscanf(bus , "%d" , &num);
	
			for(j = 0 ; j <10 ; j++)
		{
			fscanf(bus ,"%s" , c[j]);
		}	
	}
	if(save == 0)
	{
		printf("\n\t\t ::: SORRY , NO BUS IS AVAILABLE AT THIS MOMENT :::");
	}
}

