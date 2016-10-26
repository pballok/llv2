#include <gtest/gtest.h>

TEST (LogSource, DefaultConstruction) {
    LogSource ls;

    EXPECT_EQ (0, ls.numberOfTotalLines());
}
