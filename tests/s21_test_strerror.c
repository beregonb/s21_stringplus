#include "s21_test.h"

START_TEST(test_s21_strerror_1) {
  for (int index = 0; index < 107; index++) {
    ck_assert_str_eq(s21_strerror(index), strerror(index));
  }
}
END_TEST

Suite *make_strerror_suite(void) {
  Suite *s = suite_create("strerror");
  TCase *tc_strings = tcase_create("strings");
  suite_add_tcase(s, tc_strings);
  tcase_add_test(tc_strings, test_s21_strerror_1);
  return s;
}