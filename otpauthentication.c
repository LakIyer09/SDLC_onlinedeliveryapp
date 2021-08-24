/**
 * @file otpauthentication.c
 * @author your name (you@domain.com)
 * @brief OTP authentication
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief For displaying OTP, getting input and comparing
 * 
 */
void otpauthentication()
{
    char str[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n = strlen(str);
    int inp;
    char otp[8];
    char OTP[8];
    for (int i=0; i<=6; i++)
        OTP[i]=str[rand()%n];
    printf("\nYour OTP Number is:%s",OTP);
    OTP[8]='\n';
    printf("\nPlease enter the OTP:");
    scanf("%s", otp);
    int res=strcmp(otp,OTP);
    printf("\n",strlen(otp),strlen(OTP));
    if(res==0)
    {
        printf("OTP is Verified..Thanks for Purchasing\n");
    }
    else
    {
        printf("Please Enter Correct OTP\n");
        printf("If you want to exit press 0 Else press 1\n");
        scanf("%d", &inp);
        if(inp==0)
            exit(1);
        else
            otpauthentication();
    }
}
