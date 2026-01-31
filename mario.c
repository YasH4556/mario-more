#include <stdio.h>

int main(){

//Input Area
    int n;
printf("Choose a positive integer from 1 to 8: ");
scanf("%d", &n);


// codes to counter when input is geater than 8 
if (n > 8 )
{
    printf("Please enter a number between 1 to 8");
    return 0;
}

//Main code
for (int i = 1; i <= n; i++)
{// program for adding space bar before hashtag to make it look like given in project example
    for (int i2 = n - i ; i2 > 0 ; i2 = i2 - 1 )    
    {
        printf(" ");
    } 
    
// very standard program for printing the # to looke like pyramid
for (int i1 = 1; i1 <= i ; i1++)
{
printf("#");
}
printf("  ");

for (int i1 = 1; i1 <= i ; i1++)
{
printf("#");
}

printf("\n");
}

/* i searched for when input is spaceebar or direct enter and it uses some function which i havent learnt yet
 so right now my program does not have a way to counter that but when i learn it i will impliment it */

//For unwanted inputs
if  ( n <= 0  ){
    printf("Please enter a valid value (Real number)");
}

if ( n >= 'A' && n <= 'z')
{
     printf("Please enter a valid value (Real number)");
}
    return 0;
}