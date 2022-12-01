#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1(4)/laba8.1(4).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str{ 102 };
			Count(str);
			Change(str);
		}
	};
}
