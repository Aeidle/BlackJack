/*
	Name: Adil Alami
	Copyright: AdilAlami©
	Author: Adil Alami
	Date: 03/08/19 16:59
	Description: Simple version of BLACKLACK
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main ()
{
	int T[104] = {1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,10,11,11,11,11,11,11,11,11,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13};
	int t[104] = {1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,10,11,11,11,11,11,11,11,11,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13};
	int tab1[52];
	int tab2[52];
	int TAB1[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int TAB2[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int n,m,i,j,r,R,c,x=51,X=0,y=51,Y=0,dell=0,lm,te=0,ace1,ace2,play,player;
	srand(time(NULL));
	const int min=1 , max=104;
	do
	{
		int some1=0,some2=0;
		printf("1 = 1 player mode\n2 = 2 players mode\n: ");
		scanf("%d",&player);
		if(player==1)
		{
			for(i=0;i<20;i++)
			{
				TAB1[i]=0;
			}
			for(i=0;i<20;i++)
			{
				TAB2[i]=0;
			}
			for(i=0;i<208;i++)
			{
				r=(rand()% max-min)+min;
				R=(rand()% max-min)+min;
				c=t[r];
				t[r]=t[R];
				t[R]=c;
			}
			for(i=0;i<104/2;i++)
			{
				tab1[i]=t[i];
			}
			for(i=104/2,j=0;i<104;i++,j++)
			{
				tab2[j]=t[i];
			}
			do
			{
				printf("player turn");
				printf("\nyour card is : %d",tab1[x]);
				printf("\nyour count is %d\n",some1);
				printf("\n1 = hit\n2 = ignore\n3 = stand\n:");
				scanf("%d",&n);
				if(n==1)
				{
					TAB1[X]=tab1[x];
					if(tab1[x]==1)
					{
						printf("use your card as 1 or 10 : ");
						scanf("%d",&ace1);
						if(ace1==1)
						{
							TAB1[X]=1;
						}
						if(ace1==10)
						{
							TAB1[X]=10;
						}
					}
					X++;
				}
				x--;
				some1=TAB1[0]+TAB1[1]+TAB1[2]+TAB1[3]+TAB1[4]+TAB1[5]+TAB1[6]+TAB1[7]+TAB1[8]+TAB1[9]+TAB1[10];
				if(n==3)
				{
					if(some1<some2 && some2<21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}	
					if(some2<some1 && some1<21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some1==21 && some1!=some2)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some2==21 && some2!=some1)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some1>some2 && some2>21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some2>some1 && some1>21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some1==some2)
					{
						printf("\n\nits a draw . . .");
					}
					if(some1>21 && some2<=21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some2>21 && some1<=21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					break;
				}
				system("PAUSE");
				system("cls");
				//***************************************************************//
				if(Y<2)
				{
					TAB2[Y]=tab2[y];
					if(tab2[y]==1 && some2<12)
					{
						TAB2[Y]=10;
					}
					Y++;
				}
				te++;
				if(te>2)
				{
					if(some2<=10)
					{
						TAB2[Y]=tab2[y];		
					}
					if(10<some2<18 && tab2[y]+some2<22)
					{
						TAB2[Y]=tab2[y];		
					}
					if(some2>21)
					{
						TAB2[Y]=tab2[y];		
					}
					if(some2>17 && some2<22)
					{
						dell++;
					}	
					Y++;
				}
				if(dell==1)
				{
					if(some1<some2 && some2<21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}	
					if(some2<some1 && some1<21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some1==21 && some1!=some2)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some2==21 && some2!=some1)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some1>some2 && some2>21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					if(some2>some1 && some1>21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some1==some2)
					{
						printf("\n\nits a draw . . .");
					}
					if(some1>21 && some2<=21)
					{
						printf("\n\ncomputer wins . . . \ncount = %d\nplayer score = %d",some2,some1);
					}
					if(some2>21 && some1<=21)
					{
						printf("\n\nplayer wins . . . \ncount = %d\ncomputer score = %d",some1,some2);
					}
					break;
				}
				some2=TAB2[0]+TAB2[1]+TAB2[2]+TAB2[3]+TAB2[4]+TAB2[5]+TAB2[6]+TAB2[7]+TAB2[8]+TAB2[9]+TAB2[10];
				y--;
				system("PAUSE");
				system("cls");
			}while(n!=3 || m!=3 || dell!=1);
		}
		if(player==2)
		{
			for(i=0;i<20;i++)
			{
				TAB1[i]=0;
			}
			for(i=0;i<20;i++)
			{
				TAB2[i]=0;
			}
			for(i=0;i<208;i++)
			{
				r=(rand()% max-min)+min;
				R=(rand()% max-min)+min;
				c=t[r];
				t[r]=t[R];
				t[R]=c;
			}
			for(i=0;i<104/2;i++)
			{
				tab1[i]=t[i];
			}
			for(i=104/2,j=0;i<104;i++,j++)
			{
				tab2[j]=t[i];
			}
			do
			{
				printf("player 1 turn");
				printf("\nyour card is : %d",tab1[x]);
				printf("\nyour count is %d\n",some1);
				printf("\n1 = hit\n2 = ignore\n3 = stand\n:");
				scanf("%d",&n);
				if(n==1)
				{
					TAB1[X]=tab1[x];
					if(tab1[x]==1)
					{
						printf("use your card as 1 or 10 : ");
						scanf("%d",&ace1);
						if(ace1==1)
						{
							TAB1[X]=1;
						}
						if(ace1==10)
						{
							TAB1[X]=10;
						}
					}
					X++;
				}
				x--;
				some1=TAB1[0]+TAB1[1]+TAB1[2]+TAB1[3]+TAB1[4]+TAB1[5]+TAB1[6]+TAB1[7]+TAB1[8]+TAB1[9]+TAB1[10];
				if(n==3)
				{
					if(some1<some2 && some2<21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}	
					if(some2<some1 && some1<21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some1==21 && some1!=some2)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some2==21 && some2!=some1)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some1>some2 && some2>21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some2>some1 && some1>21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some1==some2)
					{
						printf("\n\nits a draw . . .");
					}
					if(some1>21 && some2<=21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some2>21 && some1<=21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					break;
				}
				system("PAUSE");
				system("cls");
				//***************************************************************
				printf("player 2 turn");
				printf("\nyour card is : %d",tab2[y]);
				printf("\nyour count is %d\n",some2);
				printf("\n1 = hit\n2 = ignore\n3 = stand\n:");
				scanf("%d",&m);
				if(m==1)
				{
					TAB2[Y]=tab2[y];
					if(tab2[y]==1)
					{
						printf("use your card as 1 or 10 : ");
						scanf("%d",&ace2);
						if(ace2==1)
						{
							TAB2[Y]=1;
						}
						if(ace2==10)
						{
							TAB2[Y]=10;
						}
					}
					Y++;
				}
				y--;
				some2=TAB2[0]+TAB2[1]+TAB2[2]+TAB2[3]+TAB2[4]+TAB2[5]+TAB2[6]+TAB2[7]+TAB2[8]+TAB2[9]+TAB2[10];
				if(m==3)
				{
					if(some1<some2 && some2<21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}	
					if(some2<some1 && some1<21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some1==21 && some1!=some2)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some2==21 && some2!=some1)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some1>some2 && some2>21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					if(some2>some1 && some1>21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some1==some2)
					{
						printf("\n\nits a draw . . .");
					}
					if(some1>21 && some2<=21)
					{
						printf("\n\npalyer 2 wins . . . \ncount = %d\nplayer 1 score = %d",some2,some1);
					}
					if(some2>21 && some1<=21)
					{
						printf("\n\nplayer 1 wins . . . \ncount = %d\nplayer 2 score = %d",some1,some2);
					}
					break;
				}
				system("PAUSE");
				system("cls");
			}while(n!=3 || m!=3);
		}	
		printf("\n\n");
		system("PAUSE");
		system("cls");
		printf("\n1 = play again\n0 = stop\n: ");
		scanf("%d",&play);
		if(play==0)
		{
			break;
		}
	}while(play==1);
	getch ();
}
