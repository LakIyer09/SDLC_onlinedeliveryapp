#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"inc/smart_delivery.h"

int main()
{
    int input,choice=1,otp=0;
    char input_repeat[20];
    printf("Welcome to Smart delivery APP\n");
    int pass=Login_Singup();
    if(pass==0)
    {
        while(choice==1)
        {
            printf("Please select the delivery system\n");
            printf("1.Food\n");
            printf("2.Medicines\n");
            scanf("%d", &input);
            if(input==1)
            {
                int res=Food();
                if(res==0)
                {
                    printf("\nReceived the order? press 1 for OTP Authentication press 0 if not ");
                    scanf("%d", &otp);
                    if(otp==1)
                    {
                        otpauthentication();
                        exit(1);
                    }
                    else{
                        printf("Want to order anything else? Yes or No");
                        scanf("%s", &input_repeat);
                        if(!strcmp(input_repeat,"Yes"))
                        {
                            choice=1;
                        }
                        else{
                            choice=0;
                        }
                    }
                }
                else{
                    break;
                }
            }
            else if(input==2)
            {
                int res=Medicine();
                if(res==0)
                {
                    printf("\nReceived the order? press 1 for OTP Authentication press 0 if not ");
                    scanf("%d", &otp);
                    if(otp==1)
                    {
                        otpauthentication();
                        exit(1);
                    }
                    else
                    {
                        printf("Want to order anything else? Yes or No");
                        scanf("%s", &input_repeat);
                        if(!strcmp(input_repeat,"Yes"))
                        {
                            choice=1;
                        }
                        else{
                            choice=0;
                        }
                    }
                }
                else{
                    break;
                }
            }

            else{
                printf("please enter a valid number\n");
            }
        }
        
    }
    return 0;
}