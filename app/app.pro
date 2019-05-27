TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt

SOURCES += main.cpp \
    checkcollision.cpp \
    save.cpp \
    load.cpp \
    sort.cpp


HEADERS += \
    functions.h

QMAKE_CFLAGS += -Wall -Wextra -Werror -std=c++11

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
