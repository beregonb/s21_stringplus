#include "s21_test.h"

START_TEST(test_s21_strstr_1) {
  char str_1[] = "testingovoe predlogenie for testing";
  char str_2[] = "another testing slova";
  ck_assert_pstr_eq(s21_strstr(str_1, str_2), strstr(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strstr_num) {
  char str_1[50] = "12345678909 876543234567";
  char str_2[10] = "543";
  ck_assert_str_eq(s21_strstr(str_1, str_2), strstr(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strstr_same_lines) {
  char str_1[50] = "testinovoe predlogenie for testing";
  char str_2[50] = "testinovoe predlogenie for testing";
  ck_assert_str_eq(s21_strstr(str_1, str_2), strstr(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strstr_4) {
  char str_1[50] = "asa";
  char str_2[50] = "";
  ck_assert_pstr_eq(s21_strstr(str_1, str_2), (strstr(str_1, str_2)));
}
END_TEST

START_TEST(test_s21_strstr_5) {
  char str_1[50] = "";
  char str_2[50] = "abc";
  ck_assert_pstr_eq(s21_strstr(str_1, str_2), (strstr(str_1, str_2)));
}
END_TEST

Suite *make_strstr_suite(void) {
  Suite *s = suite_create("strstr");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strstr_1);
  tcase_add_test(tc_strings, test_s21_strstr_num);
  tcase_add_test(tc_strings, test_s21_strstr_same_lines);
  tcase_add_test(tc_strings, test_s21_strstr_4);
  tcase_add_test(tc_strings, test_s21_strstr_5);
  return s;
}