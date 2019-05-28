#ifndef LOAD_TEST_H
#define LOAD_TEST_H

#include <gtest/gtest.h>
#include "functions.h"
#include "shared.h"


TEST(loadTest1, morethan10) {
    QString inputPath = "C:/Users/NXD/Desktop/8nMfFwt/TestingLabs-project-master/TestingLabs-project-master/tests/input/loadInput1.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("C:/Users/NXD/Desktop/8nMfFwt/TestingLabs-project-master/TestingLabs-project-master/tests/expected/loadExpected1.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(loadTest2, lessthan10) {
    QString inputPath = "D:/TestingLabs-project-master/TestingLabs-project-master/tests/input/loadInput3.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("D:/TestingLabs-project-master/TestingLabs-project-master/tests/expected/loadExpected3.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(loadTest3, none) {
    QString inputPath = "D:/TestingLabs-project-master/TestingLabs-project-master/tests/input/loadInput2.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("D:/TestingLabs-project-master/TestingLabs-project-master/tests/expected/loadExpected2.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

#endif // LOAD_TEST_H
