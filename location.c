/**
 * @file location.c
 * @author your name (you@domain.com)
 * @brief Fetching Location Values
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"smart_delivery.h"

/**
 * @brief Location details
 * 
 * @return int 
 */
int location()
{
    char address1[30],address2[30];
    printf("\nPlease provide the pickup address: ");
    scanf("%s",address1);
    printf("\nPlease provide the delivery address: ");
    scanf("%s",address2);
    return 0;
}