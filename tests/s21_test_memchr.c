#include "s21_test.h"

START_TEST(test_s21_memchr_1) {
  char str[50] = "123456";
  char str1 = '5';
  s21_size_t n = 10;
  ck_assert_str_eq(s21_memchr(str, str1, n), memchr(str, str1, n));
}
END_TEST

START_TEST(test_s21_memchr_2) {
  char str[50] = "123456";
  char str1 = '1';
  s21_size_t n = 10;
  ck_assert_str_eq(s21_memchr(str, str1, n), memchr(str, str1, n));
}
END_TEST

START_TEST(test_s21_memchr_3) {
  char str[50] = "123456";
  char str1 = '0';
  s21_size_t n = 10;
  void *s21_result = s21_memchr(str, str1, n);
  void *std_result = memchr(str, str1, n);
  ck_assert_ptr_eq(s21_result, std_result);
}
END_TEST

START_TEST(test_s21_memchr_4) {
  char str[50] = "123456";
  char str1 = '\0';
  s21_size_t n = 10;
  void *s21_result = s21_memchr(str, str1, n);
  void *std_result = memchr(str, str1, n);
  ck_assert_ptr_eq(s21_result, std_result);
}
END_TEST

Suite *make_memchr_suite(void) {
  Suite *s = suite_create("memchr");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_memchr_1);
  tcase_add_test(tc_strings, test_s21_memchr_2);
  tcase_add_test(tc_strings, test_s21_memchr_3);
  tcase_add_test(tc_strings, test_s21_memchr_4);
  return s;
}