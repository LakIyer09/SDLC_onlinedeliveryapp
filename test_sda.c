#include "smart_delivery.h"
#include "unity.h"


int result=0;
/* Required by the unity test framework */

void setUp()
{
}
void tearDown()
{
}
/* testing the account function */
void test_account(void)
{
    
    char mail[20]="rkstark@gmail.com";
    char password[20]="ravi@121";
    char name[20]="ravi";
    char mobile[20]="7070622031";
    
    TEST_ASSERT_EQUAL(1, account_check(mail,password,name,mobile));
}

/* testing validating email funtion */
void test_validate_name1(void)
{
    char name[20]="ravi";
    TEST_ASSERT_EQUAL(1, validate_name(name));
}

/* testing validating name function */
void test_validate_name2(void)
{
    char name[20]="121";
    TEST_ASSERT_EQUAL(0, validate_name(name));
}

/* Validating mail function by giving proper mail id*/
void test_validate_mail1(void)
{
    char email[20]="rkstark@gmail.com";
    TEST_ASSERT_EQUAL(1, validate_email(email));
}

/*Validating mail function by giving improper mail ids */
void test_validate_mail2(void)
{
    char mail[20]="rkstarkgmail";
    TEST_ASSERT_EQUAL(0, validate_email(mail));
}

/* Validating the mobile number by giving correct value*/
void test_validate_number1(void)
{
    char mobil[20]="7070622031";
    TEST_ASSERT_EQUAL(1, validate_mobile(mobil));
}

/* Validating the mobile number by giving wrong value */
void test_validate_number2(void)
{
    char mobil[20]="707062203";
    TEST_ASSERT_EQUAL(0, validate_mobile(mobil));
}

/* Testing location function */
void test_location(void)
{
    TEST_ASSERT_EQUAL(0, location());
}

/* Testing cart function */
void test_cart(void)
{
    int total=50;
    TEST_ASSERT_EQUAL(0, cart(50));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_validate_name1);
    RUN_TEST(test_validate_name2);
    RUN_TEST(test_validate_mail1);
    RUN_TEST(test_validate_mail2);
    RUN_TEST(test_validate_number1);
    RUN_TEST(test_validate_number2);
    RUN_TEST(test_location);

    return UNITY_END();
}
