#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void addingFunc(){
    while (true)
    {
        int totalInput;
        srand(time(0));
        int int1 = rand() %100;
        int int2 = rand() %100;
        int total = int1 + int2;
        printf("type 1337 to exit\n");
        printf("what is %d + %d? >>>",int1,int2);
        scanf("%d",&totalInput);
        if (totalInput == total)
        {
            printf("correct\n");
        }
        else if (totalInput == 1337)
        {
            break;
        }
        else
        {
            printf("incorect the awnser is %d\n",total);
        }
    }
}
void subingFunc(){
    while (true)
    {    
        int totalInput;
        srand(time(0));
        int int1 = rand() %100;
        int int2 = rand() %100;
        int total = int1 - int2;
        printf("type 1337 to exit\n");
        printf("what is %d - %d? >>>",int1,int2);
        scanf("%d",&totalInput);
        if (totalInput == total)
        {
            printf("correct\n");
        }
        else if (totalInput == 1337)
        {
            break;
        }
        else
        {
            printf("incorect the awnser is %d\n",total);
        }
    }
}
void multingFunc(){
    while (true)
    {
        int totalInput;
        srand(time(0));
        int int1 = rand() %10;
        int int2 = rand() %100;
        int total = int1 * int2;
        printf("type 1337 to exit\n");
        printf("what is %d x %d? >>>",int1,int2);
        scanf("%d",&totalInput);
        if (totalInput == total)
        {
            printf("correct\n");
        }
        else if (totalInput == 1337)
        {
            break;
        }
        else
        {
            printf("incorect the awnser is %d\n",total);
        }
    }
    
    
}
void divingFunc(){
    while (true)
    {
        int totalInput;
        srand(time(0));
        int int1 = rand() %100;
        int int2 = rand() %10;
        int total = int1 / int2;
        printf("type 1337 to exit\n");
        printf("what is %d / %d? >>>",int1,int2);
        scanf("%d",&totalInput);
        if (totalInput == total)
        {
            printf("correct\n");
        }
        else if (totalInput == 1337)
        {
            break;
        }
        else
        {
            printf("incorect the awnser is %d\n",total);
        }
    }
    
}

void menuFunc(){
    int selNum;
    printf("what do you want to practice?\n");
    printf("1 addition\n2 subtraction\n3 multiplication\n4 division\n5 to exit\n>>>");
    scanf("%d", &selNum);
    if (selNum == 1)
    {
        addingFunc();
    }
    else if (selNum == 2)
    {
        subingFunc();
    }
    else if (selNum == 3)
    {
        multingFunc();
    }
    else if (selNum == 4)
    {
        divingFunc();
    }
    else if (selNum == 5)
    {
        printf("exiting...");
        exit(0);
    }
    else
    {
        printf("imput not reconised exiting...");
        exit(0);
    }    
}

int main ()
{
    menuFunc();
}