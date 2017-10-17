#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "fib.h"

using testing::Eq;

namespace {
    class ClassFibTest : public testing::Test {
    public:
        ClassFibTest() {
        }
        static std::vector<int> CalcFib(int n)
        {
            return fib(n);
        }
    };
}

TEST_F(ClassFibTest, Test1){
    std::vector<int> result = {
            0, 1, 1, 2, 3, 5
    };
    ASSERT_EQ(result,ClassFibTest::CalcFib(5));
}

TEST_F(ClassFibTest, Test2){
    std::vector<int> result = {
            0, 1, 1
    };
    ASSERT_EQ(result,ClassFibTest::CalcFib(1));
}

