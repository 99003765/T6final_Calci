#include "unity.h"
#include "operation.h"
#include"trignometry.h"
#include "Conversion.h"
#include"BMI.h"
/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);



void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_trig(void);
//void test_trig1(void);
void conv(void);
void bmic(void);

 



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);

  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_trig);
   //RUN_TEST(test_trig1);
   RUN_TEST(conv);
   RUN_TEST(bmic);

  
   



  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
 TEST_ASSERT_EQUAL(-25, add(-5, -20));
  TEST_ASSERT_EQUAL(-15, add(5, -20));

 
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
   TEST_ASSERT_EQUAL(-2, subtract(-5, -3));
    TEST_ASSERT_EQUAL(7, subtract(5, -2));
     TEST_ASSERT_EQUAL(-7, subtract(-5, 2));


}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
   TEST_ASSERT_EQUAL(15, multiply(5, 3));
    TEST_ASSERT_EQUAL(-15, multiply(5, -3));
     TEST_ASSERT_EQUAL(15, multiply(-5, -3));
     TEST_ASSERT_EQUAL(-42, multiply(-7, 6));




  
 
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
   TEST_ASSERT_EQUAL(0, divide(0, 1));
   TEST_ASSERT_EQUAL(4, divide(20, 5));
   TEST_ASSERT_EQUAL(-5, divide(-15, 3));
   TEST_ASSERT_EQUAL(-20, divide(40, -2));
   TEST_ASSERT_EQUAL(6, divide(-30, -5));




 

  

}
void test_trig(void) {
  TEST_ASSERT_EQUAL(0.893997, sin_angle(90));
  TEST_ASSERT_EQUAL(0, cos_angle(90));
   TEST_ASSERT_EQUAL(1, cos_angle(0));
   TEST_ASSERT_EQUAL(0, sin_angle(0));


  
}
/*void test_trig1(void) {
  TEST_ASSERT_EQUAL(0, cos_angle(90));
  
  
}*/
void conv(void)
{
 TEST_ASSERT_EQUAL(13.88, P_D(10));  
 TEST_ASSERT_EQUAL(338.706, F_K(150));
 TEST_ASSERT_EQUAL(138.28, C_F(54.6));
 TEST_ASSERT_EQUAL(24.06, I_D(1750));
 TEST_ASSERT_EQUAL(174.08, P_D(25));
 TEST_ASSERT_EQUAL(79.4444, F_C(175));
 TEST_ASSERT_EQUAL(83949.58, D_I(1154.2));

}

void bmic(void)
{
  TEST_ASSERT_EQUAL(underwt, bmicon(400,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(401,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(402,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(403,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(404,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(405,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(407,5)); 
   TEST_ASSERT_EQUAL(underwt, bmicon(410,5)); 


}
 
