include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS += ../app/functions.h \
    checkcollision_test.h \
    save_test.h \
    load_test.h \
    sort_test.h \
    shared.h

SOURCES +=     main.cpp \
    ../app/checkcollision.cpp \
    ../app/save.cpp \
    ../app/load.cpp \
    ../app/sort.cpp


INCLUDEPATH += ../app

DISTFILES += \
    input/saveInput1.txt \
    expected/saveExpected1.txt \
    input/saveInput2.txt \
    input/saveInput3.txt \
    input/saveInput4.txt \
    expected/saveExpected2.txt \
    expected/saveExpected3.txt \
    expected/saveExpected4.txt
