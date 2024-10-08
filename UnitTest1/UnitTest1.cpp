#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = S0(1, 5);
			Assert::AreEqual(result, 13.273068001, 0.0001);
		}
	};
}
