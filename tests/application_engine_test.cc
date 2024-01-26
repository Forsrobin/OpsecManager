#include <gtest/gtest.h>

#include "application_engine.h"

TEST(OpsecManagerTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(OpsecManagerTest, FunctioReturns) {
  EXPECT_EQ(ApplicationEngine::getUsername(), "Hello");
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}