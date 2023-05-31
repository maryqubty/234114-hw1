
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define kabilio_num 6
#define white_num 4
#define white_num_devide 5
#define kabilio_no_letter 'r'


int print_welcome_message(){
    return printf("La Inspectora Murillo, Please enter El Professor name:\n");
}

int print_Walter_White_sent(){
    return printf("\nEl Professor sent Walter White into the robbery!\n");
}

int print_Daenerys_sent(){
    return printf("\nEl Professor sent Daenerys Targaryen into the robbery!\n");
}

int print_Doron_Kabilio_sent(){
    return printf("\nEl Professor sent Doron Kabilio into the robbery!\n");
}

int print_no_player(){
    return printf("\nNO player has been sent into the robbery!\n");
}

/////////////////////////////////////

/* prints the name of the chosen warrior
according to the 3 bool variables that it recieves.
the function first checks daenrys
if daenrys isn't the chosen it checks doron
(if also doron  isn't the chosen) then it checks walter */

bool print_chosen(bool Daenerys ,bool kabilio ,bool white)
{
    bool chosen = (Daenerys&& print_Daenerys_sent());
    chosen =(!Daenerys&&kabilio&&print_Doron_Kabilio_sent());
    chosen =(!Daenerys&&!kabilio&&white&&print_Walter_White_sent());
    chosen =(!Daenerys&&!kabilio&&!white&&print_no_player());
return chosen;

}

////////////////////////////////////


void check_chosen()
{
/* defining variables that will contain
 the sum and number of letters */
int  sum=0 , counter=0 ;
/* defining variables that will contain
the new letter and the previous letter  */
char current_letter='a' , previous_letter='a';

/* defining bool variables that will check
if the letters are in ascendant order
and if the name contains the letter r  */
bool is_ascendant = true , no_r=true ;
scanf("%c",&current_letter);
previous_letter= current_letter - 1 ;

/* the loop checks if the current letter
"is bigger" than the previous letter
,if it's 'r' ,counts the num of letter and the size */
while(current_letter!='!')
{
    counter++ ;
    sum+=(int)current_letter ;
  is_ascendant = (is_ascendant && (current_letter > previous_letter));
  no_r = (no_r && (current_letter != kabilio_no_letter));
    previous_letter=current_letter ;
    scanf("%c",&current_letter);

}
/* defining 3 bool variables that contain true
 if the player is fit for the mission and false if not */
bool daenrys = is_ascendant;
bool kabilio = (no_r && counter<kabilio_num) ;
bool white = ((counter > white_num )||(sum%(white_num_devide)!=0));

/* calls the function that will help find the player */
white = print_chosen(daenrys ,kabilio, white);
}


/////////////////////////////////////////

int main()
{

print_welcome_message();

/* calls the function that will help find the player */
check_chosen();


  return 0;
}
