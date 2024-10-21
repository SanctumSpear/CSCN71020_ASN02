#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(getPerimeterTests) {
	public:
		TEST_METHOD(getPerimiter_ValidInputs_CorrectPerimiter) {
			int length = 10;
			int width = 40;
			int expected = 60;
			// getPerimeter returns the value so we just want to compare it directly
			Assert::AreEqual( expected, getPerimeter(&length, &width) );
		}
	};

	TEST_CLASS(getAreaTests) {
	public:
		TEST_METHOD(getArea_ValidInputs_CorrectArea)
		{
			int length = 47;
			int width = 32;
			int expected = 1504;
			// getArea returns the value so we just want to compare it directly
			Assert::AreEqual( expected, getArea(&length, &width) );
		}
	};

	TEST_CLASS(setLengthTests)
	{
	public:

		TEST_METHOD(setLength_ValidInput_CorrectValue)
		{
			int input = 47;
			int length = 0;
			int expected = 47;
			// setLength changes the length value directly
			setLength(input, &length);
			// compare the changed value
			Assert::AreEqual(expected, length);
		}

		TEST_METHOD(setLength_NegativeInput_ZeroLength) {
			int input = -13;
			int length = 0;
			int expected = 0;

			setLength(input, &length);

			Assert::AreEqual(expected, length);
		}

		TEST_METHOD(setLength_LargeInput_ZeroLength) {
			int input = 43456;
			int length = 0;
			int expected = 0;

			setLength(input, &length);

			Assert::AreEqual(expected, length);
		}
	};

	TEST_CLASS(setWidthTests) {
	public:

		TEST_METHOD(setWidth_ValidInput_CorrectWidth) {
			int input = 47;
			int width = 0;
			int expected = 47;
			// setWidth changes the length value directly
			setWidth(input, &width);
			// compare the changed value
			Assert::AreEqual(expected, width);
		}

		TEST_METHOD(setWidth_NegativeInput_ZeroWidth) {
			int input = -47;
			int width = 0;
			int expected = 0;

			setWidth(input, &width);

			Assert::AreEqual(expected, width);
		}

		TEST_METHOD(setWidth_LargeInput_ZeroWidth) {
			int input = 443;
			int width = 0;
			int expected = 0;

			setWidth(input, &width);

			Assert::AreEqual(expected, width);
		}
	};

}
