#include "add.h"
#include "gtest/gtest.h"

TEST(AddTest, PositiveOnly){
  EXPECT_EQ(3,  add(1,2));
  EXPECT_EQ(10, add(4,6));
  EXPECT_EQ(11,  add(3,8));
}

TEST(AddTest, Hoge){
  EXPECT_EQ(5, add(6,-1));
}


