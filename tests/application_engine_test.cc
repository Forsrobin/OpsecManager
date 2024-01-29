#include <gtest/gtest.h>

#include "application_engine.h"

TEST(OpsecManagerTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);

  // Expect inequality.
  EXPECT_NE(7 * 6, 43);
  // Expect less than.
  EXPECT_LT(7 * 6, 50);
  // Expect less than or equal.
  EXPECT_LE(7 * 6, 42);
  EXPECT_LE(7 * 6, 43);
  // Expect greater than.
  EXPECT_GT(7 * 6, 10);
  // RAndom comment
  // Expect greater than or equal.
  EXPECT_GE(7 * 6, 42);
}

TEST(OpsecManagerTest, FunctioReturns) {
  EXPECT_EQ(ApplicationEngine::getUsername(), "Hello");
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "TESTING IN PROGRESS" << std::endl;
  return RUN_ALL_TESTS();
}