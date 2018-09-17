#include <gtest/gtest.h>

TEST(Assertion, True) {
  ASSERT_TRUE(true);
}

TEST(Assertion, False) {
  ASSERT_FALSE(false);
}
