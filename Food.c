/**
 * @file Food.c
 * @author your name (you@domain.com)
 * @brief For ordering Food
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
 * @brief Intitilazing the hotel and food details
 * 
 */
void hotel_initialize()
{
    strcpy(m[1].hotel, "Anandha Bhavan");
    strcpy(m[1].first_food, "Idli");
    strcpy(m[1].second_food, "Dosa");
    strcpy(m[1].third_food, "Pongal");
    m[1].first = 30;
    m[1].second = 70;
    m[1].third = 45;
    strcpy(m[2].hotel, "Saravana Bhavan");
    strcpy(m[2].first_food, "Parotta");
    strcpy(m[2].second_food, "Sandwich");
    strcpy(m[2].third_food, "Pizza");
    m[2].first = 65;
    m[2].second = 35;
    m[2].third = 80;
    strcpy(m[3].hotel, "Ibacco");
    strcpy(m[3].first_food, "Ice cream");
    strcpy(m[3].second_food, "Juice");
    strcpy(m[3].third_food, "Cake");
    m[3].first = 50;
    m[3].second = 40;
    m[3].third = 50;
}


/**
 * @brief Ordering the food
 * 
 * @param food 
 * @return int 
 */
int food_order(int food)
{
    int hotel_id;
    int n;
    if (food >= 1 && food <= 3)
        hotel_id = 1;
    else if (food >= 4 && food <= 6)
        hotel_id = 2;
    else
        hotel_id = 3;
    if ((food % 3) == 1) {
        printf("Please Enter the");
        printf(" Count of %s\t",m[hotel_id].first_food);
        scanf("%d", &n);
        total = total + (n * m[hotel_id].first);
    }
    else if ((food % 3) == 2) {
        printf("Please Enter the ");
        printf("Count of %s\t",m[hotel_id].second_food);
        scanf("%d", &n);
        total = total + (n * m[hotel_id].second);
    }
    else if ((food % 3) == 0) {
        printf("Please Enter the ");
        printf("Count of %s\t",m[hotel_id].third_food);
        scanf("%d", &n);
        total = total + (n * m[hotel_id].third);
    }
    return total;
}

/**
 * @brief Control fuction to display the food details and getting input values
 * 
 * @return int 
 */
int Food()
{
    int food,p;
    total=0;
    int loop_control=0;
    hotel_initialize();
    while (loop_control==0) {
        printf("\nPlease choose the ");
        printf("food\n\nItem\t   Cost in Rs\n\n1) %s\t\t%d\n2) %s\t\t%d",m[1].first_food, m[1].first,m[1].second_food, m[1].second);
  
        printf("\n3) %s\t%d\n4) %s\t%d\n",m[1].third_food, m[1].third,m[2].first_food, m[2].first);
  
        printf("5) %s\t%d\n6) %s\t%d\n",m[2].second_food, m[2].second,m[2].third_food, m[2].third);
        printf("7) %s\t%d\n8) %s\t%d\n",m[3].first_food, m[3].first,m[3].second_food, m[3].second);
        printf("9) %s\t\t%d\n10) Cart\n",m[3].third_food,m[3].third);
        printf("11) Exit\n");
  
        printf("Please Enter Your Choice\n");
        scanf("%d", &food);
        if (food > 11) {
            printf("Please Enter the valid choice\n\n");
            Food();
        }
        else if (food == 10)
        {
            cart(p);
            loop_control=1;
            return 0;
        }
        else if (food == 11)
        {
            loop_control=1;
            return 1;
        }
        else
            p=food_order(food);
    }
    return 0;
}