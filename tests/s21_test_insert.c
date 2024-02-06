#include "s21_test.h"

START_TEST(test_s21_insert_1) {
  s21_size_t n = 2;
  const char *str_1 = "diary";
  const char *expected_result = "dictionary";
  void *result = s21_insert(str_1, "ction", n);
  char *str_2 = result;
  ck_assert_str_eq(str_2, expected_result);
  free(result);
}
END_TEST

START_TEST(test_s21_insert_2) {
  s21_size_t n = 0;
  const char *str_1 = "diary";
  const char *expected_result = "ctiondiary";
  void *result = s21_insert(str_1, "ction", n);
  char *str_2 = result;
  ck_assert_str_eq(str_2, expected_result);
  free(result);
}
END_TEST

START_TEST(test_s21_insert_3) {
  s21_size_t n = 5;
  char str_1[50] = "";
  char *str_3 = "null";
  char *str_2 = s21_insert(str_1, "null", n);
  ck_assert_pstr_eq(str_3, str_2);
  if (str_2) free(str_2);
}
END_TEST

Suite *make_insert_suite(void) {
  Suite *s = suite_create("insert");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_insert_1);
  tcase_add_test(tc_strings, test_s21_insert_2);
  tcase_add_test(tc_strings, test_s21_insert_3);
  return s;
}