/************************************/
/* fig: Shno Game                   */
/* By: amir0026a                    */
/* https://github.com/amir0026a     */ 
/************************************/
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <windows.h>
using namespace std;


int NumbersOfG=0;
int NUMS=0; 

//________________________________________________
void printMainMenu()
{

  	 cout<<"  ** * * * * * * * * * * * * * * * * * * * * * * * * * * * **"<<endl;     
     cout<<"  *                                                         *"<<endl;
	 cout<<"  *                     "<<char (218)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (191)<<"                      *"<<endl;
     cout<<"  *";
	 for( int tt=1;tt<22;tt++)
		 cout<<char (196);
	 cout<<char (179)<<"  Shno Game "<<char (179);
 for(int tt=1;tt<23;tt++)
		 cout<<char (196);
    	 cout<<"*\n  *                     "<<char(192)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (217)<<"                      *"<<endl;


	 
     cout<<"  *                                                         *"<<endl;
     cout<<"  ** * * * * * * * * * * * * * * * * * * * * * * * * * * * **"<<endl;
}
    
//________________________________________________
void printCredits()
{
     system("cls");
     int CREDIT_NUMS=50;
     char* creditln1=new char[CREDIT_NUMS];
     printMainMenu();
     creditln1="\n\tSimple Shno Game\n\tversion:1.0.0\n\tMake by:\t\t   amir0026a\n\n\t Send me a message via telegram my userID :  \n\n\t\t\t\t   @amir0026a\n\n\t\t\t\t    \n";
     for(int i=0;i<strlen( creditln1);i++)
     {
             cout<<creditln1[i];
             Sleep(20);
     }
     cout<<"\n\t   ";
     system("pause");
}
//________________________________________________
bool areEqual(char* string1,char* string2)
{
     bool result=true;
     if(strlen(string1)==strlen(string2))
     {
        for(int i=0;i<strlen(string1) && i<strlen(string2);i++)
        {
            if(string1[i]!=string2[i])
            {
                 result=false;
            }
        }
     }  
     else
     {
         result=false;
     }
     return result;
}
//________________________________________________
bool isCharacterOf(char character,char *string)
{
     bool ico=false;
     for(int i=0;i<strlen(string);i++)
             if(toupper(string[i])==toupper(character))
                ico=true;
     return ico;
}

//________________________________________________
int *findTarget(char character,char *string)
{
    int t=0;
    for(int i=0;i<strlen(string);i++)
            if(toupper(string[i])==toupper(character))
                t++;
    int *a=new int[t];
    NUMS=t;
    t=0;
    for(int i=0;i<strlen(string);i++)
    {
            if(toupper(string[i])==toupper(character))
            {
                 a[t]=i;
                 t++;
            }
    }
    return a;
}

//________________________________________________
void meno(){
    cout<<"  *                                                         *\n  *  What do you want to do now?                            *"<<endl;
    cout<<"  *                                                         *"<<endl;
    cout<<"  *   1.Play Shno Game                                      *"<<endl;
    cout<<"  *   2.Play 101 Game                                       *"<<endl;
	cout<<"  *   3.About Us                                            *"<<endl;
    cout<<"  *   Or any other key to quit                              *"<<endl;
    cout<<"  *                                                         *"<<endl;
    cout<<"  ** * * * * * * * * * * * * * * * * * * * * * * * * * * * **"<<endl;
    cout<<"      ";}

//_________________________________________________
void welcome(char ww[10])
{
	        for(int tt2=47;tt2>25;tt2--)
	{
        cout<<"\n\n\n\n\n\n\n\n\n\n";
		for(int tt1=tt2;tt1>0;tt1--)
		             cout<<char (0);	
        cout<<ww;
	    Sleep(70);
		system("cls");
	}
Sleep(300);
system("cls");
Sleep(400);
}


//====================================================================================================================
//====================================================================================================================


int main()
{
    srand(time(NULL));
	char** words=new char*[70];
    for(int i=0;i<50;i++)
    {
            words[i]=new char[70];
    }
//----------------------------------------------------------------------------------------------------------------------------------
	words[0]="mother_board";words[1]="keyboard";words[2]="mouse";words[3]="monitor";words[4]="modem";
    words[5]="peugeot";words[6]="ferrari";words[7]="mclaren";words[8]="mitsubishi";words[9]="jaguar";words[10]="bugatti";words[11]="Lamborghini";words[12]="Chevrolet";words[13]="Audi";words[14]="toyota";words[15]="Viper";words[16]="mercedes-benz";
    words[16]="Afghanistan";words[17]="Albania";words[18]="Algeia";words[19]="America";words[20]="Angola";words[21]="Argentina";words[22]="Armenia";words[23]="Australia";words[24]="Azerbaijan";words[25]="Bangladesh";words[26]="Belarus";words[27]="Belgium";words[28]="Benin";words[29]="Bolivia";words[30]="Bosnia_Herzegovina";words[31]="Brazil";words[32]="Britain";words[33]="Bulgaria";words[34]="Cameroon";words[35]="Canada";
    words[36]="sheraz";words[37]="rasht";words[38]="oshnaveyeh";words[39]="tehran";words[40]="tabriz";words[41]="boshehr";words[42]="sari";words[43]="gorgan";words[44]="sanandaj";words[45]="mhabad";words[46]="saghez";words[47]="sardasht";
    words[48]="c++";words[49]="java";words[50]="asp.net";words[51]="vb.net";words[52]="delphi";words[53]="pascal";words[54]="visual_basic";words[55]="basic";
//----------------------------------------------------------------------------------------------------------------------------------

 
   	welcome("https://github.com/amir0026a");	
	int fails=0;
    int ans2;
    int rnd;
    char ch1;
    char word[27];
    
                      int save1,save2;
		               char key1[2]="y";
				      int key;
                      char *amira=new char[40];
					  int tt1;
					  int rnd2;

    MainMenu:
    system("cls");
    printMainMenu();
    int ans=0;
    meno();
    cin>>ans;
    switch(ans)
    {
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++               
	                case 1 : 
                        GetAnswer2:
                        NumbersOfG=0;
                        srand(time(NULL));
                        system("cls");
                        printMainMenu();
                        cout<<"     About:"<<endl;
                        cout<<"     1.computer hardwares\n     2.cars\n     3.countries\n     4.city\n     5.programing languages     ";
                        cin>>ans2;
                       //________________________________________________________________
						switch(ans2)
                        {
                                    case 1: rnd=rand()%5;break;
                                    case 2: rnd=rand()%12+5;break;
                                    case 3: rnd=rand()%20+16;break;
                                    case 4: rnd=rand()%11+36;break;
									case 5: rnd=rand()%7+48;break;
									default :cout<<"     You have to enter 1 , 2 , 3 , 4 or 5\n";
                                            system("pause");
                                            goto GetAnswer2;
                                            break;
                        }
                       //_________________________________________________________________ 
						unsigned int n;
                        for (n=0; n<strlen(words[rnd]); n++) word[n]='-';
                        word[n]='\0';
                        fails=strlen(words[rnd])*2-n/2;
                        while(fails>0)
                        {
                                
                                system("cls");
                                printMainMenu();
                                if(!(isCharacterOf('-',word)))
                                {
                                     cout<<endl<<"     "<<word<<"\n";
                                     
									 
																
							         char *amir1=new char[40];
							
						        	amir1=" Congratulations!!! You won the game.\n";
							        cout<<"\n\n\n\n           ";
					        		for(int t1=0;t1<40;t1++){
					         		cout<<amir1[t1];
						        	Sleep(50);}
						         	cout<<"\n\n\n\n\n\n                          ";		
						        	system("pause");					
                                    goto MainMenu;
                                }
                                cout<<endl<<"     "<<word<<"\n";
                                cout<<"\n     Enter your character: (Lives"<<fails<<")" ;
                                cin>>ch1;
                                findTarget(ch1,words[rnd]);
                                if(isCharacterOf(ch1,words[rnd]))
                                        for(int i=0;i<NUMS;i++)
                                        {
                                                if(word[findTarget(ch1,words[rnd])[i]]!=ch1)
                                                {
                                                       word[findTarget(ch1,words[rnd])[i]]=ch1;
                                                }
                                                else
                                                {
                                                     cout<<"     This character is already choosed, please choose another character.";getch();break;
                                                }
                                        }
                                else
                                        fails-=1;
                        }
                        if(fails==0)
                        {
                            system("cls");							
							char *amir=new char[20];
							
							amir="   GAME OVER\n    ";
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                               ";
							for(int t1=0;t1<16;t1++){
							cout<<amir[t1];
							Sleep(100);}
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";		
							system("pause");						}
						 printCredits();
						goto MainMenu;
//++++++++++++++++++++++++++++++  101 Game  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++               
				   case 2:                     
					  save1=0;
				      save2=0;
				   system("cls");
				   printMainMenu();
				   strcpy(key1,"y");
				   cout<<"\n           welcome to 101 Game\n  ";
                   cout<<"\t 1.play 101 Game\n \t  any other number to back to main menu\n";
				   cin>>key;
				   if (key!=1 ) goto MainMenu;				 
				   system("pause");
				   while (!strcmp(key1,"y")){
				   system("cls");
				   printMainMenu();
				   rnd=rand()%99+1;
                   cout<<" New Number = "<<rnd<<endl;
				   save1+=rnd;
				   cout<<"\n Sum Your Number = "<<save1<<endl;
				   if (save1>101){ 
					cout<<"your number out of 101 \n";
				   Sleep(2500);
				   goto lose;}
					   
				   cout<<"\n\n\n\t do you want to cin number? !!!(y,n) : ";
				   cin>>key1;
				   }
                
//................................................................
                   system("pause");
                   system("cls");
				   printMainMenu();
				   cout<<"\n\t\t  Computer cin a number.......\n\n";
                   srand(time(NULL));
				   rnd=rand()%99+1;
                   cout<<" New Number = "<<rnd<<endl;
				   save2+=rnd;
				   cout<<"\n Sum Computers Number = "<<save2<<endl;
                   Sleep(1000);
				   rnd2=rand()%3;
				   if (save2<40)
					   if(rnd2!=1){
						   Sleep(2000);
						   system("cls");
						   printMainMenu();
						   srand(time(NULL));
				           rnd=rand()%99+1;
                           cout<<" New Number = "<<rnd<<endl;
				           save2+=rnd;
				           cout<<"\n Sum Computers Number = "<<save2<<endl;
					   }

                    Sleep(1000);
				   rnd2=rand()%2;
				   if (save2<60)
					   if(rnd2==1){
						   Sleep(2000);
						   system("cls");
						   printMainMenu();
						   srand(time(NULL));
				           rnd=rand()%99+1;
                           cout<<" New Number = "<<rnd<<endl;
				           save2+=rnd;
				           cout<<"\n Sum Computers Number = "<<save2<<endl;
					   }
                      

					     Sleep(1000);
				   rnd2=rand()%4;
				   if (save2<80)
					   if(rnd2==1){
						   Sleep(2000);
						   system("cls");
						   printMainMenu();
						   srand(time(NULL));
				           rnd=rand()%99+1;
                           cout<<" New Number = "<<rnd<<endl;
				           save2+=rnd;
				           cout<<"\n Sum Computers Number = "<<save2<<endl;
					   }

	               Sleep(1000);
				   rnd2=rand()%6;
				   if (save2<90)
					   if(rnd2==1){
						   Sleep(2000);
						   system("cls");
						   printMainMenu();
						   srand(time(NULL));
				           rnd=rand()%99+1;
                           cout<<" New Number = "<<rnd<<endl;
				           save2+=rnd;
				           cout<<"\n Sum Computers Number = "<<save2<<endl;
					   }
					   
					   
					     Sleep(1000);
				   rnd2=rand()%2;
				   if (save2<60)
					   if(rnd2==1){
						   Sleep(2000);
						   system("cls");
						   printMainMenu();
						   srand(time(NULL));
				           rnd=rand()%99+1;
                           cout<<" New Number = "<<rnd<<endl;
				           save2+=rnd;
				           cout<<"\n Sum Computers Number = "<<save2<<endl;
					   }
					   
					   
					   
					   
					   if(save2>101){cout<<"Computers Number out of 101  ...you win...";Sleep(3000);goto win;}
                   system("cls");
				   printMainMenu();
				   cout<<" your Sum Number      = "<<save1<<endl;
				   cout<<" Computer Sum Number  = "<<save2<<endl;
				   Sleep(1000);
				   if(save1>save2){
					   cout<<"\n\n\t your  number > computers number\n\n\t ..........you win........\n";
					   Sleep(4000);
					   goto win;
				   }
                   goto lose;
                  win:

				   system("cls");							
							
							amira="   Congratulations!!! You won the game.\n";
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                   ";
							for( tt1=0;tt1<40;tt1++){
							cout<<amira[tt1];
							Sleep(100);}
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";		
							system("pause");						
						 printCredits();
						goto MainMenu;
                   


                   system("pause");

				   goto MainMenu;
                   
                   lose:
				    system("cls");							
							
							
							amira="   GAME OVER\n    ";
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                               ";
							for( tt1=0;tt1<16;tt1++){
							cout<<amira[tt1];
							Sleep(100);}
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";		
							system("pause");						
						 printCredits();
						goto MainMenu;
				   
				   break;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++						
				case 3 :
                    printCredits();
                    goto MainMenu;
               default :
                       break;
    }
    welcome("good bay");
	return 0;
}
