#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void intro();
void process();
void display_votes();
void admin();
void thank_message();

int vote=0,a=0,b=0,c=0,d=0;
int main()
{
    printf("Hello World!! I miss You.");
    int pass;
    system("color 3F");
    fflush(stdin);
    system("cls");
    printf("\nt\t\t\t\t\t\t\t\tInput Admin Password:");
    scanf("%d",&pass);
    if(pass==456){
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\t\tThis is E_Voting System.\n\t\t\t\t\t\t\t\t\tPress Any Key to Continue..");
    getch();
    intro();
    getch();}
    else{
        printf("\nt\t\t\t\t\t\t\t\tWrong Password!!!");
        getch();
        main();
    }
    return 0;
}
void intro(){
    system("cls");
    int i,len;
    char mode;
    char name[50]="Welcome TO E-VOTING System";
    len=strlen(name);
    printf("\n\n\n\t\t\t\t\t\t\t\t");
    for(i=0;i<40;i++)
    {
        Sleep(50);
        printf("*");
    }
        printf("\n\t\t\t\t\t\t\t\t\t");
        for(i=0;i<len;i++)
        {
            Sleep(50);
            printf("%c",name[i]);
        }
        printf("\n\t\t\t\t\t\t\t\t");
        for(i=0;i<40;i++)
        {
            Sleep(50);
            printf("*");
        }
    printf("\n\n\t\t\t\t\t\t\t\tThe Rules For Voting are\n\n\t\t\t\t\t1.When issues are decided by a vote,all voters may have to be present in the same room at the same time.");
    printf("\n\t\t\t\t\t2.You can vote only once.");
    printf("\n\t\t\t\t\t3.Must be the citizen of Nepal.");
    printf("\n\t\t\t\t\t4.Should not have been involved in criminal activities.");
    printf("\n\t\t\t\t\t5.Must be 18 years and above.");
    printf("\n\n\t\t\t\t\t\t\tPress any key to vote....\n\t\t\t\t\t\t\tPress 'A' for admin mode: ");
            mode=getch();
            fflush(stdin);
           if(mode=='a' || mode=='A'){
                admin();}
           else{
                process();
           }
}
void display_votes(){
    char i;
   char ch;
    Beep(1200,800);
     printf("\n\n\n\t\t\t\t\t\tTHE VOTES SECURED BY CANDIDATES ARE:\n"
           "\t\t\t\t\t\t\t\ 1>Sakar= %d\t\t2>Anushil= %d\n\t\t\t\t\t\t\t 3>Sandeep= %d\t\t4>Nitesh= %d",a,b,c,d);
      printf("\n\n\t\t\t\t\t\t Press any key to log_out and return to home !!!!");
      Sleep(500);

}
void process(){
    int ch;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tHERE IS THE LIST OF CANDIDATES:\n\n\t\t\t\t\t\t\t\tSELECT THEIR RESPECTIVE NUMBER TO VOTE:\n\n\t\t\t\t\t\t\t\t\t1>Sakar\t\t2>Anushil\n\t\t\t\t\t\t\t\t\t3>Sandeep\t4>Nitesh\n\n");
        printf("\n\t\t\t\t\t=> ");
        scanf("%d",&ch);
      Sleep(500);
      switch(ch){
      case 1:
            a++;
            thank_message();
            break;
      case 2:
            b++;
            thank_message();
            break;
      case 3:
            c++;
            thank_message();
            break;
      case 4:
            d++;
            thank_message();
            break;
      default:
            Beep(2000,1000);
            printf("\n\t\t\t\t\tSORRY !! YOUR VOTE HAS BEEN DISQUALIFIED!!!");
            Sleep(2000);
            printf("\n\n\n\t\t\t\t\tPLEASE PROCEED............");
            printf("For Privacy Issues..Press Any key to Clear the screen..");
  }
  getch();
  main();

}

void admin(){
    int psw;
    Beep(2000,900);
    printf("\n\n\t\t\t\t\t\t\tInput Admin Pin-code: ");
    scanf("%d",&psw);
        if(psw==123){
   display_votes();
    }
    else{
        printf("\n\t\t\t\t\t\t\tINCORRECT ADMIN PASSWORD...\n\t\t\t\t\t\t\tPress Any Key to Go Back to Main Menu...");
    }
    getch();
   main();
    }
void thank_message(){
    printf("\n\t\t\t\t\t\tThank You For Casting Your Priceless Vote......");
    printf("\n\t\t\t\t\t\tMOVING TOGETHER FOR A CHANGE...");
     printf("\n\t\t\t\t\t\tPLEASE PROCEED...");
     printf("\n\t\t\t\t\t\tFor Privacy Concerns..Please Clear The Screen By Pressing Any Key!!!");
}

