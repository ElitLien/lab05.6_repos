#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double d;
			d = (1 + (1 + 1 * 1) * (1 + 1 * 1)) / (1 + pow(1, 3));
			Assert::AreEqual(d, 2.5);
		}
	};
}
