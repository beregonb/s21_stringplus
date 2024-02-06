TARGETS=*.c
CFLAGS=-std=c11 -Wall -Werror -Wextra 
TESTS=tests/*.c
FLAG_TEST=-lcheck
SRCS=$(wildcard s21_*.c)
OBJS=$(SRCS:.c=.o)
VALGRIND = --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose
ifeq ($(shell uname), Linux)
	FLAG_TEST +=-lsubunit -lm
endif

all: clean s21_string.a


s21_string.a:$(OBJS)
	ar -rc s21_string.a $^
	ranlib s21_string.a
	rm -rf *.o

clean:
	-rm -rf *.o *.gcno *.gcda *.info  test s21_string.a gcov_report report greport a.out *.txt *.dSYM
	
test: clean s21_string.a
	gcc --coverage $(CFLAGS) $(TESTS) s21_string.a $(FLAG_TEST) -o test -g
	./test

gcov_report:
	gcc --coverage $(TARGETS) $(TESTS) $(FLAG_TEST) -o greport
	./greport
	lcov -t "test" -o s21_string.info -c -d .
	genhtml -o ./report s21_string.info
	open ./report/index.html

style:
	clang-format -n --style=google *.c *.h tests/*.c
