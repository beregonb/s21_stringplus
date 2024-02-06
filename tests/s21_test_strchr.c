#include "s21_test.h"

START_TEST(test_s21_strchr_1) {
  char str_1[50] = "privet\0";
  char str_2 = ' ';
  void *s21_ptr = s21_strchr(str_1, str_2);
  void *ptr = strchr(str_1, str_2);
  ck_assert_ptr_eq(s21_ptr, ptr);
}
END_TEST

START_TEST(test_s21_strchr_2) {
  char str_1[50] = "21312\0";
  char str_2 = '7';
  ck_assert_ptr_null(s21_strchr(str_1, str_2));
  ck_assert_ptr_null(strchr(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strchr_3) {
  char str_1[50] = "123\0 4";
  char str_2 = '3';
  ck_assert_str_eq(s21_strchr(str_1, str_2), strchr(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strchr_4) {
  char str_1[50] = "123 4";
  char str_2 = '\0';
  ck_assert_str_eq(s21_strchr(str_1, str_2), strchr(str_1, str_2));
}
END_TEST

Suite *make_strchr_suite(void) {
  Suite *s = suite_create("strchr");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strchr_1);
  tcase_add_test(tc_strings, test_s21_strchr_2);
  tcase_add_test(tc_strings, test_s21_strchr_3);
  tcase_add_test(tc_strings, test_s21_strchr_4);
  return s;
}