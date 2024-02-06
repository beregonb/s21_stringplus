#include "s21_test.h"

START_TEST(test_s21_strlen_1) {
  char str_1[50] = "privetiki hahah\0";
  ck_assert_int_eq(s21_strlen(str_1), strlen(str_1));
}
END_TEST

START_TEST(test_s21_strlen_2) {
  char str_1[50] = " ";
  ck_assert_int_eq(s21_strlen(str_1), strlen(str_1));
}
END_TEST

START_TEST(test_s21_strlen_3) {
  char str_2[5] = "\0 3";
  ck_assert_int_eq(s21_strlen(str_2), strlen(str_2));
}
END_TEST

Suite *make_strlen_suite(void) {
  Suite *s = suite_create("strlen");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strlen_1);
  tcase_add_test(tc_strings, test_s21_strlen_2);
  tcase_add_test(tc_strings, test_s21_strlen_3);
  return s;
}
