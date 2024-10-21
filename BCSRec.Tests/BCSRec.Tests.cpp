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

			Assert::AreEqual( expected, getArea(&length, &width) );
		}
	};

	
}
