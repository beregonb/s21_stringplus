#include "s21_string.h"

/**
 * @brief Выполняет поиск первого вхождения символа c (беззнаковый тип) в первых
 * n байтах строки, на которую указывает аргумент str.
 *
 * @param str - указатель на массив, в котором будет осуществляться поиск
 * @param c -  код искомого символа
 * @param n - размер сравниваемой части массива в байтах
 * @return результат - указатель на совпадающий первый байт или NULL, если
 * символ не найден в данной области памяти
 */
void *s21_memchr(const void *str, int c, s21_size_t n) {
  void *res = NULL;
  unsigned char *s = (unsigned char *)str;
  unsigned char uc = c;
  for (s21_size_t i = 0; i < n; ++i) {
    if (s[i] == uc) {
      res = (void *)(s + i);
      break;
    }
  }
  return res;
}

/**
 * @brief Сравнивает первые n байтов str1 и str2.
 *
 * @param str1 - указатель на 1-й сравниваемый массив
 * @param str2 - указатель на 2-й сравниваемый массив
 * @param n - размер сравниваемой части массива в байтах
 * @return результат сравнения :  0 - если сравниваемые части массивов
 * идентичны, иначе разница между первыми несовпадающими символами
 */
int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int res = 0;
  unsigned char *s1 = (unsigned char *)str1;
  unsigned char *s2 = (unsigned char *)str2;
  for (s21_size_t i = 0; i < n; ++i) {
    if (s1[i] != s2[i]) {
      res = s1[i] - s2[i];
      break;
    }
  }
  return res;
}

/**
 * @brief Копирует n символов из src в dest.
 *
 * @param dest - указатель на массив в который будут скопированы данные
 * @param src - указатель на массив источник копируемых данных
 * @param n - количество байт для копирования
 * @return результат - указатель на массив, в который скопированы данные
 */
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  if (src != s21_NULL && dest != s21_NULL) {
    unsigned char *s1 = (unsigned char *)dest;
    unsigned char *s2 = (unsigned char *)src;
    for (s21_size_t i = 0; i < n; ++i) {
      s1[i] = s2[i];
    }
  }
  return dest;
}

/**
 * @brief Копирует символ c (беззнаковый тип) в первые n символов строки, на
 * которую указывает аргумент str
 *
 * @param str - указатель на заполняемый массив
 * @param c - код символа для заполнения
 * @param n - размер заполняемой части массива в байтах
 * @return результат - указатель на область памяти str
 */
void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *s = (unsigned char *)str;
  unsigned char uc = c;
  for (s21_size_t i = 0; i < n; ++i) {
    s[i] = uc;
  }
  return str;
}

char *s21_strchr(const char *str, int c) {
  char *res = s21_NULL;
  s21_size_t len = s21_strlen(str);
  for (s21_size_t i = 0; i < len + 1; ++i) {
    if (str[i] == c) {
      res = (char *)&str[i];
      break;
    }
  }
  return res;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t flag = 1;
  s21_size_t res = 0;
  for (s21_size_t i = 0; i < s21_strlen(str1) + 1 && flag; ++i) {
    res = i;
    for (s21_size_t j = 0; j < s21_strlen(str2) + 1 && flag; ++j) {
      if (str1[i] == str2[j]) flag = 0;
    }
  }
  return res;
}

char *s21_strerror(int errnum) {
  const char *error[] = ERROR_MASSAGE;
  static char error_massage[255];
  if (errnum < MAX_ERROR && errnum >= 0) {
    s21_sprintf(error_massage, "%s", error[errnum]);
  } else {
    s21_sprintf(error_massage, "%s: %d", UERR, errnum);
  }
  return error_massage;
}

s21_size_t s21_strlen(const char *str) {
  s21_size_t count = 0;
  if (str) {
    for (int i = 0; str[i]; i++) {
      count++;
    }
  }

  return count;
}

/**
 * @brief Добавляет строку, на которую указывает src, в конец строки, на которую
 * указывает dest, длиной до n символов
 *
 * @param dest - указатель на массив в который будет добавлена строка
 * @param src – указатель на массив из которого будет скопирована строка
 * @param n – максимальная длина добавляемой строки
 * @return результат - указатель на массив, в который добавлена строка (dest)
 */

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  unsigned char *s1 = (unsigned char *)dest;
  unsigned char *s2 = (unsigned char *)src;
  s21_size_t len_s1 = s21_strlen(dest);
  s21_size_t len_s2 = s21_strlen(src);
  if (n > len_s2) {
    n = len_s2;
  }
  s21_memcpy(s1 + len_s1, s2, n);
  s1[len_s1 + n] = '\0';
  return dest;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int res = 0;
  s21_size_t len_1 = s21_strlen(str1);
  s21_size_t len_2 = s21_strlen(str2);
  if (len_1 == len_2 && n > len_1) n = len_1;
  for (s21_size_t i = 0; i < n; ++i) {
    res = str1[i] - str2[i];
    if (res != 0) break;
  }
  return res;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  if (dest != s21_NULL && src != s21_NULL) {
    char *str_for_dest = (char *)dest;
    char *str_for_src = (char *)src;
    s21_size_t len = s21_strlen(str_for_src);
    for (s21_size_t i = 0, j = 0; i < n; ++i) {
      str_for_dest[i] = str_for_src[j];
      if (j < len) ++j;
    }
  }
  return dest;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  s21_size_t count_1 = s21_strlen(str1);
  s21_size_t count_2 = s21_strlen(str2);
  char *n = s21_NULL;
  int flag = 1;
  for (s21_size_t i = 0; i < count_1 && flag; ++i) {
    for (s21_size_t j = 0; j < count_2 && flag; ++j) {
      if (str1[i] == str2[j]) {
        n = (char *)&str1[i];
        flag = 0;
      }
    }
  }
  return n;
}

char *s21_strrchr(const char *str, int c) {
  char k = c;
  char *res = s21_NULL;
  for (; *str != '\0'; str++) {
    if (*str == k) {
      res = (char *)str;
    }
  }
  if (res == s21_NULL) {
    res = (char *)str;
  }
  return *res == c ? (char *)res : s21_NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
  s21_size_t count_1 = s21_strlen(haystack);
  s21_size_t count_2 = s21_strlen(needle);
  char *n = s21_NULL;
  if (count_2 <= count_1) {
    for (s21_size_t i = 0; i <= count_1; ++i) {
      int sd = 1;
      for (s21_size_t j = 0, c = i; needle[j]; ++j, ++c) {
        if (haystack[c] != needle[j]) {
          sd = 0;
          break;
        }
      }
      if (sd) {
        n = (char *)haystack + i;
        break;
      }
    }
  }
  return n;
}

char *s21_strtok(char *str, const char *delim) {
  static char *s = s21_NULL;
  char *ret = s21_NULL;
  if (str != s21_NULL) {
    s = str;
  }
  if (s != s21_NULL && s21_strlen(s)) {
    const s21_size_t dlen = s21_strlen(delim);
    while (*s && s21_memchr(delim, *s, dlen) != s21_NULL) {
      ++s;
    }
    if (*s) {
      ret = s;
      while (*s) {
        if (s21_memchr(delim, *s, dlen) != s21_NULL) {
          break;
        } else {
          ++s;
        }
      }
      if (*s) {
        s[0] = 0;
        ++s;
      }
    }
  }
  return ret;
}

/**
 * @brief Фукнция перевода в нижний регистр
 *
 * @param str Указатель на строку
 * @return void* Возвращает копию строки (str), преобразованной в нижний регистр
 */
void *s21_to_lower(const char *str) {
  char *str_copy = (char *)s21_NULL;
  int n = s21_strlen(str);
  if (str) {
    str_copy = (char *)malloc(sizeof(char) * n);
    if (str_copy) {
      s21_strncpy(str_copy, str, n);
      for (int i = 0; i < n; i++) {
        if (str_copy[i] >= 65 && str_copy[i] <= 90) {
          str_copy[i] = str_copy[i] + 32;
        }
      }
      str_copy[n] = '\0';
    }
  }
  return (void *)str_copy;
}

/**
 * @brief Функция перевода в верхний регистр
 *
 * @param str Указатель на строку
 * @return void* Возвращает копию строки (str), преобразованной в верхний
 * регистр
 */
void *s21_to_upper(const char *str) {
  char *str_copy = s21_NULL;
  int n = s21_strlen(str);
  if (str) {
    str_copy = (char *)malloc(sizeof(char) * n);
    if (str_copy) {
      s21_strncpy(str_copy, str, n);
      for (int i = 0; i < n; i++) {
        if (str_copy[i] >= 97 && str_copy[i] <= 122) {
          str_copy[i] = str_copy[i] - 32;
        }
      }
      str_copy[n] = '\0';
    }
  }
  return (void *)str_copy;
}

/**
 * @brief Функция удаления " \t\n\v\r\f\0" из строки src
 *
 * @param src Указатель на строку
 * @param trim_chars Указатель на набор заданных символов для удаления
 * @return void* Возвращает новую строку, в которой удаляются все начальные и
 * конечные вхождения набора заданных символов (trim_chars) из данной строки
 * (src)
 */
void *s21_trim(const char *src, const char *trim_chars) {
  char *str_trim = (char *)s21_NULL;
  int n = s21_strlen(src);
  int g = s21_strlen(trim_chars);
  if (src) {
    str_trim = (char *)calloc(n, sizeof(char));
    if (str_trim != s21_NULL) {
      char *ptr_trim = str_trim;
      for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < g; j++) {
          if (src[i] == trim_chars[j]) {
            flag = 1;
          }
        }
        if (!flag) {
          *ptr_trim = src[i];
          ptr_trim++;
        }
      }
    }
  }
  return (void *)str_trim;
}

/**
 * @brief Функция вставки в строку src на указаную позицию start_index строки
 * str
 *
 * @param src Указатель на строку
 * @param str Указатель на строку для вставки
 * @param start_index индекс элемента для вставки
 * @return void* озвращает новую строку, в которой указанная строка (str)
 * вставлена в указанную позицию (start_index) в данной строке (src)
 */
void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  s21_size_t a, b;
  a = s21_strlen(src);
  b = s21_strlen(str);
  char *str_copy = (char *)malloc(sizeof(char) * (a + b + 1));
  if (a == 0) {
    start_index = 0;
  }
  for (s21_size_t i = 0, k = 0; i < (a + b); i++, k++) {
    if (i == start_index) {
      for (s21_size_t j = 0; j < b; j++) {
        str_copy[i] = str[j];
        i++;
      }
    }
    str_copy[i] = src[k];
  }
  str_copy[a + b] = '\0';
  return (void *)str_copy;
}

void *s21_strcat(char *dest, const char *src) {
  char *temp_str = (char *)src;
  while (*dest != '\0') {
    dest++;
  }
  while (*temp_str) {
    *dest = *temp_str;
    dest++;
    temp_str++;
  }
  *dest = '\0';
  return dest;
}