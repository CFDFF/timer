#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<Windows.h>

int main()
{

	//int i = 0;
	//int n;
	//printf("time s:");
	//scanf("%d", &n);
	//printf("\n");

	
	while(1)
	{		
		//i++;

		//if (i ==n)
		//{
		//	return 0;
		//}

		printf("\n");
		printf("\n");
		printf("           ");
		time_t curtime;

		time(&curtime);
		printf("%s", ctime(&curtime));




		Sleep(1000);
		system("cls");




    }


	return 0;
}
