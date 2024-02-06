#include "s21_test.h"

START_TEST(s21_strtok_1) {
  char buba[50] = "qwer tyuioiuy trewq";
  const char *dupa = "*";
  ck_assert_pstr_eq(s21_strtok(buba, dupa), strtok(buba, dupa));
}
END_TEST

START_TEST(s21_strtok_2) {
  char buba[50] = "123456789";
  const char *dupa = "5";
  ck_assert_pstr_eq(s21_strtok(buba, dupa), strtok(buba, dupa));
}
END_TEST

START_TEST(s21_strtok_3) {
  char buba[50] = "qwe r t y u io i uytrewq";
  const char *dupa = "0";
  ck_assert_pstr_eq(s21_strtok(buba, dupa), strtok(buba, dupa));
}
END_TEST

Suite *make_strtok_suite(void) {
  Suite *s = suite_create("strtok");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, s21_strtok_1);
  tcase_add_test(tc_strings, s21_strtok_2);
  tcase_add_test(tc_strings, s21_strtok_3);
  return s;
}