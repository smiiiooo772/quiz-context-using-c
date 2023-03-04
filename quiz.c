#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void show_record(); // declration...

int main()
{
	int count,countr, r, r1, i, n;
	float score;
	char choice;
	char playername[20];
	mainhome:
		system("cls");
		printf("\t\t\t WELCOME TO QUIZ PROG.\n");
		printf("\n\t\t.........................");
		printf("\n\t\t\t     WELCOME");
		printf("\n\t\t\t     BCA & BSC 2022");
		
		printf("\n\t\t.........................");
		printf("\n\t\t.........................");
		printf("\n\t\t > Press S to start the game");
		printf("\n\t\t > Press V to view the highest score");
		printf("\n\t\t > Press Q to quit");
		printf("\n\t\t\t.........................\n\n");
	choice=toupper(getch());
	if (choice == 'V')
	{
		show_record();
		goto mainhome;
	}
	else if (choice == 'Q')
	exit(1);
	else if(choice == 'S')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\t\t\t Register name:");
		gets(playername);
		system("cls");
		printf("\n-------Welcome %s to Your Game----", playername);
		printf("\n\n\n Press Y to start the game");
		printf("\n Press any other key to return to main home");
		if (toupper(getch())== 'Y')
		{
			goto home;
		}
		else
		{
			goto mainhome;
			system("cls");
		}
		home:
			system("cls");
			count = 0;
			for(i=1; i<=3;i++)
			{
				system("cls");
				r1=i;
				
				switch(r1)
				{
					case 1:
						printf("\n\n What is the capital of kerala?");
						printf("\n\nA.BBSR\t\tB.DELHI\t\tC.Thhiruannatapuram\t\tD.Angul");
						if(toupper(getch())=='C')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
						case 2:
						printf("\n\n Who is the father of computer");
						printf("\n\nA.Charles\t\tB.babbage\t\tC.ritchson\t\tD.darwin");
						if(toupper(getch())=='B')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
						case 3:
						printf("\n\n Who heats most number of SIXES in ODI");
						printf("\n\nA.RSHARMA\t\tB.GAYLE\t\tC.CHAHAL\t\tD.KOHLI");
						if(toupper(getch())=='B')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
						case 4:
						printf("\n\n What is the national animal of australlia");
						printf("\n\nA.tiger\t\tB.lion\t\tC.kangaroo\t\tD.deer");
						if(toupper(getch())=='C')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
						case 5:
						printf("\n\n What is natutral color of rose?");
						printf("\n\nA.red\t\tB.pink\t\tC.white\t\tD.yellow");
						if(toupper(getch())=='A')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
						case 6:
						printf("\n\n Bakingsoda is _____?");
						printf("\n\nA.KCl\t\tB.KOH\t\tC.KMNO\t\tD.KMNO4");
						if(toupper(getch())=='D')
						{
							printf("\n\nCorrect!!!");
							count++;
							getch();
							break;
						}
						else
						{
							printf("\n\nWrong!!!");
							getch();
							break;
						}
					}
				}
						if(count>=2)
						{
							goto test;
						}
						else
						{
							system("cls");
							printf("\n\n SORRY YOU ARE NOT ELIGIBLE");
							getch();
							goto mainhome;
						}
						test:
							system("cls");
							printf("\n\n\t*** Congratulations %s ***", playername);
							printf("\n\n\t!Press any key to start the game");
							if(toupper(getch())== 'p')
							{
								goto game;
							}
							game:
								countr = 0;
								for(i=1;i<=10;i++)
								{
									system("cls");
									r = i;
									switch(r)
									{
										case 1:
											printf("\n\nWho is father of NATION?");
											printf("\n\nA.Neheru\t\tB.Gopabandhu\n\nC.GANDHI\t\tD.Munda");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 2:
											printf("\n\nHow many keywords in 'C'?");
											printf("\n\nA.32\t\tB.15\n\nC.30\t\tD.18");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 3:
											printf("\n\nHow many Continents?");
											printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.1");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 4:
											printf("\n\nNational game of INDIA?");
											printf("\n\nA.HOCKEY\t\tB.CHESS\n\nC.CRICKET\t\tD.TENNIS");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 5:
											printf("\n\nHow many datatypes in C?");
											printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.1");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 6:
											printf("\n\nHow many districts in ODISHA?");
											printf("\n\nA.30\t\tB.50\n\nC.70\t\tD.10");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 7:
											printf("\n\nHow many states in INDIA?");
											printf("\n\nA.33\t\tB.32\n\nC.29\t\tD.30");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 8:
											printf("\n\nWhich is derived data types?");
											printf("\n\nA.array\t\tB.union\n\nC.double\t\tD.void");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 9:
											printf("\n\nHow many colores are there in rainbow?");
											printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.1");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 10:
											printf("\n\nFourth planet of solar system?");
											printf("\n\nA.Mercury\t\tB.mars\n\nC.venus\t\tD.earth");
											if(toupper(getch())== 'B')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 11:
											printf("\n\nPrime minister of INDIA?");
											printf("\n\nA.RGANDHI\t\tB.MODI\n\nC.NPATTNAIK\t\tD.MBANRJI");
											if(toupper(getch())== 'B')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 12:
											printf("\n\nNational bird of india?");
											printf("\n\nA.Parrot\t\tB.crow\n\nC.Peacock\t\tD.hen");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 13:
											printf("\n\nHow many days in a week?");
											printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.1");
											if(toupper(getch())== 'C')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 14:
											printf("\n\ndomestic animal?");
											printf("\n\nA.cow\t\tB.tiger\n\nC.lion\t\tD.beer");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 15:
											printf("\n\nbiggest desert?");
											printf("\n\nA.sahara\t\tB.thar\n\nC.kalahari\t\tD.....");
											if(toupper(getch())== 'B')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
											case 16:
											printf("\n\nHow many array?");
											printf("\n\nA.3\t\tB.5\n\nC.7\t\tD.1");
											if(toupper(getch())== 'A')
											{
												printf("Correct!!!");
												countr++;
												getch();
												break;
												getch();
											}
											else
											{
												printf("Wrong!!!");
												goto score;
												break;
											}
									}
		
								}
								score:
									system("cls");
									score=(float)countr*100000;
									if(score>0.00 & score<1000000)
									{
										printf("---- congratulations------");
										printf("\n\t You won Rs.%.2f",score);
										goto go;
									}
									else if(score == 1000000.00)
									{
										printf("------Congratulaton-------");
										printf("\n\n\t You won Rs%.2f",score);
										printf("\nThank you");	
									}
									else
									{
										printf("sorry!!!");
										goto go;
									}
									go:
										puts("\n\n Press Y to play next time");
										puts("press any key to continue");
										if(toupper(getch())=='Y')
											goto home;
										else
										{
											goto mainhome;
										}
											
										
										
								
			}
}

void show_record()
			{
				system("cls");
				char name[20];
				float scr;
				FILE *f;
				f=fopen("score.txt","r");
				fscanf(f, "%s%f",&name,&scr);
				printf("\n\n\t %s has secured the highest score %0.2f",name,scr);
				fclose(f);
				getch();
			}
