#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.6/lab5.6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab56test1
{
	TEST_CLASS(lab56test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
