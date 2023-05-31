/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_nominee 13
#define two_spaces 8

void print_welcome_message(){
	printf("Please enter a character:\n");
}

void print_welcome_message2(){
	printf("Please enter votes:\n");
}

void print_introduce_histogram(){
	printf("Histogram:\n");
}
/////////////////////////////////////////////////////////

/* the function recieves the number of the winner and print his name*/
void print_TA(int ta){
	switch (ta) {
		case 1:
			printf("Adi was elected!\n");
			break;
		case 2:
			printf("Alon was elected!\n");
			break;
		case 3:
			printf("Assaf was elected!\n");
			break;
		case 4:
			printf("Daniella was elected!\n");
			break;
		case 5:
			printf("Danielle was elected!\n");
			break;
		case 6:
			printf("Dmitry was elected!\n");
			break;
		case 7:
			printf("Gasob was elected!\n");
			break;
		case 8:
			printf("Ido was elected!\n");
			break;
		case 9:
			printf("Najeeb was elected!\n");
			break;
		case 10:
			printf("Nir was elected!\n");
			break;
		case 11:
			printf("Omer was elected!\n");
			break;
		case 12:
			printf("Yair was elected!\n");
			break;
		case 13:
			printf("Yara was elected!\n");
			break;
	}
}

////////////////////////////////////////////////////////////////////////

/* the function runs through the rows (max)number of times and checks,
if the nominee has the current max num then prints the chosen char.
The function prints spaces accordingly */
void histogram (int nominee[NUM_nominee] , char c , int max)
{
      for(int i=max ; i>0 ; i--)
   {

    for(int j=0 ; j< NUM_nominee ; j++)
   {
      if (nominee[j]==i)
      {
          printf("%c",c);
          nominee[j]--;
      }
      else
      {
              printf(" ");

      }

         if(j>two_spaces)
          {
              printf("  ");
          }
          else
          {
              printf(" ");
          }

   }
    printf("\n");
   }

}

/////////////////////////////////////////////////

/* the function prints the numbers from 1-NUM_nominee(13) */
void print_num()
{
    for (int i =1 ; i<= NUM_nominee ; i++)
        printf("%d ",i);

        printf("\n");
}

////////////////////////////////////
/*the function fills the matrix wit the number 0 */
     void zero_matrix(int nominee[NUM_nominee])
     {
         for( int i=0 ; i<NUM_nominee ; i++)
    {
        nominee[i]=0;
    }
     }
 ///////////////////////////////////

 /*the function fills the matrix with
  the number of votes that each nominee got
  and returns the max num of votes that they got */
 int get_votes(int nominee[NUM_nominee])
 {
   int max =-1;
   int votes=0;
   scanf("%d",&votes);

   while (votes!=(-1))
   {
     nominee[votes-1]++ ;
     if (nominee[votes-1]>max)
     {
         max=nominee[votes-1];
     }
    scanf("%d",&votes);

   }
   return max ;
 }

 /////////////////////////////////////////////////////
 /*the function returns the number of nominee the got max votes  */
  int get_num_max(int max ,int nominee[NUM_nominee])
  {
      for(int i=0; i< NUM_nominee ; i++)
      {
          if(nominee[i]==max)
          {
              return (i+1) ;
          }
      }
       return (0) ;
  }
 //////////////////////////////////////////////////////



    /* the main function defines the matrix that will have
     the number of votes that each nominee got ,
      the max number of votes and the winner's num .
      it receives the character that
       we will use to print the histogram.
      the main calls the different
      functions in order to fill the matrix ,
      print the histogram with the
      numbers and print the winner's name  */

int main()
{
    int nominee[NUM_nominee];
    zero_matrix(nominee);

    int max =-1 , num_max=0;

   print_welcome_message();
   char c='a';
   scanf("%c",&c);

   print_welcome_message2();

  max= get_votes(nominee);
  num_max = get_num_max(max , nominee);

   print_introduce_histogram();
   histogram (nominee , c , max );
   print_num();
   print_TA(num_max);

  return 0;
}
