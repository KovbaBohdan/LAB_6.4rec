#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.4.rec/lab_6.4rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB64rec
{
	TEST_CLASS(UnitTest1LAB64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double b[] = { -1, 2, -3, 4, 5 };
			int result = Max(b, 5, 0, b[0]);
			Assert::AreEqual(5, result);
		}
	};
}
