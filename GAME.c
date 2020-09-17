#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int Numbers[11];
char Names[11][20];

//**************************************************************************************************************************************************************

int EasyPlayerScore;
int HardPlayerScore;

enum {NOUGHTS, CROSSES, BORDER, EMPTY};
enum {HUMANWIN, COMPWIN, DRAW};

const int Directions[4] = {1, 5, 4, 6};

const int ConvertTo25[9] = {
	 6, 7, 8,
	11,12,13,
	16,17,18
};

const int InMiddle = 4;
const int Coners[4] = {0,2,6,8};

//**************************************************************************************************************************************************************

int GetNumForDir();
int FindThreeInARow();
void InitialiseBoard();
void EasyPrintBoard();
void HardPrintBoard();
int HasEmpty();
void MakeMove();
int GetNextBest();
int GetWinningMove();
int EasyGetComputerMove();
int HardGetComputerMove();
int GetHumanMove();
void EasyRunGame1();
void EasyRunGame2();
void HardRunGame1();
void HardRunGame2();

//**************************************************************************************************************************************************************

int PVPPlayer1Score;
int PVPPlayer2Score;

struct MyDataType{
	int i;
	char ch;
}InputValue();


void run1();
void run2();
void display1(char sym[9]);
void display2(char sym[9]);

//**************************************************************************************************************************************************************


int exitgame();
int gamePvCeasy();
int gamePvChard();

int main() {
	int selection;
	int mode;
	int hardness;
	int NumberOfRounds;
	int index;
	int swap;
	int tempint;
	char tempchar[20];
	int i;
	int count=0;
	char ch;
	
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |  TAC  |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |  TAC  |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |  TOE  |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |   O   |   O   |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |   X   |  TAC  |   O   |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |   X   |   X   |  TOE  |\n");
	printf("                                            |_______|_______|_______|\n");
	
	printf("\n\n\n\n\n\n\n                                      <<<PRESS ANY KEY TO START THE GAME>>>");
	getch();
	
	back1:
	system("cls");
	printf("\n   					          ~~~ MAIN MENU ~~~");
	printf("\n--------------------------------------------------------------------------------------------------------------------------\n\n");
	
	printf("  1. Select mode\n");
	printf("  2. High scores\n");
	printf("  3. Help\n");
	printf("  4. Exit\n");
	
	printf("\n\n\n Select your choice: ");
	scanf("%d",&selection);
	
	while(selection!=4){
		if(selection==1){
			back2:
			EasyPlayerScore=0;
			HardPlayerScore=0;
			PVPPlayer1Score=0;
			PVPPlayer2Score=0;
			NumberOfRounds=0;
			system("cls");
			printf("\n   					        ~~~ MODE SELECTION ~~~");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
			
			printf("  1. Player vs Player\n");
			printf("  2. Player vs Computer\n");
			printf("  3. Back\n");
			printf("\n\n\n\n Select your choice: ");
			scanf("%d",&mode);
			
			while(mode!=3){
				if(mode==1){
					printf("\n\n\n How many rounds do you want to play? ");
					scanf("%d", &NumberOfRounds);
						while(index<(NumberOfRounds/2)){
							system("cls");
							run1();
							getch();
							system("cls");
							run2();
							getch();
							index++;
						}
						if(PVPPlayer1Score == PVPPlayer2Score){
							system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        Score level. It's a DRAW!");
						}else{
							if(PVPPlayer1Score > PVPPlayer2Score){
								system("cls");
								printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        The Winner is Player 1");
							}else{
								system("cls");
								printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        The Winner is Player 2");
							} 
						}
					getch();
					goto back2;
				}else{
					printf("\n\n  1. Easy\n");
					printf("  2. Hard\n");
					printf("\n\n Select the hardness level: ");
					scanf("%d", &hardness);
					if(hardness==1){
						system("cls");
						index=0;
						srand(time(NULL));
						while(index<2){
							EasyRunGame1();
							getch();
							EasyRunGame2();
							getch();
							system("cls");
							index++;
						}
						printf("\n   					  ~~~ Player Vs Computer - EASY ~~~");
						printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        GAME OVER!! \n\n");
						printf("\n\n\t\t\t\t\t    Player's Score is: %d", EasyPlayerScore);
						getch();
					
						FILE *file = fopen("Scores.txt","a+");
	
						ch = getc(file);
						while(ch != EOF){
							if(ch == '\n'){
								count++;
							}
							ch = getc(file);
						}
						fclose(file);
	
						if(count<11){
							if(count==10){
								fopen("Scores.txt","a+");
								i=0;
								while(i<(count)){
									fscanf(file,"%s %d",&Names[i],&Numbers[i]);
									i++;
								}
			
								swap=1;
								while(1){
     								if(swap==0){
    									break;
									}	
    								swap=0;
									for(i=0;i<(count);i++){
										if(Numbers[i]<Numbers[i+1]){
											tempint=Numbers[i];
											strcpy(tempchar,Names[i]);
											Numbers[i]=Numbers[i+1];
											strcpy(Names[i],Names[i+1]);
											Numbers[i+1]=tempint;
											strcpy(Names[i+1],tempchar);
											swap=1;
										}
									}
								}
								fclose(file);
			
								if(Numbers[9] < EasyPlayerScore){
									printf("\n\n\n\t\t\t\t\t    It's a new HighScore.. \n\n");
									printf("\n\t\t\t\t\t    Enter your Name: ");
									scanf("%s", &tempchar);
									strcpy(Names[9],tempchar);
									Numbers[9]=EasyPlayerScore;
				
									swap=1;
									while(1){
     									if(swap==0){
    										break;
										}	
    									swap=0;
										for(i=0;i<(count);i++){
											if(Numbers[i]<Numbers[i+1]){
												tempint=Numbers[i];
												strcpy(tempchar,Names[i]);
												Numbers[i]=Numbers[i+1];
												strcpy(Names[i],Names[i+1]);
												Numbers[i+1]=tempint;
												strcpy(Names[i+1],tempchar);
												swap=1;
											}
										}
									}
				
									fopen("Scores.txt","w+");
				
									for(i=0;i<count;i++){
										fprintf(file,"%s %d \n",Names[i],Numbers[i]);
									}
									fclose(file);
								}else{
									printf("\n\n\n\t\t\t\t\t    It's not a High Score.. \n\n");
								}
							}else{
								fopen("Scores.txt","a+");
								i=0;
								while(i<(count)){
									fscanf(file,"%s %d",&Names[i],&Numbers[i]);
									i++;
								}	
			
								printf("\n\n\n\t\t\t\t\t    It's a new HighScore.. \n\n");
								printf("\n\t\t\t\t\t    Enter your Name: ");
								scanf("%s", &Names[count]);
								Numbers[count]=EasyPlayerScore;
			
								swap=1;
								while(1){
     								if(swap==0){
    								break;
									}	
    								swap=0;
									for(i=0;i<(count);i++){
										if(Numbers[i]<Numbers[i+1]){
											tempint=Numbers[i];
											strcpy(tempchar,Names[i]);
											Numbers[i]=Numbers[i+1];
											strcpy(Names[i],Names[i+1]);
											Numbers[i+1]=tempint;
											strcpy(Names[i+1],tempchar);
											swap=1;
										}
									}
								}
								fclose(file);
			
								fopen("Scores.txt","w+");
			
								for(i=0;i<(count+1);i++){
									fprintf(file,"%s %d \n",Names[i],Numbers[i]);
								}
								fclose(file);
							}
						}
						
						goto back2;
					}else{
						system("cls");
						index=0;
						srand(time(NULL));
						while(index<2){
							HardRunGame1();
							getch();
							HardRunGame2();
							getch();
							system("cls");
							index++;
						}
						printf("\n   					  ~~~ Player Vs Computer - HARD ~~~");
						printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        GAME OVER!! \n\n");
						printf("\n\n\t\t\t\t\t    Player's Score is: %d", HardPlayerScore);
						getch();
						
						FILE *file = fopen("Scores.txt","a+");
	
						ch = getc(file);
						while(ch != EOF){
							if(ch == '\n'){
								count++;
							}
							ch = getc(file);
						}
						fclose(file);
	
						if(count<11){
							if(count==10){
								fopen("Scores.txt","a+");
								i=0;
								while(i<(count)){
									fscanf(file,"%s %d",&Names[i],&Numbers[i]);
									i++;
								}
			
								swap=1;
								while(1){
     								if(swap==0){
    									break;
									}	
    								swap=0;
									for(i=0;i<(count);i++){
										if(Numbers[i]<Numbers[i+1]){
											tempint=Numbers[i];
											strcpy(tempchar,Names[i]);
											Numbers[i]=Numbers[i+1];
											strcpy(Names[i],Names[i+1]);
											Numbers[i+1]=tempint;
											strcpy(Names[i+1],tempchar);
											swap=1;
										}
									}
								}
								fclose(file);
			
								if(Numbers[9] < HardPlayerScore){
									printf("\n\n\n\t\t\t\t\t    It's a new HighScore.. \n\n");
									printf("\n\t\t\t\t\t    Enter your Name: ");
									scanf("%s", &tempchar);
									strcpy(Names[9],tempchar);
									Numbers[9]=HardPlayerScore;
				
									swap=1;
									while(1){
     									if(swap==0){
    										break;
										}	
    									swap=0;
										for(i=0;i<(count);i++){
											if(Numbers[i]<Numbers[i+1]){
												tempint=Numbers[i];
												strcpy(tempchar,Names[i]);
												Numbers[i]=Numbers[i+1];
												strcpy(Names[i],Names[i+1]);
												Numbers[i+1]=tempint;
												strcpy(Names[i+1],tempchar);
												swap=1;
											}
										}
									}
				
									fopen("Scores.txt","w+");
				
									for(i=0;i<count;i++){
										fprintf(file,"%s %d \n",Names[i],Numbers[i]);
									}
									fclose(file);
								}else{
									printf("\n\n\n\t\t\t\t\t    It's not a High Score.. \n\n");
								}
							}else{
								fopen("Scores.txt","a+");
								i=0;
								while(i<(count)){
									fscanf(file,"%s %d",&Names[i],&Numbers[i]);
									i++;
								}	
			
								printf("\n\n\n\t\t\t\t\t    It's a new HighScore.. \n\n");
								printf("\n\t\t\t\t\t    Enter your Name: ");
								scanf("%s", &Names[count]);
								Numbers[count]=HardPlayerScore;
			
								swap=1;
								while(1){
     								if(swap==0){
    								break;
									}	
    								swap=0;
									for(i=0;i<(count);i++){
										if(Numbers[i]<Numbers[i+1]){
											tempint=Numbers[i];
											strcpy(tempchar,Names[i]);
											Numbers[i]=Numbers[i+1];
											strcpy(Names[i],Names[i+1]);
											Numbers[i+1]=tempint;
											strcpy(Names[i+1],tempchar);
											swap=1;
										}
									}
								}
								fclose(file);
			
								fopen("Scores.txt","w+");
								
			
								for(i=0;i<(count+1);i++){
									fprintf(file,"%s %d \n",Names[i],Numbers[i]);
								}
								fclose(file);
							}
						}
						goto back2;
					}
				}
			}
			system("cls");
			goto back1;
		}if(selection==2){
			system("cls");
			printf("\n   					          ~~~ HIGH SCORES ~~~");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
				count = 0;
		
			FILE *file = fopen("Scores.txt","r+");
		
			ch = getc(file);
			while(ch != EOF){
				if(ch == '\n'){
					count++;
				}
				ch = getc(file);
			}
			printf("%d",count);
			printf("\n\n Rank    Score    Player Name");
			printf("\n----------------------------------");
			i=0;
			while(i<count){
				fscanf(file,"%s %d",&Names[i],&Numbers[i]);
				printf("\n\n %d      %d       %s", (i+1), Numbers[i], Names[i]);
				i++; 
			}
			getch();
			fclose(file);
			goto back1;
		}if(selection==3){
			system("cls");
			printf("\n   					             ~~~ HELP ~~~");
	        printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
			printf("\n\n GAME - There are two modes in this game. They are palyer VS player and player vs computer. This is like ordinary\n");
			printf("        tic tac toe game. You can make a win by forming three crosses or three noughts in a row horizontally, vertically\n");
			printf("        or digonally. But when calculating the High score, the game only consider about the player vs computer mode.\n");
			printf("\n\n\n PLAYER VS PLAYER MODE - When you are entering this mode, it asks you how many rounds do you wanna play. So you can \n");
			printf("                         select any number of rounds that you wanna play with your friend. The points are given like\n");
			printf("                         this, if it's a win, the winnig player gets two points and the other gets no points. If it's a\n");
			printf("                         draw, both of the players get one point for each.\n");
			printf("\n PLAYER VS COMPUTER MODE - When you are entering this mode, it asks you in what hardness level you wanna play.\n");
			printf("                         According to the hardness level of the game, points are given. When you are playing in easy mode\n");
			printf("                         for one winning one point will be added. For a draw no points will be added. When you are playing\n");
			printf("                         in hard mode, for one winning two points will be added. For a draw one point will be added.\n");
			printf("                         High scores are calculated only in this mode. And it has only ten rounds.\n");
			printf("\n\n\n\n\n                         PRESS ANY KEY TO GO BACK >>>>>>>>>>>>>>>>>>>>>>>");
			getch();
			goto back1;
		}
	}
	exitgame();
}

int exitgame(){
	system("cls"); 
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |  TAC  |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |       |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |  TAC  |       |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |       |       |  TOE  |\n");
	printf("                                            |_______|_______|_______|\n");
	sleep(1);
	system ("cls");
	printf(" \n \n \n \n \n \n \n");
	printf("                                             _______ _______ _______ \n");
	printf("                                            |       |       |       |\n");
	printf("                                            |  TIC  |   O   |   O   |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |   X   |  TAC  |   O   |\n");
	printf("                                            |_______|_______|_______|\n");
	printf("                                            |       |       |       |\n");
	printf("                                            |   X   |   X   |  TOE  |\n");
	printf("                                            |_______|_______|_______|\n");
	
	printf("\n\n\n\n\n\n\n                                      <<<PRESS ANY KEY TO EXIT THE GAME>>>");
	getch();
	system("cls"); 
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        Thankyou For Playing");
	sleep(2);

}

//**************************************************************************************************************************************************************
void run1(){
	int count;
	struct MyDataType info;
	char symbol[9]={'1','2','3','4','5','6','7','8','9',};
	display1(symbol);
	again:
	info = InputValue(symbol,count);
	symbol[info.i] = info.ch;
	system("cls");
	display1(symbol);
	if(check(symbol,info.ch,count)==1){
	 if(info.ch == 'X'){
	 	PVPPlayer1Score = PVPPlayer1Score+1;
	 }else{
	 	PVPPlayer2Score = PVPPlayer2Score+1;
	 }
	 printf("\n\n\n\t player 1 Score: %d", PVPPlayer1Score);
	 printf("\n\t player 2 Score: %d", PVPPlayer2Score);
	}else{
	count++;
	goto again;
	}
}

void run2(){
	int count;
	struct MyDataType info;
	char symbol[9]={'1','2','3','4','5','6','7','8','9',};
	display2(symbol);
	again:
	info = InputValue(symbol,count);
	symbol[info.i] = info.ch;
	system("cls");
	display2(symbol);
	if(check(symbol,info.ch,count)==1){
	 if(info.ch == 'O'){
	 	PVPPlayer1Score = PVPPlayer1Score+1;
	 }else{
	 	PVPPlayer2Score = PVPPlayer2Score+1;
	 }
	 printf("\n\n\n\t player 1 Score: %d", PVPPlayer1Score);
	 printf("\n\t player 2 Score: %d", PVPPlayer2Score);
	}else{
	count++;
	goto again;
	}
}

int check(char sym[9],char ch[1],int count){
	int i;
	for(i=0;i<3;i++){
		if(sym[i]==ch&&sym[i+1]==ch&&sym[i+2]==ch){
			printf("\n\n\n                                                    The winner is %c",ch); return 1;
		}
	}
	for(i=0;i<3;i++){
		if(sym[i]==ch&&sym[i+3]==ch&&sym[i+6]==ch){
			printf("\n\n\n                                                    The winner is %c",ch); return 1;
		}
	}
	if(sym[0]==ch&&sym[4]==ch&&sym[8]==ch){
			printf("\n\n\n                                                    The winner is %c",ch); return 1;
		}
	else if(sym[2]==ch&&sym[4]==ch&&sym[6]==ch){
			printf("\n\n\n                                                    The winner is %c",ch); return 1;
		}
	else if(count==8){
		printf("\n\n\n                                                    The game is DRAW.");
		return 1;
	}
	else return 0;
		
}

struct MyDataType InputValue(char sym[9], int count){
	char value[1];
	int i;
	struct MyDataType info;
	inputAgain:
	if(count%2 == 0){
		printf("\n Enter your choice X: ");
	}else{
		printf("\n Enter your choice O: ");
	}
	scanf("%s",value);
	
	for(i=0;i<9;i++){
		if(*value==sym[i]){
			info.i = i;
			if(count%2==0){
				info.ch = 'X';
			}else{
				info.ch = 'O';
			}break;
			
		}else{
			info.i = -1;
			info.ch = "";
		}
	}
	if(info.i == -1){
		printf("\n Input space is not valid.");
		goto inputAgain;
	}
	return info;
}

void display1(char sym[9]){
	printf("\n   					       ~~~ Player Vs Player ~~~");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
	printf(" Player 1 symbol = X\n");
	printf(" Player 2 symbol = O\n");
	printf("                                                 _______ _______ _______ \n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[0],sym[1],sym[2]);
	printf("                                                |_______|_______|_______|\n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[3],sym[4],sym[5]);
	printf("                                                |_______|_______|_______|\n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[6],sym[7],sym[8]);
	printf("                                                |_______|_______|_______|\n");
}

void display2(char sym[9]){
	printf("\n   					       ~~~ Player Vs Player ~~~");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n\n");
	printf(" Player 1 symbol = O\n");
	printf(" Player 2 symbol = X\n");
	printf("                                                 _______ _______ _______ \n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[0],sym[1],sym[2]);
	printf("                                                |_______|_______|_______|\n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[3],sym[4],sym[5]);
	printf("                                                |_______|_______|_______|\n");
	printf("                                                |       |       |       |\n");
	printf("                                                |   %c   |   %c   |   %c   |\n",sym[6],sym[7],sym[8]);
	printf("                                                |_______|_______|_______|\n");
}
//**************************************************************************************************************************************************************

int GetNumForDir(int startSq, const int dir, const int *board, const int us){
	int found=0;
	while(board[startSq] != BORDER){
		if(board[startSq] !=us){
			break;
		}
		found++;
		startSq += dir;
	}
	return found;
}

int FindThreeInARow(const int *board, const int ourindex, const int us){
	int DirIndex = 0;
	int Dir = 0;
	int ThreeCount = 1;
	
	for(DirIndex = 0; DirIndex<4; ++DirIndex){
		Dir = Directions[DirIndex];
		ThreeCount += GetNumForDir(ourindex + Dir, Dir, board, us);
		ThreeCount += GetNumForDir(ourindex + Dir * -1, Dir * -1, board, us);
		if(ThreeCount == 3){
			break;
		}
		ThreeCount = 1;
	}
	return ThreeCount;
}

void InitialiseBoard(int *board){
	int index=0;
	for(index=0;index<25;++index){
		board[index]=BORDER;
	}
	for(index=0;index<9;++index){
		board[ConvertTo25[index]]=EMPTY;
	}
}

void EasyPrintBoard(const int *board){
	int index=0;
	char pceChars[] =  "OX|-";
	printf("\n   					  ~~~ Player Vs Computer - EASY ~~~");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n\t\t\t\t\t ");
	for(index=0;index<9;++index){
		if(index!=0 && index%3==0){
			printf("\n\n\n\n\t\t\t\t\t ");
		}
		printf("%9c",pceChars[board[ConvertTo25[index]]]);
	}
	printf("\n\n");
}

void HardPrintBoard(const int *board){
	int index=0;
	char pceChars[] =  "OX|-";
	printf("\n   					  ~~~ Player Vs Computer - HARD ~~~");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n\t\t\t\t\t ");
	for(index=0;index<9;++index){
		if(index!=0 && index%3==0){
			printf("\n\n\n\n\t\t\t\t\t ");
		}
		printf("%9c",pceChars[board[ConvertTo25[index]]]);
	}
	printf("\n\n");
}

int HasEmpty(const int *board){
	int index;
	for(index=0;index<9;++index){
		if(board[ConvertTo25[index]]==EMPTY){
			return 1;
		}
	}
	return 0;
}

void MakeMove(int *board, const int sq, const side){
	board[sq] = side;
}

int GetNextBest(const int *board){
	int OurMove = ConvertTo25[InMiddle];
	if(board[OurMove] == EMPTY){
		return OurMove;
	}
	
	int index = 0;
	OurMove = -1;
	
	for(index=0;index<4;index++){
		OurMove = ConvertTo25[Coners[index]];
		if(board[OurMove] == EMPTY){
			break;
		}
		OurMove = -1;
	}
	return OurMove;
}

int GetWinningMove(int *board, const int side){
	int OurMove = -1;
	int WinFound = 0;
	int index = 0;
	
	for(index = 0 ; index<9 ; ++index){
		if(board[ConvertTo25[index]]==EMPTY){
			OurMove = ConvertTo25[index];
			board[OurMove] = side;
			 if(FindThreeInARow(board,OurMove,side) == 3) {
			 	WinFound = 1;
			 }
			 board[OurMove] = EMPTY;
			 if(WinFound == 1){
			 	break;
			 }
			 OurMove = -1;
		};
	}
	return OurMove;
}

int EasyGetComputerMove(const int *board){
	int index = 0;
	int NumFree = 0;
	int AvailableMoves[9];
	int RandMove = 0;
	
	for(index=0;index<9;++index){
		if(board[ConvertTo25[index]]==EMPTY){
			AvailableMoves[NumFree++] = ConvertTo25[index];
		};
	}
	RandMove = (rand() % NumFree);
	return AvailableMoves[RandMove];
}

int HardGetComputerMove(int *board, const int side){
	int index = 0;
	int NumFree = 0;
	int AvailableMoves[9];
	int RandMove = 0;
	
	RandMove = GetWinningMove(board, side);
	if(RandMove != -1){
		return RandMove;
	}
	
	RandMove = GetWinningMove(board, side ^ 1);
	if(RandMove != -1){
		return RandMove;
	}
	
	RandMove = GetNextBest(board);
	if(RandMove != -1){
		return RandMove;
	}
	
	RandMove = 0;
	for(index=0;index<9;++index){
		if(board[ConvertTo25[index]]==EMPTY){
			AvailableMoves[NumFree++] = ConvertTo25[index];
		};
	}
	RandMove = (rand() % NumFree);
	return AvailableMoves[RandMove];
}

int GetHumanMove(const int *board){
	char UserInput[4];
	int MoveOk = 0;
	int Move = -1;
	
	while(MoveOk==0){
		printf("\n Please enter a move from 1 to 9: ");
		fgets(UserInput, 3, stdin);
		fflush(stdin);
		
		if(strlen(UserInput) != 2){
			printf("\n Enter a valid Number.");
			continue;
		}
		
		if(sscanf(UserInput,"%d",&Move) != 1){
			Move = -1;
			printf("\n Enter a valid Number.");
			continue;
		}
		
		if(Move<1 || Move > 9){
			Move = -1;
			printf("\n Enter a valid Number.");
			continue;
		}
		
		Move--;
		
		if(board[ConvertTo25[Move]]!=EMPTY){
			Move = -1;
			printf("\n The square is not available");
			continue;
		}
		MoveOk = 1;
	}
	return ConvertTo25[Move];
}

void EasyRunGame1(){
	int GameOver = 0;
	int Side = CROSSES;
	int LastMoveMade = 0;
	int board[25];
	
	InitialiseBoard(&board[0]);
	EasyPrintBoard(&board[0]);
	
	while(!GameOver){
		if(Side==CROSSES){
			LastMoveMade = GetHumanMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = NOUGHTS;
			system("cls");
			EasyPrintBoard(&board[0]);
		}else{
			LastMoveMade = EasyGetComputerMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = CROSSES;
			system("cls");
			EasyPrintBoard(&board[0]);
		}
		
		if(FindThreeInARow(board, LastMoveMade, Side ^ 1)==3){
			GameOver = 1;
			if(Side==CROSSES){
				printf("\n Computer wins!");
			}else{
				printf("\n You win!");
				EasyPlayerScore = EasyPlayerScore+1;
			}
		}
		if(!HasEmpty(board)){
			printf("Game over!\n");
			GameOver = 1;
			printf("It's a Draw.\n");
		}
	}
	
}

void EasyRunGame2(){
	int GameOver = 0;
	int Side = CROSSES;
	int LastMoveMade = 0;
	int board[25];
	
	InitialiseBoard(&board[0]);
	EasyPrintBoard(&board[0]);
	
	while(!GameOver){
		if(Side==CROSSES){
			LastMoveMade = EasyGetComputerMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = NOUGHTS;
			system("cls");
			EasyPrintBoard(&board[0]);
		}else{
			LastMoveMade = GetHumanMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = CROSSES;
			system("cls");
			EasyPrintBoard(&board[0]);
		}
		
		if(FindThreeInARow(board, LastMoveMade, Side ^ 1)==3){
			GameOver = 1;
			if(Side==CROSSES){
				printf("\n You win!");
				EasyPlayerScore = EasyPlayerScore+1;
			}else{
				printf("\n Computer wins!");
			}
		}
		if(!HasEmpty(board)){
			printf("Game over!\n");
			GameOver = 1;
			printf("It's a Draw.\n");
		}
	}
	
}

void HardRunGame1(){
	int GameOver = 0;
	int Side = CROSSES;
	int LastMoveMade = 0;
	int board[25];
	
	InitialiseBoard(&board[0]);
	HardPrintBoard(&board[0]);
	
	while(!GameOver){
		if(Side==CROSSES){
			LastMoveMade = GetHumanMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = NOUGHTS;
			system("cls");
			HardPrintBoard(&board[0]);
		}else{
			LastMoveMade = HardGetComputerMove(&board[0], Side);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = CROSSES;
			system("cls");
			HardPrintBoard(&board[0]);
		}
		
		if(FindThreeInARow(board, LastMoveMade, Side ^ 1)==3){
			GameOver = 1;
			if(Side==CROSSES){
				printf("\n Computer wins!");
			}else{
				printf("\n You win!");
				HardPlayerScore = HardPlayerScore+2;
			}
		}
		if(!HasEmpty(board)){
			printf("Game over!\n");
			GameOver = 1;
			printf("It's a Draw.\n");
			HardPlayerScore = HardPlayerScore+1;
		}
	}
	
}

void HardRunGame2(){
	int GameOver = 0;
	int Side = CROSSES;
	int LastMoveMade = 0;
	int board[25];
	
	InitialiseBoard(&board[0]);
	HardPrintBoard(&board[0]);
	
	while(!GameOver){
		if(Side==CROSSES){
			LastMoveMade = HardGetComputerMove(&board[0], Side);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = NOUGHTS;
			system("cls");
			HardPrintBoard(&board[0]);
		}else{
			LastMoveMade = GetHumanMove(&board[0]);
			MakeMove(&board[0],LastMoveMade,Side);
			Side = CROSSES;
			system("cls");
			HardPrintBoard(&board[0]);
		}
		
		if(FindThreeInARow(board, LastMoveMade, Side ^ 1)==3){
			GameOver = 1;
			if(Side==CROSSES){
				printf("\n You win!");
				HardPlayerScore = HardPlayerScore+1;
			}else{
				printf("\n Computer wins!");
			}
		}
		if(!HasEmpty(board)){
			GameOver = 1;
			printf("It's a Draw.\n");
		}
	}
	
}
