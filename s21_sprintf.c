#include "s21_string.h"

char *format_buff(char *buffer, opt *opt) {
  if (opt->acur && !opt->zero) {
    int len_a = opt->acur;
    function_acur(buffer, len_a, opt);
  }
  if ((opt->wid || opt->minus) && !opt->zero) {
    int len = opt->wid;
    function_wigth(buffer, len, opt);
  }
  if (opt->zero && !opt->s) {
    int len = atoi(opt->width);
    function_zero(buffer, len, opt);
  }
  return buffer;
}

char *function_acur(char *buffer_arg, int len, opt *opt) {
  char buffer[BUFFER] = {0};
  int j = 0;
  int flag = 1, minus_flag = 0;
  int lens = s21_strlen(buffer_arg);
  if (opt->acur == -1 && !opt->s) len = lens;

  for (int i = 0; i <= lens; i++, j++) {
    if (buffer_arg[j] == '-' && j == 0 && flag != '-') {
      minus_flag = 1;
      j++;
    }
    buffer[i] = buffer_arg[j];
  }
  if ((opt->u || opt->x || opt->X || opt->d) && lens < 9) flag = 0;
  if (opt->e || opt->E) flag = 0;
  if (opt->o || opt->p) flag = 0;
  if (lens > len && flag) {
    int i = 0;
    for (; i < len; i++) {
      buffer_arg[i] = buffer[i];
    }
    buffer_arg[i] = '\0';
  } else {
    j = 0;
    if (minus_flag) len += 1;
    for (int i = 0; i < len + lens; i++) {
      if (i < len - lens && !opt->s && opt->acur != -1) {
        buffer_arg[i] = '0';
      } else {
        buffer_arg[i] = buffer[j];
        j++;
      }
    }
    if (minus_flag) {
      reverse(buffer_arg, s21_strlen(buffer_arg));
      buffer_arg[s21_strlen(buffer_arg)] = '-';
      reverse(buffer_arg, s21_strlen(buffer_arg));
    }
  }
  return buffer_arg;
}

char *function_wigth(char *buffer_arg, int len, opt *opt) {
  int i = 0;
  char buffer[BUFFER] = {0};
  if ((int)s21_strlen(buffer_arg) < len) {
    int lens = s21_strlen(buffer_arg);
    if (opt->minus) {
      if (opt->plus) len -= 1;
      for (i = lens; i < len; i++) {
        buffer_arg[i] = ' ';
      }
    } else {
      for (int j = 0; j < lens; j++) {
        buffer[j] = buffer_arg[j];
      }

      for (int j = 0; j < len; j++) {
        if (j < len - lens) {
          buffer_arg[j] = ' ';
        } else {
          buffer_arg[j] = buffer[i];
          i++;
        }
      }
    }
    buffer_arg[s21_strlen(buffer_arg)] = '\0';
  }

  return buffer_arg;
}

void function_zero(char *buffer_arg, int lenght, opt *opt) {
  char buffer[BUFFER];
  int len = s21_strlen(buffer_arg);
  int i = 0;
  if (opt->c) {
    for (; i < lenght - len; i++) {
      buffer[i] = '0';
    }

    s21_strcat(buffer, buffer_arg);
    s21_strncpy(buffer_arg, buffer, s21_strlen(buffer));
  } else if (opt->d || opt->i || opt->X || opt->x || opt->u || opt->o) {
    int j = 0;
    for (; j < lenght - len; j++) {
      if (j >= lenght - len)
        buffer[j] = '0';
      else
        buffer[j] = ' ';
    }
    s21_strcat(buffer, buffer_arg);
    s21_strncpy(buffer_arg, buffer, s21_strlen(buffer));
  } else if (opt->f || opt->g || opt->G || opt->e || opt->E) {
    int sign = 0;
    for (int i = 0, j = 0; j < len; ++i, j++) {
      if (buffer_arg[i] == '-') {
        sign = 1;
        i++;
      }
      buffer[j] = buffer_arg[i];
    }
    s21_memset(buffer_arg, '\0', s21_strlen(buffer_arg));
    for (int i = 0; i < lenght - len; ++i) {
      buffer_arg[i] = '0';
    }
    s21_strcat(buffer_arg, buffer);
    if (sign) {
      reverse(buffer_arg, s21_strlen(buffer_arg));
      s21_strcat(buffer_arg, "-");
      reverse(buffer_arg, s21_strlen(buffer_arg));
    }
  }
  s21_strcat(buffer_arg, "\0");
}

void reverse(char *str, int len) {
  int i = 0, j = len - 1, temp;
  while (i < j) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

void itoa(long long num, char *buf, int *i, int sign) {
  if (num == 0) buf[(*i)++] = '0';
  while (num) {
    buf[(*i)++] = (num % 10) + '0';
    num /= 10;
  };
  if (sign) buf[(*i)++] = '-';
}

void afterpoint_to_acii(long double num, char *buf, int *i, opt *opt) {
  int temp = 0;
  for (int j = 0; j < opt->pow; ++j) {
    num *= 10;
    temp = num;
    buf[(*i)++] = temp + '0';
    num -= temp;
  }
}

void ftoa(long double num, char *buf, opt *opt) {
  int j = 0, afterpoint = 6;
  char tempBuff_for_i[BUFFER] = {'\0'};
  char tempBuff_for_f[BUFFER] = {'\0'};
  char tempBuff_whole[BUFFER] = {'\0'};
  int sign = 0;
  if (num < 0.0) {
    sign = 1;
    num = fabsl(num);
  }
  num += 0.0000000001;
  long long base = (long long)num;
  long double fpart = (num - base);

  if (opt->pow) {
    afterpoint = pow(10, opt->pow);
    fpart = (fpart * afterpoint) / afterpoint;
  } else if (opt->pow != -1) {
    opt->pow = 6;
    afterpoint = pow(10, opt->pow);
    fpart = (fpart * afterpoint) / afterpoint;
  }
  itoa(base, tempBuff_for_i, &j, sign);
  if (opt->pow != -1 || opt->lattice) tempBuff_for_i[j] = '.';
  reverse(tempBuff_for_i, j);
  j = 0;
  if (opt->pow != -1 && opt->pow != 0) {
    afterpoint_to_acii(fpart, tempBuff_for_f, &j, opt);
  }
  s21_strcat(tempBuff_whole, tempBuff_for_i);
  s21_strcat(tempBuff_whole, tempBuff_for_f);
  opt->farg = atof(tempBuff_whole);
  if ((opt->wid || opt->minus) && !opt->zero && !opt->e && !opt->E) {
    int len = opt->wid;
    function_wigth(tempBuff_whole, len, opt);
  }
  s21_strcat(buf, tempBuff_whole);
  buf[s21_strlen(buf) + 1] = '\0';
}

void uprise_mantis(char *buf, char sing, int degree, opt *opt) {
  char temp[BUFFER] = {'\0'};
  int j = 0;
  temp[j] = opt->e ? 'e' : 'E';
  temp[j + 1] = sing;
  temp[j + 3] = degree % 10 + '0';
  degree /= 10;
  temp[j + 2] = degree % 10 + '0';
  s21_strcat(buf, temp);
}

void terminateZero(char *buf) {
  int len = s21_strlen(buf);
  char *dot = s21_strchr(buf, '.');
  if (dot) {
    for (int i = len - 1; buf[i] != '.'; --i) {
      if (buf[i] == '0') {
        buf[i] = '\0';
      } else
        break;
    }
  }
}

void spec_g_G(char *buf, long double num, opt *opt) {
  int degree = 0;
  long double mem = num;
  while (!((int)mem)) {
    ++degree;
    mem *= 10;
  }
  if (degree > 4) {
    opt->pow = 0;
    ftoa(mem, buf, opt);
    uprise_mantis(buf, '-', degree, opt);
  } else {
    opt->pow = 6;
    ftoa(num, buf, opt);
  }
  terminateZero(buf);
}

void spec_e_E(long double num, char *buf, opt *opt) {
  int count = 0;
  char sign = 0;
  if (num < 0.0)
    count = log10(-num);
  else
    count = log10(num);
  num /= pow(10, count);
  if ((int)num == 0) {
    num *= 10;
    count--;
  }
  sign = (count < 0) ? '-' : '+';
  if (sign == '+') {
    if (opt->dote && (!opt->acur || opt->acur == -1)) {
      num = roundl(num);
    }
  }
  ftoa(num, buf, opt);
  uprise_mantis(buf, sign, abs(count), opt);
  if ((opt->wid || opt->minus) && !opt->zero) {
    int len = opt->wid;
    function_wigth(buf, len, opt);
  }
  if (opt->acur && !opt->zero) {
    int len_a = opt->acur;
    function_acur(buf, len_a, opt);
  }
  if (opt->zero && !opt->s) {
    int len = atoi(opt->width);
    function_zero(buf, len, opt);
  }
}

char *spec_d_i(long int argyment, char *buffer_arg, opt *opt) {
  if (opt->l) {
    argyment = (long int)argyment;
  } else if (opt->h) {
    argyment = (short int)argyment;
  } else {
    argyment = (int)argyment;
  }

  char buffer[256] = {'\0'};
  int i = 0;
  int sign = 0;
  if (argyment != 0) {
    if (argyment < 0) {
      sign = 1;
      argyment = labs(argyment);
    }
    while (argyment > 9) {
      buffer[i++] = (argyment % 10) + '0';
      argyment /= 10;
    }
  }
  buffer[i++] = argyment + '0';
  if (sign) buffer[i++] = '-';
  reverse(buffer, s21_strlen(buffer));
  format_buff(buffer, opt);
  s21_strncpy(buffer_arg, buffer, s21_strlen(buffer));
  return buffer_arg;
}

char *spec_x_X(unsigned long num, char *buffer_arg, opt *opt) {
  if (opt->l) {
    num = (unsigned long)num;
  } else if (opt->h) {
    num = (unsigned short)num;
  } else {
    num = (unsigned int)num;
  }
  char buffer[BUFFER] = {0};
  int i = 0;
  if (num == 0) buffer[i++] = '0';
  while (num > 0) {
    int result = 0;
    result = num % 16;
    num /= 16;
    if (result >= 0 && result <= 9) {
      buffer[i] = result + '0';
    } else {
      if (result == 10) {
        buffer[i] = opt->x ? 'a' : 'A';
      } else if (result == 11) {
        buffer[i] = opt->x ? 'b' : 'B';
      } else if (result == 12) {
        buffer[i] = opt->x ? 'c' : 'C';
      } else if (result == 13) {
        buffer[i] = opt->x ? 'd' : 'D';
      } else if (result == 14) {
        buffer[i] = opt->x ? 'e' : 'E';
      } else if (result == 15) {
        buffer[i] = opt->x ? 'f' : 'F';
      }
    }
    i++;
  }

  buffer[i] = '\0';
  int a = s21_strlen(buffer);

  if (opt->lattice) {
    buffer_arg[0] = '0';
    if (buffer[0] != '\0') {
      buffer_arg[1] = opt->x ? 'x' : 'X';
    }
  }
  reverse(buffer, a);
  format_buff(buffer, opt);
  s21_strcat(buffer_arg, buffer);
  return buffer_arg;
}

char *spec_o(unsigned long num, char *buffer_arg, opt *opt) {
  if (opt->l) {
    num = (unsigned long)num;
  } else if (opt->h) {
    num = (unsigned short)num;
  } else {
    num = (unsigned int)num;
  }
  int i = 0;
  char buffer[BUFFER] = {0};
  while (num > 0) {
    int result = 0;
    result = num % 8;
    num /= 8;
    buffer[i] = result + '0';
    i++;
  }
  buffer[i] = '\0';
  int a = s21_strlen(buffer);
  if (i == 0 || opt->lattice) {
    buffer_arg[0] = '0';
  }
  reverse(buffer, a);
  format_buff(buffer, opt);
  s21_strcat(buffer_arg, buffer);
  return buffer_arg;
}

char *spec_u(unsigned long num, char *buffer_arg, opt *opt) {
  if (opt->l) {
    num = (unsigned long)num;
  } else if (opt->h) {
    num = (unsigned short)num;
  } else {
    num = (unsigned int)num;
  }
  int i = 0;
  char buffer[BUFFER] = {0};
  if (num == 0) buffer[i++] = '0';
  while (num > 0) {
    int result = 0;
    result = num % 10;
    num /= 10;
    buffer[i] = result + '0';
    i++;
  }
  buffer[i] = '\0';
  reverse(buffer, i);
  format_buff(buffer, opt);
  s21_strcat(buffer_arg, buffer);
  return buffer_arg;
}

void *spec_p(unsigned long int num, char *buffer_arg, opt *opt) {
  char buffer[BUFFER] = {0};
  char buffer_temp[BUFFER] = {0};
  int i = 0;
  if (num == 0) {
    opt->acur = 1;
    for (; i < opt->acur; i++) buffer[i] = '0';
  } else {
    while (num > 0) {
      int result = 0;
      result = num % 16;
      num /= 16;
      if (result >= 0 && result <= 9) {
        buffer[i] = result + '0';
      } else {
        buffer[i] = 'a' + result - 10;
      }
      i++;
    }
  }
  buffer[i] = '\0';
  buffer_temp[0] = '0';
  buffer_temp[1] = 'x';
  int a = s21_strlen(buffer);
  reverse(buffer, a);
  s21_strcat(buffer_temp, buffer);
  format_buff(buffer_temp, opt);
  s21_strcat(buffer_arg, buffer_temp);
  return (void *)buffer_arg;
}

void *spec_s(char *num, char *buffer_arg, opt *opt) {
  char buffer[BUFFER] = {0};
  s21_strncpy(buffer, num, s21_strlen(num));
  format_buff(buffer, opt);
  s21_strcat(buffer_arg, buffer);
  *(buffer_arg + s21_strlen(buffer_arg)) = '\0';
  return (void *)buffer_arg;
}

char *functions_realize(va_list *arg, opt *opt, char *buffer_arg, int result) {
  opt->acur = atoi(opt->accuracy);
  opt->wid = atoi(opt->width);
  if (opt->u) {
    unsigned long int argyment = va_arg(*arg, unsigned long int);
    spec_u(argyment, buffer_arg, opt);
  } else if (opt->o) {
    unsigned long int argyment = va_arg(*arg, unsigned long int);
    spec_o(argyment, buffer_arg, opt);
  } else if (opt->x || opt->X) {
    unsigned long int argyment = va_arg(*arg, unsigned long int);
    spec_x_X(argyment, buffer_arg, opt);
  } else if (opt->p) {
    unsigned long int argyment = va_arg(*arg, unsigned long int);
    spec_p(argyment, buffer_arg, opt);
  } else if (opt->n) {
    int *argument = s21_NULL;
    argument = va_arg(*arg, int *);
    *argument = result;
  } else if (opt->d || opt->i) {
    long int argyment = va_arg(*arg, long int);
    spec_d_i(argyment, buffer_arg, opt);
  } else if (opt->c) {
    char argument = va_arg(*arg, int);
    *buffer_arg = argument;
    format_buff(buffer_arg, opt);
  } else if (opt->g || opt->G) {
    if (opt->L) {
      long double argument = va_arg(*arg, long double);
      spec_g_G(buffer_arg, argument, opt);
    } else {
      double argument = va_arg(*arg, double);
      spec_g_G(buffer_arg, argument, opt);
    }
  } else if (opt->f) {
    if (opt->L) {
      long double argument = va_arg(*arg, long double);
      ftoa(argument, buffer_arg, opt);
    } else {
      double argument = va_arg(*arg, double);
      ftoa(argument, buffer_arg, opt);
    }
  } else if (opt->e || opt->E) {
    if (opt->L) {
      long double argument = va_arg(*arg, long double);
      spec_e_E(argument, buffer_arg, opt);
    } else {
      double argument = va_arg(*arg, double);
      spec_e_E(argument, buffer_arg, opt);
    }
  } else if (opt->s) {
    char *argument = va_arg(*arg, char *);
    spec_s(argument, buffer_arg, opt);
  }
  return buffer_arg;
}

char *lenght_and_weight(char *str, opt *opt) {
  int i = 0, j = 0;
  char *minusone = "-1";
  while (s21_strchr("cdieEfgGosuxXpnhlL", *str) == NULL) {
    if (*str == '.') {
      opt->dote = 1;
      str++;
      if (s21_strchr("cdieEfgGosuxXpnhlL", *str) != NULL) {
        s21_strcat(opt->accuracy, minusone);
        break;
      }
      while (s21_strchr("cdieEfgGosuxXpnhlL", *str) == NULL) {
        opt->accuracy[i] = *str;
        i++;
        str++;
      }
    }
    if (*str != '.') {
      while (*str != '.' && *str >= '0' && *str <= '9') {
        opt->width[j] = *str;
        j++;
        str++;
      }
    }
  }
  return str;
}

void extract_spec(const char *format, opt *opt) {
  switch (*format) {
    case 'd':
      opt->d = 1;
      break;
    case 'i':
      opt->i = 1;
      break;
    case 'f':
      opt->f = 1;
      break;
    case 'c':
      opt->c = 1;
      break;
    case 's':
      opt->s = 1;
      break;
    case 'u':
      opt->u = 1;
      break;
    case 'g':
      opt->g = 1;
      break;
    case 'G':
      opt->G = 1;
      break;
    case 'e':
      opt->e = 1;
      break;
    case 'E':
      opt->E = 1;
      break;
    case 'x':
      opt->x = 1;
      break;
    case 'X':
      opt->X = 1;
      break;
    case 'o':
      opt->o = 1;
      break;
    case 'n':
      opt->n = 1;
      break;
    case 'p':
      opt->p = 1;
      break;
  }
}

void extract_len(char *format, opt *opt) {
  switch (*format) {
    case 'h':
      opt->h = 1;
      break;
    case 'l':
      opt->l = 1;
      break;
    case 'L':
      opt->L = 1;
      break;
  }
}

void extract_flags(const char *format, opt *opt) {
  switch (*format) {
    case '-':
      opt->minus = 1;
      break;
    case '+':
      opt->plus = 1;
      break;
    case ' ':
      opt->space = 1;
      break;
    case '#':
      opt->lattice = 1;
      break;
    case '0':
      opt->zero = 1;
      break;
  }
  opt->space = (opt->space && !opt->plus);
  opt->zero = (opt->zero && !opt->minus);
}

char *parser_cheker(char *str, opt *opt) {
  int joke = 1;
  while (joke) {
    if (*str == '-' || *str == ' ' || *str == '+' || *str == '#' || *str == '0')
      extract_flags(str, opt);
    if ((*str >= '0' && *str <= '9') || *str == '.') {
      str = lenght_and_weight(str, opt);
    }
    if (s21_strchr("hlL", *str) != NULL) extract_len(str, opt);
    if (s21_strchr("cdieEfgGosuxXpn", *str) != NULL) {
      extract_spec(str, opt);
      joke = 0;
    }
    str++;
  }
  if (*opt->accuracy == '0')
    opt->pow = -1;
  else if (*opt->accuracy == '*')
    opt->pow = -1;
  else
    opt->pow = atoi(opt->accuracy);
  return str;
}

int s21_sprintf(char *buffer, char *str, ...) {
  char *temp = str;
  va_list arg;
  va_start(arg, str);
  int i = 0;
  int len = 0;
  int result = 0;

  while (*str) {
    char buffer_arg[4056] = {'\0'};
    opt opt = {0};
    if (*str == '%') {
      str++;
      if (*str == '%') {
        buffer[i] = '%';
        i++;
        str++;
      } else {
        str = parser_cheker(str, &opt);
        result = str - temp - 2;
        functions_realize(&arg, &opt, buffer_arg, result);
        len = s21_strlen(buffer_arg);
        for (int j = 0; j < len; j++) {
          if (opt.plus && j == 0 && !opt.c && !opt.s) {
            if (buffer_arg[j] != '-') {
              buffer[i++] = '+';
            }
          }
          if (opt.space && j == 0 && !opt.s) buffer[i++] = ' ';
          buffer[i] = buffer_arg[j];
          i++;
        }
      }

    } else {
      buffer[i++] = *str;
      str++;
    }
  }
  va_end(arg);
  buffer[i] = '\0';
  int final_len = s21_strlen(buffer);
  return final_len;
}