#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2/Lab_06_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest_Lab06_2)
    {
    public:
        TEST_METHOD(TestMethod_MaxMinAndSwap)
        {
            // Test array
            // Indices:   0   1    2   3   4
            int testArray[] = { 10, -5, 45, 3, 0 };
            int size = 5;

            // Min value = -5 at index 1
            // Max value = 45 at index 2
            int expectedMinIdx = 1;
            int expectedMaxIdx = 2;

            Assert::AreEqual(expectedMaxIdx, MaxIndex(testArray, size));
            Assert::AreEqual(expectedMinIdx, MinIndex(testArray, size));

            // Swap max and min
            Swap(testArray, expectedMaxIdx, expectedMinIdx);

            // After swap: index 1 should be 45, index 2 should be -5
            Assert::AreEqual(45, testArray[1]);
            Assert::AreEqual(-5, testArray[2]);
        }
    };
}