#include <gtest/gtest.h>

#include "util/fix_env.hxx"

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
}
