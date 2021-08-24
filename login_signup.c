/**
 * @file login_signup.c
 * @author your name (you@domain.com)
 * @brief Login and Sigup functions
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include"smart_delivery.h"
#include<string.h>

/**
 * @brief Login function to check the values entered with database
 * 
 * @return int 
 */
int login()
{
    char email[50],password[50];
    printf("\nLOGIN\n");
    printf("Enter Your email id\t");
    scanf("%s", email);
  
    printf("Enter Your Password\t");
    scanf("%s", password);
  
    FILE* fp = fopen("src/database.csv", "r");
    if (!fp) 
    {
		printf("Can't open file\n");
	}
    char buffer[1024];
    int row = 0;
    int column = 0;
    int i=0;
    int count=0;
    int res;
    while (fgets(buffer,1024, fp)) 
        {
            column = 0;
            char* value = strtok(buffer, ",");
  
            while (value) {
                if (column == 1) {
                    res=strcmp(email,value);
                    if(res==0)
                    {
                        count++;
                    }
                }
  
                if (column == 2) {
                    res=strcmp(password,value);
                    if(res==0)
                    {
                        count++;
                    }                
                }
                value = strtok(NULL, ",");
                column++;
            }
            row++;
        }
    if(count>=2)
    {
        printf("Welcome you are logged in successfully!!\n");
        return 0;
    }
    else
    {
        printf("Please enter valid details\n");
        return 1;
    }
    fclose(fp);

}

/**
 * @brief Sign up function to compare and validate the details
 * 
 * @return int 
 */
int signup()
{
    int flag=0;
    char name[100], password1[100];
    char password2[100], email[100];
    char mobileno[100];
    while(flag==0)
    {
        printf("Enter Your Name: ");
        scanf("%s", name);
        flag=validate_name(name);
    }

    flag=0;
    while(flag==0)
    {
        printf("Enter Your Email: ");
        scanf("%s", email);
        flag=validate_email(email);
    }

    flag=0;
    while(flag==0)
    {
        printf("Enter Password: ");
        scanf("%s", password1);
        printf("Confirm Password: ");
        scanf("%s", password2);
        flag=validate_password(password1,password2);
    }
    
    

    flag=0;
    while(flag==0)
    {
        printf("Enter Your Mobile Number: ");
        scanf("%s", mobileno);
        flag=validate_mobile(mobileno);
    }

    if(flag==1)
    {
       int c=account_check(email,password1,name,mobileno);
       if(c==1)
       {
           login();
       }
       else if(c==0)
       {
           return 0;
       }
    }
    
}

int Login_Singup()
{
    int input,repeat=1;
    int s=1,k=1;;
    printf("Already a user?\n");
    printf("If yes Enter '1' Else enter '2' \n");
    while(repeat==1)
    {
        printf("1.Login\n");
        printf("2.Signup\n");
        scanf("%d", &input);
        
        if(input==1)
        {
            while(k==1)
            {
                k=login();
            }
        }
            
        else if(input==2)
        {
            while(s==1)
            {
                s=signup();
            }
        }
        else
            printf("please enter a valid number\n");

        if(k==0||s==0)
        {
            repeat=0;
            return 0;
        }
        else{
            repeat=1;
        }
    }
}

