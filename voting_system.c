#include <stdio.h>
#include <stdlib.h>
//stdlib is used because we used "DEFINE" keyword in our project.
#include <string.h>
//string is used because we used strcmp(string compare) in our project.
//define macroname charseq
//total no of the parties
#include<windows.h>
#include<dos.h>
//windows.h and dos.hedder files are used because we used beep function in our project.
#include<conio.h>





#define total_no_of_parties

#define party_no_1 "JANA SEVA"
#define party_no_2 "PEOPLE'S ACTION PARTY" 
#define party_no_3 "SEVA HITH PARTY" 
#define party_no_4 "NATIONAL ALLIANCE PARTY"
#define party_no_5 "JAGRITH PARTY"
#define party_no_6 "CIVIC DEMOCRETIC PARTY"
#define party_no_7 "LOKAPRIYA SAMAJ PARTY"
#define party_no_8 "ALL INDIA PARTY"

#define party_no_1_symbol "TELEPHONE"
#define party_no_2_symbol "CLOCK"
#define party_no_3_symbol "ELEPHANT"
#define party_no_4_symbol "FAN"
#define party_no_5_symbol "ROSE"
#define party_no_6_symbol "TRACTOR"
#define party_no_7_symbol "CYCLE"
#define party_no_8_symbol "BULB"



#define candidate_1  "DEVRAJ S HEGDE"
#define candidate_2  "ROBIN"
#define candidate_3  "RASHID KHAN"
#define candidate_4  "ANJANA"
#define candidate_5  "FATHIMA"
#define candidate_6  "MALIKABI TASRIA"
#define candidate_7  "RANJAN M SHASTRI"
#define candidate_8  "NAGHABHUSHAN"


int vote_Count1 = 0,
    vote_Count2 = 0,
    vote_Count3 = 0,
    vote_Count4 = 0,
    vote_Count5 = 0,
    vote_Count6 = 0,
    vote_Count7 = 0,
    vote_Count8 = 0,
    NOTA=0,
    invalid_votes = 0;
    


void beep_function()
{
    Beep(750,1000);
}
 



void black()
{
printf("\033[1;30m");
//set the text color to black.
}


void red()
{
printf("\033[1;31m");
//set the text color to red.
}

void green()
{
printf("\033[1;32m");
//set the text color to green.
}

void yellow()
{
printf("\033[1;33m");
//set the text color to yellow.
}

void blue()
{
printf("\033[1;34m");
//set the text color to blue.
}


void purple()
{
printf("\033[1;35m");
//set the text color to purple.
}


void cyan()
{
printf("\033[1;36m");
//set the text color to red.
}

void white()
{
printf("\033[1;37m");
//set the text color to red.
}




void castVote(){
    cyan();
    int choice;
    printf("\n \n <#> <#> <#> <#> Please chooose your Candidate <#> <#> <#> <#> \n \n");
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------");
    yellow();
    printf("\n 1. %s                    %s        %s", party_no_1,party_no_1_symbol,candidate_1);
    blue();
    printf("\n 2. %s        %s            %s", party_no_2,party_no_2_symbol,candidate_2);
    white();
    printf("\n 3. %s              %s         %s", party_no_3,party_no_3_symbol,candidate_3);
    black();
    printf("\n 4. %s      %s              %s", party_no_4,party_no_4_symbol,candidate_4);
    purple();
    printf("\n 5. %s                %s             %s", party_no_5,party_no_5_symbol,candidate_5);
    yellow();
    printf("\n 6. %s       %s          %s", party_no_6,party_no_6_symbol,candidate_6);
    green();
    printf("\n 7. %s        %s            %s", party_no_7,party_no_7_symbol,candidate_7);
    cyan();
    printf("\n 8. %s              %s             %s", party_no_8,party_no_8_symbol,candidate_8);
    red();
    printf("\n 9. %s", "None of the above(NOTA)");
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------");
    black();

    printf("\n \n Input your choice ( 1 - 9) :\n");

        white();

    scanf("\n%d", &choice);

    switch (choice){
        case 1:
        vote_Count1++;
        break;
        case 2:
        vote_Count2++;
        break;
        case 3:
        vote_Count3++;
        break;
        case 4:
        vote_Count4++;
        case 5:
        vote_Count5++;
        case 6:
        vote_Count6++;
        case 7:
        vote_Count7++;
        case 8:
        vote_Count8++;
        break;
        case 9:
        NOTA++;
        break;
        
        default:
        red();
        invalid_votes++;
        printf(" \n  YOU SPOILED YOUR VOTE BE CAREFUL NEXT TIME:\n\n");
           
    }
   
    
    blue();
     printf(" \nThanks for your vote !!\n\n\n");
    beep_function();
}


void votesCount()
// this fuction is used to count the vote.
{   green();
    printf("\n \n ##### Voting Statics #####");
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");
    blue();
    printf("\n %s- %s - %d\n\n", party_no_1,candidate_1, vote_Count1);
    purple();
    printf("\n %s- %s - %d\n\n", party_no_2,candidate_2, vote_Count2);
    yellow();
    printf("\n %s- %s - %d\n\n", party_no_3,candidate_3, vote_Count3);
    black();
    printf("\n %s- %s - %d\n\n", party_no_4,candidate_4, vote_Count4);
    white();
    printf("\n %s- %s - %d\n\n", party_no_5,candidate_5, vote_Count5);
    cyan();
    printf("\n %s- %s - %d\n\n", party_no_6,candidate_6, vote_Count6);
    yellow();
    printf("\n %s- %s - %d\n\n", party_no_7,candidate_7, vote_Count7);
    purple();
    printf("\n %s- %s - %d\n\n", party_no_8,candidate_8, vote_Count8);
    green();
    printf("\nNone of the above(NOTA)-%d\n",NOTA);
    red();
    printf("\n %s-  %d\n\n", "Spoiled Votes", invalid_votes);
    green();
    printf("TOTAL NUMBER OF VOTES=%d\n",vote_Count1+vote_Count2+vote_Count3+vote_Count4+vote_Count5+vote_Count6+vote_Count7+vote_Count8+NOTA+invalid_votes);
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");

}






void getLeadingCandiate()
{   
    printf("\n \n ##### Leading Candiate #####\n\n");
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");
    cyan();
    if(vote_Count1 > vote_Count2 && vote_Count1 > vote_Count3 && vote_Count1 > vote_Count4 && vote_Count1 > vote_Count5 && vote_Count1 > vote_Count6 && vote_Count1 > vote_Count7 && vote_Count1 > vote_Count8)
    {
        printf("The Leading Candiate is  %s\n\n",candidate_1);
    }else if(vote_Count2 > vote_Count1 && vote_Count2 > vote_Count3 && vote_Count2 > vote_Count4  && vote_Count2 > vote_Count5 && vote_Count2 > vote_Count6 && vote_Count2 > vote_Count7 && vote_Count2 > vote_Count8){
        printf("The Leading Candiate is  %s\n\n",candidate_2);
    }else if(vote_Count3 > vote_Count2 && vote_Count3 > vote_Count1 && vote_Count3 > vote_Count4 && vote_Count3 > vote_Count5 && vote_Count3 > vote_Count6 && vote_Count3 > vote_Count7 && vote_Count3 > vote_Count8){
        printf("The Leading Candiate is  %s\n\n",candidate_3);
    }else if(vote_Count4 > vote_Count2 && vote_Count4> vote_Count3 && vote_Count4 > vote_Count1 && vote_Count4 > vote_Count5 && vote_Count4 > vote_Count6 && vote_Count4 > vote_Count7 && vote_Count4 > vote_Count8){
        printf("The Leading Candiate is  %s\n\n",candidate_4);
    }
    else if(vote_Count5> vote_Count4 && vote_Count5> vote_Count3 && vote_Count5 > vote_Count2 && vote_Count5> vote_Count1 && vote_Count5 > vote_Count6 && vote_Count5 > vote_Count7 && vote_Count5 > vote_Count8){
        printf("The Leading Candiate is %s\n\n",candidate_5);
    }
    else if(vote_Count6 > vote_Count5 && vote_Count6> vote_Count4 && vote_Count6 > vote_Count3 && vote_Count6 > vote_Count2 && vote_Count6 > vote_Count1 && vote_Count6 > vote_Count7 && vote_Count6 > vote_Count8){
        printf("The Leading Candiate is %s\n\n",candidate_6);
    }
    else if(vote_Count7 > vote_Count6 && vote_Count7> vote_Count5 && vote_Count7 > vote_Count4 && vote_Count7 > vote_Count3 && vote_Count7 > vote_Count2 && vote_Count7 > vote_Count1 && vote_Count7 > vote_Count8){
        printf("The Leading Candiate is %s\n\n",candidate_7);
    }
    else if(vote_Count8 > vote_Count7 && vote_Count8> vote_Count6 && vote_Count8 > vote_Count5 && vote_Count8 > vote_Count4 && vote_Count8 > vote_Count3 && vote_Count8 > vote_Count2 && vote_Count8 > vote_Count1){
        printf("The Leading Candiate is %s\n\n",candidate_8);
    }
    
    
    
    else {red();
        printf(" WARNING!!!!!!!!! NO WIN SITUATION\n");
    }
    white();
    printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");
}

int main(){
    int choice;
    char name[30];
    char pin[30];
    int count;
    int ch;
    
 while(1)
 {
{       cyan();
        printf("IF U ARE OFFICER PLEASE ENTER 1:\n");
        green();
        printf("IF U ARE A VOTER PLEASE ENTER 2:\n");
        white();
        scanf("%d",&count);
      
       if(count==1)
       {black();
       printf("WELCOME OFFICER!\n");
       blue();
       printf("PLEASE ENTER YOUR NAME IN UPPERCASE\n");
       yellow();
       scanf("%s",name);
       blue();
       printf("PLEASE ENTER YOUR PIN GIVEN BY ELECTION COMMISION ID\n");
       yellow();
       scanf("%s",pin);
       if(strcmp(name,"NAGESH")==0 && strcmp(pin,"123")==0   ||  strcmp(name,"SUBRAMANYA")==0 && strcmp(pin,"456")==0 ||  strcmp(name,"MOHAMMAD")==0 && strcmp(pin,"789")==0  )
     {  green();
        printf("\n \n ###### WELCOME TO ELECTION / VOTING 2022 ######");
        blue();
        printf("\n \n 1. Find the Vote Count.");
        yellow();
        printf("\n \n 2. Find the Leading Candidate.");
        red();
        printf("\n \n 3. Enter any other key to exit\n");

        cyan();
      
      scanf("%d",&ch);
      switch(ch)
        
        { case 1:
        votesCount();
        break;
        case 2:
        getLeadingCandiate();
        break;
        default:
        printf("invalid choice!!!\n\n");
       
        break;
        }
} 
      else
{
    red();
    printf("PLEASE TRY AGAIN!\n\n"); 
}
     
  }//INNER IF LOOP IS CLOSED HERE.



   else if(count==2)

{    purple();
     printf("welcome voter please cast your valuable vote to right person!");
    castVote();
}

else{
 printf("invalid choice!\n\n");}
}//OUTER IF LOOP IS CLOSED HERE.
}
}
