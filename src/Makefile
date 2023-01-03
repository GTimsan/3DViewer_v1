CC=gcc
FLAGS=-std=c11 -Wall -Werror -Wextra -g
LIBS_MACOS= -L /usr/local/lib -lcheck
LIBS_LINUX= -lcheck -lm -lpthread -lrt -lsubunit -D_GNU_SOURCE
 
OS = $(shell uname)
ifeq ($(OS), Darwin)
APP = 3dShlyap.app
APPF = 3dViewer.app
OPEN=open
LIBS=$(LIBS_MACOS)
# LEAK_CHECK = leaks --atExit -- ./test
endif
 
ifeq ($(OS), Linux)
OPEN=xdg-open
LIBS=$(LIBS_LINUX)
APP = 3dShlyap
APPF = 3dViewer
# cppcheck --enable=all --suppress=missingIncludeSystem src/soursefile_name.c
# LEAK_CHECK = valgrind --leak-check=full --show-leak-kinds=all -s ./a.out
# clang-format -n src/parser.h

endif

all: install

build:
	mkdir build
	cp 3dShlyap.pro main.cpp widget.cpp widget.h widget.ui build
	cp parser.c parser.h build
	cp -r QtGifImage-master build
	cd build; qmake 3dShlyap.pro
	make -C build
	cd build; rm -rf *.c *.h *.cpp *.ui 

install: build
	@mkdir 3dViewer
	@cp -rf build/$(APP) 3dViewer/
	mv 3dViewer/$(APP) 3dViewer/$(APPF)
	make clean

uninstall:
	@rm -rf 3dViewer/

dist: 
	rm -rf archive_3dViewer/
	mkdir archive_3dViewer/
	mkdir archive_3dViewer/src
	cp -r Makefile objects QtGifImage-master *.c *.h *.pro *.cpp Doxyfile *.ui *.user archive_3dViewer/src/
	tar cvzf archive_3dViewer.tgz archive_3dViewer/
	rm -rf archive_3dViewer/

dvi:
	doxygen

parser.o_with_gcov: parser.c
	@$(CC) $(FLAGS) -c parser.c --coverage

tests: clean parser.o_with_gcov
	@$(CC) tests.c parser.o -o s21_test $(LIBS) --coverage
	@./s21_test
	@rm -f s21_test.gcda s21_test.gcno s21_test.c

test_val: clean parser.o_with_gcov
	$(CC) tests.c parser.o -o s21_test $(LIBS) --coverage
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./s21_test
	rm -f s21_test.gcda s21_test.gcno s21_test.c


gcov_report: tests
	gcovr --html --html-details -o report.html
	$(OPEN) report.html

lcov: tests
	lcov -t “test” -o lcov_test.info -c -d .
	genhtml -o report lcov_test.info
	$(OPEN) ./report/index.html

clean:
	@rm -f *.out *.gcda *.gcno *.o *.a report.* s21_test test_with_gcov* *.gcov s21_test.c *.info
	@rm -rf ./lcov_report report/ log.txt ./build generated-docs/ *tgz
