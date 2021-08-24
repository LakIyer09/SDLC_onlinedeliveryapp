/**
 * @file smart_delivery.h
 * @author your name (you@domain.com)
 * @brief User defined header function 
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SMART_DELIVERY_H
#define SMART_DELIVERY_H

/**
 * @brief structure for storing user details
 * 
 */
typedef struct details{
 char name[50];
 char username[50];
 char password[50];
 char mobile[10];
 char mail_id[50];
}detail;

/**
 * @brief Structure for storing hotel details and cost
 * 
 */
typedef struct hotels {
    char hotel[100];
    char first_food[20];
    char second_food[20];
    char third_food[20];
    char fourth_food[25];
    int first, second, third, fourth;
}hotel;

/**
 * @brief Strucutre for storing medicine details and cost
 * 
 */
typedef struct medicine {
    char shop[100];
    char first_medicine[20];
    char second_medicine[20];
    char third_medicine[20];
    char fourth_medicine[25];
    int first, second, third, fourth;
}medicine;

hotel m[5];
detail s[50];
medicine m1[5];

/**
 * @brief Cart details
 * 
 * @return int 
 */
int cart();

/**
 * @brief Login and sign up functions
 * 
 * @return int 
 */
int Login_Singup();

/**
 * @brief Choosing the delivery system
 * 
 * @return int 
 */
int choosing_delivery_system();

/**
 * @brief Choosing the location
 * 
 * @return int 
 */
int location();

/**
 * @brief Getting cart details
 * 
 * @return int 
 */
int cart_details();

/**
 * @brief OTP authentication
 * 
 * @return int 
 */
int otp_authentication();


/**
 * @brief Validating funcitons
 * 
 * @param temp_name 
 * @return int 
 */
int validate_name(char *temp_name);
int validate_email(char *temp_email);
int validate_password(char *temp_password1,char *temp_password2);
int validate_mobile(char *temp_mobile);

/**
 * @brief For getting location details
 * 
 * @return int 
 */
int location();

/**
 * @brief Checking if the account exists in database
 * 
 * @param temp_email email id
 * @param temp_password1 password
 * @param temp_name name
 * @param temp_mobile mobile no
 * @return int 
 */
int account_check(char* temp_email,char* temp_password1,char* temp_name,char* temp_mobile);

/**
 * @brief OTP authentication
 * 
 */
void otpauthentication();

/**
 * @brief Food function
 * 
 * @return int 
 */
int Food();

/**
 * @brief For choosing medicine
 * 
 * @return int 
 */
int Medicine();
int File();
#endif