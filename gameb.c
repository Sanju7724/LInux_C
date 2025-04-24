#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int guess,attempts =0;
int rand_value;
printf("welcome to the game\n");
printf("guess the number between 1 to 100\n");
srand(time(0));
rand_value=rand()%100;
printf("%d\n",rand_value);
do{
printf("enter your guess:\n");
scanf("%d",&guess);
attempts++;
if (guess > rand_value)
{
printf("number is larger\n");
}

else if(guess < rand_value)
{
printf("number is smaller\n");
}
else
{
printf("Congrats!you guessed right it in %d attempts \n",attempts);
}
}while(guess != rand_value);

return 0;

}

