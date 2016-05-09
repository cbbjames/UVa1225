//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
char x[2048]={0};
int main()
{
	int n;
	scanf("%d", &n);
	int buf[20];
	for (int i = 0; i<n; i++)
	{
		int count[10] = { 0 };
		char nbuf[64] = { 0 };
		char ans[64] = { 0 };
		scanf("%d", &buf[i]);
		for (int j = 1; j <= buf[i]; j++)
		{
			sprintf(nbuf, "%d", j);
			for (int k = 0; k < strlen(nbuf); k++)
			{
				switch (nbuf[k])
				{
				case '0':
					count[0]++;
					break;
				case '1':
					count[1]++;
					break;
				case '2':
					count[2]++;
					break;
				case '3':
					count[3]++;
					break;
				case '4':
					count[4]++;
					break;
				case '5':
					count[5]++;
					break;
				case '6':
					count[6]++;
					break;
				case '7':
					count[7]++;
					break;
				case '8':
					count[8]++;
					break;
				case '9':
					count[9]++;
					break;
				}
			}
		}
		sprintf(ans, "%d %d %d %d %d %d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4], count[5], count[6], count[7], count[8], count[9]);
		strcat(x,ans);
		/*
		if(i==n-1)
			printf("%s", ans);
		else
			printf("%s\n", ans);
			*/
	}
	printf("%s",x);
	//system("PAUSE");
	return 0;
}