#include "s21_test.h"

START_TEST(s21_test_sprintf) {
  char format[] = "Hello, %c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  s21_sprintf(str_s21_sprintf, format, 'D');
  sprintf(str_sprintf, format, 'D');
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_2) {
  char format[] = "Hello, %c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  s21_sprintf(str_s21_sprintf, format, 'E');
  sprintf(str_sprintf, format, 'E');
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_3) {
  char format[] = "Hello, %+6c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  char c = 'Z';
  s21_sprintf(str_s21_sprintf, format, c);
  sprintf(str_sprintf, format, c);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_4) {
  char format[] = "Hello, %-6c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  char c = 'V';
  s21_sprintf(str_s21_sprintf, format, c);
  sprintf(str_sprintf, format, c);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_5) {
  char format[] = "Hello, %6c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  char c = 'G';
  s21_sprintf(str_s21_sprintf, format, c);
  sprintf(str_sprintf, format, c);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_6) {
  char format[] = "Hello, % 6c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  char c = 'G';
  s21_sprintf(str_s21_sprintf, format, c);
  sprintf(str_sprintf, format, c);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_7) {
  char format[] = "Hello, %#6s World!";
  char str_1[100];
  char str_2[100];
  char *c = "S";
  s21_sprintf(str_1, format, c);
  sprintf(str_2, format, c);
  ck_assert_str_eq(str_1, str_2);
}
END_TEST

START_TEST(s21_test_sprintf_8) {
  char format[] = "Hello, %06c World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  char c = 'O';
  s21_sprintf(str_s21_sprintf, format, c);
  sprintf(str_sprintf, format, c);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_9) {
  char format[] = "Hello, %d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_10) {
  char format[] = "Hello, %+d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_11) {
  char format[] = "Hello, %-d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_12) {
  char format[] = "Hello, % d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_13) {
  char format[] = "Hello, %0d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_14) {
  char format[] = "Hello, %#d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_15) {
  char format[] = "Hello, %6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_16) {
  char format[] = "Hello, %-6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_17) {
  char format[] = "Hello, %+6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_18) {
  char format[] = "Hello, %06d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_19) {
  char format[] = "Hello, %#6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_20) {
  char format[] = "Hello, % 6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_21) {
  char format[] = "Hello, %6.6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_22) {
  char format[] = "Hello, %5d%d%d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d, -1, 1337);
  sprintf(str_sprintf, format, d, -1, 1337);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_23) {
  char format[] = "Hello, %.6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_24) {
  char format[] = "Hello, %-.6d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_25) {
  char format[] = "Hello, %d World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = -11092001;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_26) {
  char format[] = "Hello, %d int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 11092001;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_27) {
  char format[] = "Hello, %ld int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  long int d = 214748364912;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_28) {
  char format[] = "Hello, %ld int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  long int d = -214748364912;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_29) {
  char format[] = "Hello, %ld int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  long int d = 9223372036854775807;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_30) {
  char format[] = "Hello, %ld int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  long int d = -9223372036854775807;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_31) {
  char format[] = "Hello, %hd int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  short int d = 32.767;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_32) {
  char format[] = "Hello, %hd int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  short int d = -32.767;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_test_sprintf_33) {
  char format[] = "Hello, %-hd int World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  short int d = 32.767;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_sprintf_test_34) {
  char firstString[40];
  char secondString[40];
  float f = -13.373;
  s21_sprintf(firstString, "Float: %.6f ballz", f);
  sprintf(secondString, "Float: %.6f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_35) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.6f ballz", f);
  sprintf(secondString, "Float: %2.6f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_39) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.2f ballz", f);
  sprintf(secondString, "Float: %2.2f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_40) {
  char firstString[40];
  char secondString[40];
  float f = 13.373;
  s21_sprintf(firstString, "Float: %2.2f ballz", f);
  sprintf(secondString, "Float: %2.2f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_41) {
  char firstString[40];
  char secondString[40];
  float f = 1.000210021;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_42) {
  char firstString[40];
  char secondString[40];
  float f = 0;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_43) {
  char firstString[40];
  char secondString[40];
  float f = 0.;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_44) {
  char firstString[40];
  char secondString[40];
  float f = -123.123;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_45) {
  char firstString[40];
  char secondString[40];
  float f = -.0000001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_46) {
  char firstString[40];
  char secondString[40];
  float f = -.00001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_47) {
  char firstString[40];
  char secondString[40];
  float f = 0.00001;
  s21_sprintf(firstString, "Float: %f ballz", f);
  sprintf(secondString, "Float: %f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_48) {
  char firstString[40];
  char secondString[40];
  float f = -0.0000021;
  s21_sprintf(firstString, "Float: %10f ballz", f);
  sprintf(secondString, "Float: %10f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_48a) {
  char firstString[40];
  char secondString[40];
  float f = -0.0000021;
  s21_sprintf(firstString, "Float: %3.5f ballz", f);
  sprintf(secondString, "Float: %3.5f ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_49) {
  char firstString[40];
  char secondString[40];
  double f = -0.0000021;
  s21_sprintf(firstString, "Double: %3.5lf ballz", f);
  sprintf(secondString, "Double: %3.5lf ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_50) {
  char firstString[40];
  char secondString[40];
  double f = 0.0000021;
  s21_sprintf(firstString, "Double: %10lf ballz", f);
  sprintf(secondString, "Double: %10lf ballz", f);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_51) {
  char firstString[256];
  char secondString[256];
  long double f = .0000021;
  long double f2 = 1551.111235512;
  long double f3 = 15231425.12451435;
  s21_sprintf(firstString, "Double: %10Lf %3.2Lf %-Lf ballz", f, f2, f3);
  sprintf(secondString, "Double: %10Lf %3.2Lf %-Lf ballz", f, f2, f3);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_52) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %s sus", s);
  sprintf(secondString, "String: %s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_53) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %.3s sus", s);
  sprintf(secondString, "String: %.3s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_54) {
  char firstString[40];
  char secondString[40];
  char *s = "text";
  s21_sprintf(firstString, "String: %.6s sus", s);
  sprintf(secondString, "String: %.6s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_55) {
  char firstString[40];
  char secondString[40];
  char *s = "text with space";
  s21_sprintf(firstString, "String: %6.9s sus", s);
  sprintf(secondString, "String: %6.9s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_56) {
  char firstString[40];
  char secondString[40];
  char *s = "text with space";
  s21_sprintf(firstString, "String: %-6.9s sus", s);
  sprintf(secondString, "String: %-6.9s sus", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_57) {
  char firstString[40];
  char secondString[40];
  char *s = "wide chars: ";
  s21_sprintf(firstString, "%-6.9s", s);
  sprintf(secondString, "%-6.9s", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_58) {
  char firstString[40];
  char secondString[40];
  char *s = "wide chars: ";
  s21_sprintf(firstString, "%6.9s", s);
  sprintf(secondString, "%6.9s", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_59) {
  char firstString[40];
  char secondString[40];
  char *s = "wide chars: ";
  s21_sprintf(firstString, "ABOBA: %s", s);
  sprintf(secondString, "ABOBA: %s", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_60) {
  char firstString[40];
  char secondString[40];
  char *s = "wide chars: ";
  s21_sprintf(firstString, "ABOBA: %s sss", s);
  sprintf(secondString, "ABOBA: %s sss", s);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_61) {
  char firstString[30];
  char secondString[30];
  char *format = "wchar: %5c";
  char w = 'c';
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test_62) {
  char firstString[1000];
  char secondString[1000];
  s21_sprintf(firstString, "%s%s%s%s", "Aboba", " ", "Babybe", "fortnite"),
      sprintf(secondString, "%s%s%s%s", "Aboba", " ", "Babybe", "fortnite");
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_63) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %u unsigned", u);
  sprintf(secondString, "Amogus: %u unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_64) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %-.5u unsigned", u);
  sprintf(secondString, "Amogus: %-.5u unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_65) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Unsigned: %.5u fortnite", u);
  sprintf(secondString, "Unsigned: %.5u fortnite", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_66) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "%-.5u aboba", u);
  sprintf(secondString, "%-.5u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_67) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 1;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_68) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 0;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_69) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 2147483647;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_70) {
  char firstString[50];
  char secondString[50];
  unsigned int u = -2147483647;
  s21_sprintf(firstString, "Unsigned: %u aboba", u);
  sprintf(secondString, "Unsigned: %u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_71) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 214748364912;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_72) {
  char firstString[60];
  char secondString[60];
  unsigned long u = -9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_73) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lu aboba", u);
  sprintf(secondString, "Unsigned: %lu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_74) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 65535;
  s21_sprintf(firstString, "Unsigned: %hu aboba", u);
  sprintf(secondString, "Unsigned: %hu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_75) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 32770;
  s21_sprintf(firstString, "Unsigned: %hu aboba", u);
  sprintf(secondString, "Unsigned: %hu aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_76) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 327710;
  s21_sprintf(firstString, "Unsigned: %11.10u aboba", u);
  sprintf(secondString, "Unsigned: %11.10u aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_77) {
  char firstString[512];
  char secondString[512];
  char *d = "2048";
  s21_sprintf(firstString, "%10s", d);
  sprintf(secondString, "%10s", d);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_78) {
  char firstString[512];
  char secondString[512];
  char *format = "wchar: %c";
  char w = 'A';
  int a = s21_sprintf(firstString, format, w);
  int b = s21_sprintf(secondString, format, w);
  ck_assert_str_eq(firstString, secondString);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(s21_sprintf_test_79) {
  char firstString[512];
  char secondString[512];
  char *format = "%s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_80) {
  char firstString[512];
  char secondString[512];
  char *format = "%15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_81) {
  char firstString[512];
  char secondString[512];
  char *format = "%.15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_82) {
  char firstString[512];
  char secondString[512];
  char *format = "%15.15s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_83) {
  char firstString[512];
  char secondString[512];
  char *format = "%-6.9s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_84) {
  char firstString[512];
  char secondString[512];
  char *format = "%+-6.9s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_85) {
  char firstString[512];
  char secondString[512];
  char *format = "% s";
  char *val = "21S ASDOADBFAUODFBAS agsdfjgoas 2341";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_86) {
  char firstString[512];
  char secondString[512];
  char *format = "%s";
  char *val = "dA 9sDNsa NAID saDYBU DSnaJ Sd";
  int a = s21_sprintf(firstString, format, val);
  int b = sprintf(secondString, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_87) {
  char firstString[512];
  char secondString[512];
  char *format = "%s%s%s";
  char *val = "dA 9sDNsa NAID)";
  int a = s21_sprintf(firstString, format, val, val, val);
  int b = sprintf(secondString, format, val, val, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_88) {
  char firstString[512];
  char secondString[512];
  char *format = "wchar: %hs";
  char w[] = "àààààà";
  int a = s21_sprintf(firstString, format, w);
  int b = sprintf(secondString, format, w);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_test_sprintf_89) {
  char format[] = "Hello, % i World!";
  char str_sprintf[100];
  char str_s21_sprintf[100];
  int d = 69;
  s21_sprintf(str_s21_sprintf, format, d);
  sprintf(str_sprintf, format, d);
  ck_assert_str_eq(str_sprintf, str_sprintf);
}
END_TEST

START_TEST(s21_sprintf_test_x_1) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %x unsigned", u);
  sprintf(secondString, "Amogus: %x unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_2) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %-.5x unsigned", u);
  sprintf(secondString, "Amogus: %-.5x unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_3) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Unsigned: %.5x fortnite", u);
  sprintf(secondString, "Unsigned: %.5x fortnite", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_4) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "%-.5x aboba", u);
  sprintf(secondString, "%-.5x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_5) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 1;
  s21_sprintf(firstString, "Unsigned: %#x aboba", u);
  sprintf(secondString, "Unsigned: %#x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_6) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 0;
  s21_sprintf(firstString, "Unsigned: %x aboba", u);
  sprintf(secondString, "Unsigned: %x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_7) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 2147483647;
  s21_sprintf(firstString, "Unsigned: %x aboba", u);
  sprintf(secondString, "Unsigned: %x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_8) {
  char firstString[50];
  char secondString[50];
  unsigned int u = -2147483647;
  s21_sprintf(firstString, "Unsigned: %x aboba", u);
  sprintf(secondString, "Unsigned: %x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_9) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 214748364912;
  s21_sprintf(firstString, "Unsigned: %lx aboba", u);
  sprintf(secondString, "Unsigned: %lx aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_10) {
  char firstString[60];
  char secondString[60];
  unsigned long u = -9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lx aboba", u);
  sprintf(secondString, "Unsigned: %lx aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_11) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lx aboba", u);
  sprintf(secondString, "Unsigned: %lx aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_12) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 65535;
  s21_sprintf(firstString, "Unsigned: %hx aboba", u);
  sprintf(secondString, "Unsigned: %hx aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_13) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 32770;
  s21_sprintf(firstString, "Unsigned: %hx aboba", u);
  sprintf(secondString, "Unsigned: %hx aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_14) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 327710;
  s21_sprintf(firstString, "Unsigned: %11.10x aboba", u);
  sprintf(secondString, "Unsigned: %11.10x aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_15) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 327710;
  s21_sprintf(firstString, "Unsigned: %#X aboba", u);
  sprintf(secondString, "Unsigned: %#X aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_x_16) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 2619;
  s21_sprintf(firstString, "Unsigned: %X aboba", u);
  sprintf(secondString, "Unsigned: %X aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_1) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %o unsigned", u);
  sprintf(secondString, "Amogus: %o unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_2) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Amogus: %-.5o unsigned", u);
  sprintf(secondString, "Amogus: %-.5o unsigned", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_3) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "Unsigned: %.5o fortnite", u);
  sprintf(secondString, "Unsigned: %.5o fortnite", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_4) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 69696969;
  s21_sprintf(firstString, "%-.5o aboba", u);
  sprintf(secondString, "%-.5o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_5) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 1;
  s21_sprintf(firstString, "Unsigned: %o aboba", u);
  sprintf(secondString, "Unsigned: %o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_6) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 0;
  s21_sprintf(firstString, "Unsigned: %o aboba", u);
  sprintf(secondString, "Unsigned: %o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_7) {
  char firstString[50];
  char secondString[50];
  unsigned int u = 2147483647;
  s21_sprintf(firstString, "Unsigned: %o aboba", u);
  sprintf(secondString, "Unsigned: %o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_8) {
  char firstString[50];
  char secondString[50];
  unsigned int u = -2147483647;
  s21_sprintf(firstString, "Unsigned: %o aboba", u);
  sprintf(secondString, "Unsigned: %o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_9) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 214748364912;
  s21_sprintf(firstString, "Unsigned: %lo aboba", u);
  sprintf(secondString, "Unsigned: %lo aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_10) {
  char firstString[60];
  char secondString[60];
  unsigned long u = -9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lo aboba", u);
  sprintf(secondString, "Unsigned: %lo aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_11) {
  char firstString[60];
  char secondString[60];
  unsigned long u = 9223372036854775807;
  s21_sprintf(firstString, "Unsigned: %lo aboba", u);
  sprintf(secondString, "Unsigned: %lo aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_12) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 65535;
  s21_sprintf(firstString, "Unsigned: %ho aboba", u);
  sprintf(secondString, "Unsigned: %ho aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_13) {
  char firstString[30];
  char secondString[30];
  unsigned short int u = 32770;
  s21_sprintf(firstString, "Unsigned: %ho aboba", u);
  sprintf(secondString, "Unsigned: %ho aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_o_14) {
  char firstString[40];
  char secondString[40];
  unsigned int u = 327710;
  s21_sprintf(firstString, "Unsigned: %11.10o aboba", u);
  sprintf(secondString, "Unsigned: %11.10o aboba", u);
  ck_assert_str_eq(firstString, secondString);
}
END_TEST

START_TEST(s21_sprintf_test_g_1) {
  char str1[100];
  char str2[100];
  char format[] = "%g";
  double hex = 0.50300;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_2) {
  char str1[100];
  char str2[100];
  char format[] = "%g";
  double hex = 5131.43;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_3) {
  char str1[100];
  char str2[100];
  char format[] = "%g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_4) {
  char str1[100];
  char str2[100];
  char format[] = "%.5g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_5) {
  char str1[100];
  char str2[100];
  char format[] = "%.0g";
  double hex = 0.1;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_6) {
  char str1[100];
  char str2[100];
  char format[] = "%.g";
  double hex = 0.0004;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_7) {
  char str1[100];
  char str2[100];
  char format[] = "%g";
  double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_8) {
  char str1[100];
  char str2[100];
  char format[] = "Hello long double: %LG";
  long double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_g_9) {
  char str1[100];
  char str2[100];
  char format[] = "Hello fuker: %Lg";
  long double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_percent) {
  char c[255] = {}, d[255] = {};
  int n = 2100;
  s21_sprintf(c, "%% %d", n);
  sprintf(d, "%% %d", n);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d) {
  char c[255] = {}, d[255] = {};
  int n = 2100, n1 = 0, n2 = -21;
  short sh = 123, sh1 = -123;
  long int lg = 12345678912345, lg1 = -12345678912345;
  s21_sprintf(c, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2, sh, sh1, lg, lg1,
              lg1);
  sprintf(d, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2, sh, sh1, lg, lg1,
          lg1);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d2) {
  char c[255] = {}, d[255] = {};
  int n = 2100, n2 = -21;
  s21_sprintf(c, "%-10d %10d %10d %2d", 21, n2, n, 10);
  sprintf(d, "%-10d %10d %10d %2d", 21, n2, n, 10);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_d3) {
  char c[255] = {}, d[255] = {}, x1 = 't';
  int n = 2100, n2 = -21;
  s21_sprintf(c, "%3.9d %.d %+-.5d %-+9.6d %.10d %.10d %2.2d %.d %.d % d %.0d",
              10, n, n2, 42, 21, 10, n, n2, -21, x1, 21);
  sprintf(d, "%3.9d %.d %+-.5d %-+9.6d %.10d %.10d %2.2d %.d %.d % d %.0d", 10,
          n, n2, 42, 21, 10, n, n2, -21, x1, 21);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_c) {
  char c[255] = {}, d[255] = {};
  s21_sprintf(c, "%c %10c %-10c", '!', 'a', 'b');
  sprintf(d, "%c %10c %-10c", '!', 'a', 'b');
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_c2) {
  char c[255] = {}, d[255] = {};
  s21_sprintf(c, "%c %c %c", 127, -128, 255);
  sprintf(d, "%c %c %c", 127, -128, 255);
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_s) {
  char c[255] = {}, d[255] = {};
  s21_sprintf(c, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
              "aboba", "hello", "aboba", "hello");
  sprintf(d, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
          "aboba", "hello", "aboba", "hello");
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_s2) {
  char c[255] = {}, d[255] = {};
  s21_sprintf(c, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
              "aboba", "hello", "aboba", "hello");
  sprintf(d, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello", "aboba", "hello",
          "aboba", "hello", "aboba", "hello");
  ck_assert_str_eq(c, d);
}
END_TEST

START_TEST(s21_sprintf_test_n) {
  int count = 0;
  int org_count = 0;
  char str[100];
  char str1[100];
  s21_sprintf(str, "hello %n", &count);
  sprintf(str1, "hello %n", &org_count);
  ck_assert_int_eq(count, org_count);
  ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(s21_sprintf_test_p1) {
  char str1[100];
  char str2[100];

  char *format = "%p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_p2) {
  char str1[100];
  char str2[100];

  char *format = "%15p";
  int a = s21_sprintf(str1, format, format);
  int b = sprintf(str2, format, format);

  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(s21_sprintf_test_p3) {
  char str1[100];
  char str2[100];

  char *format = "%.5p";
  int a = s21_sprintf(str1, format, format);
  int b = sprintf(str2, format, format);

  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_1) {
  char str1[100];
  char str2[100];
  char *format = "%5Le";
  long double val = -764231539.;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(s21_sprintf_test_e_2) {
  char str1[100] = {0};
  char str2[100] = {0};
  double num = -764231539.;
  int a =
      s21_sprintf(str2, "%e\n%.e\n%4e\n%4.e\n%5.10e!", num, num, num, num, num);
  int b = sprintf(str1, "%e\n%.e\n%4e\n%4.e\n%5.10e!", num, num, num, num, num);

  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_3) {
  char str1[100] = {0};
  char str2[100] = {0};
  double num = -764231539.;
  int a =
      s21_sprintf(str2, "%E\n%.E\n%4E\n%4.E\n%5.10E!", num, num, num, num, num);
  int b = sprintf(str1, "%E\n%.E\n%4E\n%4.E\n%5.10E!", num, num, num, num, num);

  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_4) {
  char str1[100] = {0};
  char str2[100] = {0};
  double num = 1234123124;
  int a =
      s21_sprintf(str2, "%E\n%.E\n%4E\n%4.E\n%5.10E!", num, num, num, num, num);
  int b = sprintf(str1, "%E\n%.E\n%4E\n%4.E\n%5.10E!", num, num, num, num, num);

  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_5) {
  char str1[100] = {0};
  char str2[100] = {0};
  double num = -665695342471359.;
  int b = sprintf(str1, "%#e\n%#.e\n%#5.e\n%#.0e\n%#0.0e!", num, num, num, num,
                  num);
  int a = s21_sprintf(str2, "%#e\n%#.e\n%#5.e\n%#.0e\n%#0.0e!", num, num, num,
                      num, num);
  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_6) {
  char str1[300] = {0};
  char str2[300] = {0};
  double num = -5921563224775967.;

  int b = sprintf(str1, "New test: %020e \nSecond test: %020.e!", num, num);
  int a = s21_sprintf(str2, "New test: %020e \nSecond test: %020.e!", num, num);
  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_7) {
  char str1[300] = {0};
  char str2[300] = {0};
  double num = -5921563224775967.;

  int b = sprintf(str1, "Third test: %010e \nForth test: %010.e!", num, num);
  int a =
      s21_sprintf(str2, "Third test: %010e \nForth test: %010.e!", num, num);
  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_8) {
  char str1[300] = {0};
  char str2[300] = {0};
  double num = -5921563224775967.;
  int b = sprintf(str1, "Fifth test: %0.0E!", num);
  int a = s21_sprintf(str2, "Fifth test: %0.0E!", num);
  ck_assert_int_eq(a, b);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_9) {
  char str1[300] = {0};
  char str2[300] = {0};
  double val = -76423.1539;
  int s21_res = s21_sprintf(str1, "%5e Test %5.e Test %.9e Test %10.9e", val,
                            val, val, val);
  int orig_res =
      sprintf(str2, "%5e Test %5.e Test %.9e Test %10.9e", val, val, val, val);
  ck_assert_int_eq(s21_res, orig_res);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_10) {
  char str1[300] = {0};
  char str2[300] = {0};
  double val = 0.007456;
  int s21_res =
      s21_sprintf(str1, "%e Test %15e Test %15.e Test %.5e Test %2.7e", val,
                  val, val, val, val);
  int orig_res = sprintf(str2, "%e Test %15e Test %15.e Test %.5e Test %2.7e",
                         val, val, val, val, val);
  ck_assert_int_eq(s21_res, orig_res);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test_e_11) {
  char str1[300] = {0};
  char str2[300] = {0};
  double val = -0.007456;
  int s21_res =
      s21_sprintf(str1, "%e Test %15e Test %15.e Test %.5e Test %2.7e", val,
                  val, val, val, val);
  int orig_res = sprintf(str2, "%e Test %15e Test %15.e Test %.5e Test %2.7e",
                         val, val, val, val, val);
  ck_assert_int_eq(s21_res, orig_res);
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *make_sprintf_suite(void) {
  Suite *s = suite_create("s21_sprintf");
  TCase *tc_string = tcase_create("strings");
  tcase_add_test(tc_string, s21_test_sprintf);
  tcase_add_test(tc_string, s21_test_sprintf_2);
  tcase_add_test(tc_string, s21_test_sprintf_3);
  tcase_add_test(tc_string, s21_test_sprintf_4);
  tcase_add_test(tc_string, s21_test_sprintf_5);
  tcase_add_test(tc_string, s21_test_sprintf_6);
  tcase_add_test(tc_string, s21_test_sprintf_7);
  tcase_add_test(tc_string, s21_test_sprintf_8);
  tcase_add_test(tc_string, s21_test_sprintf_9);
  tcase_add_test(tc_string, s21_test_sprintf_10);
  tcase_add_test(tc_string, s21_test_sprintf_11);
  tcase_add_test(tc_string, s21_test_sprintf_12);
  tcase_add_test(tc_string, s21_test_sprintf_13);
  tcase_add_test(tc_string, s21_test_sprintf_14);
  tcase_add_test(tc_string, s21_test_sprintf_15);
  tcase_add_test(tc_string, s21_test_sprintf_16);
  tcase_add_test(tc_string, s21_test_sprintf_17);
  tcase_add_test(tc_string, s21_test_sprintf_18);
  tcase_add_test(tc_string, s21_test_sprintf_19);
  tcase_add_test(tc_string, s21_test_sprintf_20);
  tcase_add_test(tc_string, s21_test_sprintf_21);
  tcase_add_test(tc_string, s21_test_sprintf_22);
  tcase_add_test(tc_string, s21_test_sprintf_23);
  tcase_add_test(tc_string, s21_test_sprintf_24);
  tcase_add_test(tc_string, s21_test_sprintf_25);
  tcase_add_test(tc_string, s21_test_sprintf_26);
  tcase_add_test(tc_string, s21_test_sprintf_27);
  tcase_add_test(tc_string, s21_test_sprintf_28);
  tcase_add_test(tc_string, s21_test_sprintf_29);
  tcase_add_test(tc_string, s21_test_sprintf_30);
  tcase_add_test(tc_string, s21_test_sprintf_31);
  tcase_add_test(tc_string, s21_test_sprintf_32);
  tcase_add_test(tc_string, s21_test_sprintf_33);
  tcase_add_test(tc_string, s21_sprintf_test_34);
  tcase_add_test(tc_string, s21_sprintf_test_35);
  tcase_add_test(tc_string, s21_sprintf_test_39);
  tcase_add_test(tc_string, s21_sprintf_test_40);
  tcase_add_test(tc_string, s21_sprintf_test_41);
  tcase_add_test(tc_string, s21_sprintf_test_42);
  tcase_add_test(tc_string, s21_sprintf_test_43);
  tcase_add_test(tc_string, s21_sprintf_test_44);
  tcase_add_test(tc_string, s21_sprintf_test_45);
  tcase_add_test(tc_string, s21_sprintf_test_46);
  tcase_add_test(tc_string, s21_sprintf_test_47);
  tcase_add_test(tc_string, s21_sprintf_test_48);
  tcase_add_test(tc_string, s21_sprintf_test_48a);
  tcase_add_test(tc_string, s21_sprintf_test_49);
  tcase_add_test(tc_string, s21_sprintf_test_50);
  tcase_add_test(tc_string, s21_sprintf_test_51);
  tcase_add_test(tc_string, s21_sprintf_test_52);
  tcase_add_test(tc_string, s21_sprintf_test_53);
  tcase_add_test(tc_string, s21_sprintf_test_54);
  tcase_add_test(tc_string, s21_sprintf_test_55);
  tcase_add_test(tc_string, s21_sprintf_test_56);
  tcase_add_test(tc_string, s21_sprintf_test_57);
  tcase_add_test(tc_string, s21_sprintf_test_58);
  tcase_add_test(tc_string, s21_sprintf_test_59);
  tcase_add_test(tc_string, s21_sprintf_test_60);
  tcase_add_test(tc_string, s21_sprintf_test_61);
  tcase_add_test(tc_string, s21_sprintf_test_62);
  tcase_add_test(tc_string, s21_sprintf_test_63);
  tcase_add_test(tc_string, s21_sprintf_test_64);
  tcase_add_test(tc_string, s21_sprintf_test_65);
  tcase_add_test(tc_string, s21_sprintf_test_66);
  tcase_add_test(tc_string, s21_sprintf_test_67);
  tcase_add_test(tc_string, s21_sprintf_test_68);
  tcase_add_test(tc_string, s21_sprintf_test_69);
  tcase_add_test(tc_string, s21_sprintf_test_70);
  tcase_add_test(tc_string, s21_sprintf_test_71);
  tcase_add_test(tc_string, s21_sprintf_test_72);
  tcase_add_test(tc_string, s21_sprintf_test_73);
  tcase_add_test(tc_string, s21_sprintf_test_74);
  tcase_add_test(tc_string, s21_sprintf_test_75);
  tcase_add_test(tc_string, s21_sprintf_test_76);
  tcase_add_test(tc_string, s21_sprintf_test_77);
  tcase_add_test(tc_string, s21_sprintf_test_78);
  tcase_add_test(tc_string, s21_sprintf_test_79);
  tcase_add_test(tc_string, s21_sprintf_test_80);
  tcase_add_test(tc_string, s21_sprintf_test_81);
  tcase_add_test(tc_string, s21_sprintf_test_82);
  tcase_add_test(tc_string, s21_sprintf_test_83);
  tcase_add_test(tc_string, s21_sprintf_test_84);
  tcase_add_test(tc_string, s21_sprintf_test_85);
  tcase_add_test(tc_string, s21_sprintf_test_86);
  tcase_add_test(tc_string, s21_sprintf_test_87);
  tcase_add_test(tc_string, s21_sprintf_test_88);
  tcase_add_test(tc_string, s21_test_sprintf_89);
  tcase_add_test(tc_string, s21_sprintf_test_x_1);
  tcase_add_test(tc_string, s21_sprintf_test_x_2);
  tcase_add_test(tc_string, s21_sprintf_test_x_3);
  tcase_add_test(tc_string, s21_sprintf_test_x_4);
  tcase_add_test(tc_string, s21_sprintf_test_x_5);
  tcase_add_test(tc_string, s21_sprintf_test_x_6);
  tcase_add_test(tc_string, s21_sprintf_test_x_7);
  tcase_add_test(tc_string, s21_sprintf_test_x_8);
  tcase_add_test(tc_string, s21_sprintf_test_x_9);
  tcase_add_test(tc_string, s21_sprintf_test_x_10);
  tcase_add_test(tc_string, s21_sprintf_test_x_11);
  tcase_add_test(tc_string, s21_sprintf_test_x_12);
  tcase_add_test(tc_string, s21_sprintf_test_x_13);
  tcase_add_test(tc_string, s21_sprintf_test_x_14);
  tcase_add_test(tc_string, s21_sprintf_test_x_15);
  tcase_add_test(tc_string, s21_sprintf_test_x_16);
  tcase_add_test(tc_string, s21_sprintf_test_o_1);
  tcase_add_test(tc_string, s21_sprintf_test_o_2);
  tcase_add_test(tc_string, s21_sprintf_test_o_3);
  tcase_add_test(tc_string, s21_sprintf_test_o_4);
  tcase_add_test(tc_string, s21_sprintf_test_o_5);
  tcase_add_test(tc_string, s21_sprintf_test_o_6);
  tcase_add_test(tc_string, s21_sprintf_test_o_7);
  tcase_add_test(tc_string, s21_sprintf_test_o_8);
  tcase_add_test(tc_string, s21_sprintf_test_o_9);
  tcase_add_test(tc_string, s21_sprintf_test_o_10);
  tcase_add_test(tc_string, s21_sprintf_test_o_11);
  tcase_add_test(tc_string, s21_sprintf_test_o_12);
  tcase_add_test(tc_string, s21_sprintf_test_o_13);
  tcase_add_test(tc_string, s21_sprintf_test_o_14);
  tcase_add_test(tc_string, s21_sprintf_test_g_1);
  tcase_add_test(tc_string, s21_sprintf_test_g_2);
  tcase_add_test(tc_string, s21_sprintf_test_g_3);
  tcase_add_test(tc_string, s21_sprintf_test_g_4);
  tcase_add_test(tc_string, s21_sprintf_test_g_5);
  tcase_add_test(tc_string, s21_sprintf_test_g_6);
  tcase_add_test(tc_string, s21_sprintf_test_g_7);
  tcase_add_test(tc_string, s21_sprintf_test_g_8);
  tcase_add_test(tc_string, s21_sprintf_test_g_9);
  tcase_add_test(tc_string, s21_sprintf_test_percent);
  tcase_add_test(tc_string, s21_sprintf_test_d);
  tcase_add_test(tc_string, s21_sprintf_test_d2);
  tcase_add_test(tc_string, s21_sprintf_test_d3);
  tcase_add_test(tc_string, s21_sprintf_test_c);
  tcase_add_test(tc_string, s21_sprintf_test_c2);
  tcase_add_test(tc_string, s21_sprintf_test_s);
  tcase_add_test(tc_string, s21_sprintf_test_s2);
  tcase_add_test(tc_string, s21_sprintf_test_n);
  tcase_add_test(tc_string, s21_sprintf_test_p1);
  tcase_add_test(tc_string, s21_sprintf_test_p2);
  tcase_add_test(tc_string, s21_sprintf_test_p3);
  tcase_add_test(tc_string, s21_sprintf_test_e_1);
  tcase_add_test(tc_string, s21_sprintf_test_e_2);
  tcase_add_test(tc_string, s21_sprintf_test_e_3);
  tcase_add_test(tc_string, s21_sprintf_test_e_4);
  tcase_add_test(tc_string, s21_sprintf_test_e_5);
  tcase_add_test(tc_string, s21_sprintf_test_e_6);
  tcase_add_test(tc_string, s21_sprintf_test_e_7);
  tcase_add_test(tc_string, s21_sprintf_test_e_8);
  tcase_add_test(tc_string, s21_sprintf_test_e_9);
  tcase_add_test(tc_string, s21_sprintf_test_e_10);
  tcase_add_test(tc_string, s21_sprintf_test_e_11);
  suite_add_tcase(s, tc_string);
  return s;
}