#include "s21_test.h"

START_TEST(test_s21_to_lower_1) {
  char *str_1 = "ABC";
  char *str_2 = s21_to_lower(str_1);
  ck_assert_str_eq(str_2, "abc");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_to_lower_2) {
  char *str_1 = "29ea6ad";
  char *str_2 = s21_to_lower(str_1);
  ck_assert_str_eq(str_2, "29ea6ad");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_to_lower_3) {
  char *str_1 = "AbC";
  char *str_2 = s21_to_lower(str_1);
  ck_assert_str_eq(str_2, "abc");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_to_lower_4) {
  char *str_1 = "MNBQW!{Empo";
  char *str_2 = s21_to_lower(str_1);
  ck_assert_str_eq(str_2, "mnbqw!{empo");
  if (str_2) free(str_2);
}
END_TEST

START_TEST(test_s21_to_lower_5) {
  char *s1 = "";
  char *s3 = "";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) free(s2);
}
END_TEST

Suite *make_to_lower_suite(void) {
  Suite *s = suite_create("to_lower");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_to_lower_1);
  tcase_add_test(tc_strings, test_s21_to_lower_2);
  tcase_add_test(tc_strings, test_s21_to_lower_3);
  tcase_add_test(tc_strings, test_s21_to_lower_4);
  tcase_add_test(tc_strings, test_s21_to_lower_5);
  return s;
}