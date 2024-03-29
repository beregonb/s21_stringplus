#include "s21_test.h"

START_TEST(test_s21_strpbrk_1) {
  char str_1[50] = "privetiki kak u vas delishki";
  char str_2[] = "u nas delishki";
  ck_assert_str_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strpbrk_num) {
  char str_1[50] = "12345678909876543234567";
  char str_2[10] = "543";
  ck_assert_str_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strpbrk_same_lines) {
  char str_1[50] = "123456789";
  char str_2[50] = "12";
  ck_assert_str_eq(s21_strpbrk(str_1, str_2), strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strpbrk_4) {
  char str_1[50] = "";
  char str_2[50] = "";
  ck_assert_ptr_null(s21_strpbrk(str_1, str_2));
  ck_assert_ptr_null(strpbrk(str_1, str_2));
}
END_TEST

START_TEST(test_s21_strpbrk_5) {
  char str_1[50] = "";
  char str_2[50] = "abc";
  ck_assert_ptr_null(s21_strpbrk(str_1, str_2));
  ck_assert_ptr_null(strpbrk(str_1, str_2));
}
END_TEST

Suite *make_strpbrk_suite(void) {
  Suite *s = suite_create("strpbrk");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strpbrk_1);
  tcase_add_test(tc_strings, test_s21_strpbrk_num);
  tcase_add_test(tc_strings, test_s21_strpbrk_same_lines);
  tcase_add_test(tc_strings, test_s21_strpbrk_4);
  tcase_add_test(tc_strings, test_s21_strpbrk_5);
  return s;
}