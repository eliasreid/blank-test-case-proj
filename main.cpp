#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "test_namespace.h"

TEST_CASE("case") {
  CHECK(test::func() == 1);
}
