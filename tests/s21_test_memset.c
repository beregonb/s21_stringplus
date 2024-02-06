#include "s21_test.h"

START_TEST(test_s21_memset_1) {
  char buffer[55] = "This is a test of the memset function";
  s21_size_t n = 7;
  ck_assert_pstr_eq(s21_memset(buffer, '*', n), memset(buffer, '*', n));
}
END_TEST

START_TEST(test_s21_memset_2) {
  char buffer[55] = " ";
  char arr2 = '1';
  s21_size_t n = 1;
  ck_assert_pstr_eq(s21_memset(buffer, arr2, n), memset(buffer, arr2, n));
}
END_TEST

START_TEST(test_s21_memset_3) {
  char buffer[55] = "This is a test of the memset function";
  char arr2 = '1';
  s21_size_t n = 7;
  ck_assert_pstr_eq(s21_memset(buffer, arr2, n), memset(buffer, arr2, n));
}
END_TEST

Suite *make_memset_suite(void) {
  Suite *s = suite_create("memset");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_memset_1);
  tcase_add_test(tc_strings, test_s21_memset_2);
  tcase_add_test(tc_strings, test_s21_memset_3);
  return s;
}