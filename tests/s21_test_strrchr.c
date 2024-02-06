#include "s21_test.h"

START_TEST(test_s21_strrchr_1) {
  char hole[50] = "superdupertesting_char";
  int apple = 5;
  ck_assert_ptr_null(s21_strrchr(hole, apple));
  ck_assert_ptr_null(strrchr(hole, apple));
}
END_TEST

START_TEST(test_s21_strrchr_2) {
  char hole[50] = "superdupertesting_chart";
  ck_assert_str_eq(s21_strrchr(hole, 'a'), strrchr(hole, 'a'));
}
END_TEST

START_TEST(test_s21_strrchr_3) {
  char hole[50] = "superdupertesting_char";
  char apple = '\0';
  ck_assert_str_eq(s21_strrchr(hole, apple), strrchr(hole, apple));
}
END_TEST

Suite *make_strrchr_suite(void) {
  Suite *s = suite_create("strrchr");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strrchr_1);
  tcase_add_test(tc_strings, test_s21_strrchr_2);
  tcase_add_test(tc_strings, test_s21_strrchr_3);
  return s;
}