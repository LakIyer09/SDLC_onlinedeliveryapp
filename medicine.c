/**
 * @file medicine.c
 * @author your name (you@domain.com)
 * @brief For displaying the medicine details and processing
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
int total;

/**
 * @brief Intializing the medicine values and cost
 * 
 */
void medicine_initialize()
{

    strcpy(m1[1].shop, "Super medicals");
    strcpy(m1[1].first_medicine, "eye drops");
    strcpy(m1[1].second_medicine, "fever tablet");
    strcpy(m1[1].third_medicine, "cold tablet");
    m1[1].first = 30;
    m1[1].second = 50;
    m1[1].third = 50;

    strcpy(m1[2].shop, "Babu medicals");
    strcpy(m1[2].first_medicine, "fever tablet1");
    strcpy(m1[2].second_medicine, "cold tablet1");
    strcpy(m1[2].third_medicine, "headache tablet");
    m1[2].first = 55;
    m1[2].second = 45;
    m1[2].third = 30;
  
}
/**
 * @brief Ordering the medicine
 * 
 * @param medicine 
 * @return int 
 */
int medicine_order(int medicine)
{
    int shop_id;
    int n;
    if (medicine >= 1 && medicine <= 3)
        shop_id = 1;
    else 
        shop_id = 2;

    if ((medicine % 3) == 1) {
        printf("Please Enter the");
        printf(" Count of %s\t",
               m1[shop_id].first_medicine);
        scanf("%d", &n);
        total = total + (n * m1[shop_id].first);
    }
    else if ((medicine % 3) == 2) {
        printf("Please Enter the ");
        printf("Count of %s\t",
               m1[shop_id].second_medicine);
        scanf("%d", &n);
        total = total + (n * m1[shop_id].second);
    }
    else if ((medicine % 3) == 0) {
        printf("Please Enter the ");
        printf("Count of %s\t",
               m1[shop_id].third_medicine);
        scanf("%d", &n);
        total = total + (n * m1[shop_id].third);
    }
    return total;
}
/**
 * @brief Main function to display the medicines thier cost and for fetching the inputs and processing
 * 
 * @return int 
 */
int Medicine()
{
    int medicine,p=0;
    total=0;
    int loop_control=0;
    medicine_initialize();
    while (loop_control==0) {
        printf("\nPlease choose the ");
         printf("Medicine\n\nMedicine\t   Cost in Rs\n\n1) %s\t\t%d",
               m1[1].first_medicine, m1[1].first,
               m1[1].second_medicine,m1[1].second);
  
        printf("\n3) %s\t\t%d\n4) %s\t%d",
               m1[1].third_medicine, m1[1].third,
               m1[2].first_medicine, m1[2].first);
  
        printf("\n5) %s\t\t%d\n6) %s\t%d",
               m1[2].second_medicine, m1[2].second,
               m1[2].third_medicine, m1[2].third);
        printf("\n7) Cart\n8) Exit\n");
  
        printf("Please Enter Your Choice\n");
        scanf("%d", &medicine);
        if (medicine > 8) {
            printf("Please Enter the ");
            printf("valid choice\n\n");
            Medicine();
        }
        else if (medicine == 7)
        {
            cart(p);
            loop_control=1;
            return 0;
        }
        else if (medicine == 8)
        {
            loop_control=1;
            return 1;
        }
        else
            p=medicine_order(medicine);
    }
    return 1;
}