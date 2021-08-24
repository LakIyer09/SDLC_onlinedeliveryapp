/**
 * @file validate.c
 * @author your name (you@domain.com)
 * @brief Validating the credentials whether entered is right(for name,email,mobileno,password)
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>

/**
 * @brief Validate function for validating the name
 * 
 * @param temp_name 
 * @return int 
 */
int validate_name(char *temp_name)
{
    int i;
    int flag=0;
    for (i = 0; temp_name[i] != '\0'; i++) {
        if (!((temp_name[i] >= 'a' && temp_name[i] <= 'z')|| (temp_name[i] >= 'A' && temp_name[i] <= 'Z'))) 
        {
            printf("Please Enter the valid Name\n");
            return 0;
            break;
        }
        else
        {
            flag=1;
            return flag;
        }
    }
}
/**
 * @brief Validating email
 * 
 * @param temp_email 
 * @return int 
 */
int validate_email(char *temp_email)
{
    int i,flag=0,count=0;
    for (i = 0;temp_email[i] != '\0'; i++) 
        {
            if (temp_email[i] == '@'|| temp_email[i] == '.')
                count++;
        }
        if (count >= 2 && strlen(temp_email) >= 5) 
        {
            flag=1;
            return flag;
        }
        else
        {
            printf("Please Enter Valid E-Mail\n");
            return 0;
        }
}

/**
 * @brief Validating Password
 * 
 * @param temp_password1 
 * @param temp_password2 
 * @return int 
 */
int validate_password(char *temp_password1,char *temp_password2)
{
    int flag=0;
    int caps = 0;
    int small = 0;
    int numbers = 0;
    int special = 0;
    int i;
    if (!strcmp(temp_password1,temp_password2)) 
    {
        if (strlen(temp_password1) >= 8 && strlen(temp_password1) <= 15) 
        {
                    for (i = 0;temp_password1[i]!= '\0';i++) {
                        if (temp_password1[i] >= 'A'
                            && temp_password1[i] <= 'Z')
                            caps++;
                        else if (temp_password1[i] >= 'a'
                                 && temp_password1[i]
                                        <= 'z')
                            small++;
                        else if (temp_password1[i] >= '0'
                                 && temp_password1[i]
                                        <= '9')
                            numbers++;
                        else if (temp_password1[i] == '@'
                                 || temp_password1[i] == '&'
                                 || temp_password1[i] == '#'
                                 || temp_password1[i]
                                        == '*')
                            special++;
                    }
        }
            if (caps >= 1 && small >= 1 && numbers >= 1 && special >= 1)
            {
                flag=1;
                return flag;
            }
            else{
                printf("Please Enter the strong password, Your password must contain atleast one uppercase Lowercase, Number and special character\n");
                return 0;
            }
    }
}

/**
 * @brief Validating mobile
 * 
 * @param temp_mobile 
 * @return int 
 */
int validate_mobile(char *temp_mobile)
{
    int i,success=0,flag=0;
    if (strlen(temp_mobile) == 10) 
    {
        for (i = 0; i < 10; i++) 
            {
                if (temp_mobile[i]>= '0'&& temp_mobile[i] <= '9') 
                {
                    success = 1;
                }
            }
    }
    if (success == 1)
    {
        flag=1;
        return flag;
    }
    else{
        printf("Please Enter the valid mobile number\n");
        return 0;
    }
    
}
