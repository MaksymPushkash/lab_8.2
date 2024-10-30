#include "pch.h" // ��� �������, ��������� � Visual Studio, pch.h ���� ���� ���������� ��������� ������
#include "CppUnitTest.h"
#include "../lab_08.2/lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StringProcessingTests
{
    TEST_CLASS(StringProcessingTests)
    {
    public:

        TEST_METHOD(Test_FirstWordStartingWithA_Found)
        {
            string input = "hello apple banana";
            string expected = "apple";
            Assert::AreEqual(expected, FindFirstWordStartingWithA(input));
        }

        TEST_METHOD(Test_NoWordStartingWithA)
        {
            string input = "hello world banana";
            string expected = "";
            Assert::AreEqual(expected, FindFirstWordStartingWithA(input));
        }

        TEST_METHOD(Test_FirstWordIsStartingWithA)
        {
            string input = "apple banana cherry";
            string expected = "apple";
            Assert::AreEqual(expected, FindFirstWordStartingWithA(input));
        }

        TEST_METHOD(Test_MultipleSpaces)
        {
            string input = "  banana   apple cherry  ";
            string expected = "apple";
            Assert::AreEqual(expected, FindFirstWordStartingWithA(input));
        }

        
    };
}
