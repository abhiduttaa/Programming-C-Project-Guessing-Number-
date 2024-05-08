#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random , guess;
    int count=0;
    srand(time(NULL));

    printf("Welcome To The World Of Guessing Number\n");
    random = rand()%100 + 1; //generating between 0 to 100
    printf("Number Generated is =%d",random);

    do {
        printf("\n Please Enter Your Guess between(1 to 100) :");
        scanf("%d",&guess);
        count++;

        if(guess<random){
            printf("Guess a Larger Number.\n");
        }
        else if(guess>random){
            printf("Guess a Smaller Number.\n");
        }
        else
        {
            printf("\n Congratulations !!! You have Successfully Guessed the Number in %d attempts",count);
        }
               
    }while (guess !=random);
    printf("\n Bye Bye ,Thanks for Playing");
    printf("\n Developed by : Abhijit Dutta (ad3052056@gmail.com)");
    return 0;
}
 
    





