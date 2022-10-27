#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess, nguesses=1;
    srand(time(0));
    number =rand()%100+1;
    //printf("the number is %d", number);
    // keep running the loop until the number is guess
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please\n");    
        }
        else if (guess<number){
            printf("higher number please\n");
        }
        else{
            printf("congrats you guess the number in %d attempts\n", nguesses);
            printf("winner");
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}