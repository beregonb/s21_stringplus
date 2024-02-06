#include "s21_test.h"

START_TEST(test_s21_strncmp_1) {
  char str_1[50] = "testingovoe predlogenie for testing";
  char str_2[] = "another testing slova";
  s21_size_t tsize = 5;
  ck_assert_int_eq(s21_strncmp(str_1, str_2, tsize),
                   strncmp(str_1, str_2, tsize));
}
END_TEST

START_TEST(test_s21_strncmp_num) {
  char str_1[50] = "testingovoe predlogenie for testing";
  char str_2[] = "543";
  s21_size_t tsize = 5;
  ck_assert_int_eq(s21_strncmp(str_1, str_2, tsize),
                   strncmp(str_1, str_2, tsize));
}
END_TEST

START_TEST(test_s21_strncmp_same_lines) {
  char str_1[50] = "testinovoe predlogenie for testing";
  char str_2[50] = "testinovoe predlogenie for testing";
  s21_size_t tsize = 25;
  ck_assert_int_eq(s21_strncmp(str_1, str_2, tsize),
                   strncmp(str_1, str_2, tsize));
}
END_TEST

Suite *make_strncmp_suite(void) {
  Suite *s = suite_create("strncmp");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strncmp_1);
  tcase_add_test(tc_strings, test_s21_strncmp_num);
  tcase_add_test(tc_strings, test_s21_strncmp_same_lines);
  return s;
}