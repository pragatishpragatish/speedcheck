#include <stdio.h>

int main()
{
    int speedlimitupper, speedlimitlower, currentspeed;
    //int speedcheck=(currentspeed>=speedlimitlower) && (currentspeed<=speedlimitupper);
    printf("Print Upper and Lower Speed Limit:");
    scanf("%d%d", &speedlimitupper, &speedlimitlower);
    printf("Enter Current Speed:");
    scanf("%d", &currentspeed);
    //printf("%d", speedcheck);
    if (currentspeed>speedlimitupper) {
        printf("Your Speed is:%d", currentspeed);
        printf("\nYou are Overspeed");
    }
    else if (currentspeed<speedlimitlower) {
        printf("Your Speed is:%d", currentspeed);
        printf("\nYour are Underspeed");
    }
    else{
        printf("Your Speed is:%d",currentspeed);
        printf("\nYou are going in the correct speed");
    }

    return 0;
}

