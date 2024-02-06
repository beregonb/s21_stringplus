#include "s21_test.h"

START_TEST(memcmp_test1) {
  char str1[BUFFER] = "Hello";
  char str2[BUFFER] = "Hello";
  ck_assert_int_eq(s21_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test2) {
  char str1[BUFFER] = "Hello";
  char str2[BUFFER] = "Hell";
  ck_assert_int_eq(s21_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test3) {
  char str1[BUFFER] = "";
  char str2[BUFFER] = "Hello";
  ck_assert_int_eq(s21_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test4) {
  char str1[BUFFER] = "Hello";
  char str2[BUFFER] = "HeLLo";
  ck_assert_int_eq(s21_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test5) {
  char str1[BUFFER] = "Hello";
  char str2[BUFFER] = "afdHello";
  ck_assert_int_eq(s21_memcmp(str1, str2, 3), memcmp(str1, str2, 3));
}
END_TEST

Suite *make_memcmp_suite(void) {
  Suite *s = suite_create("memcmp");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, memcmp_test1);
  tcase_add_test(tc_strings, memcmp_test2);
  tcase_add_test(tc_strings, memcmp_test3);
  tcase_add_test(tc_strings, memcmp_test4);
  tcase_add_test(tc_strings, memcmp_test5);
  return s;
}