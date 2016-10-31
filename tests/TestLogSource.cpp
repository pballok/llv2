#include <gtest/gtest.h>

#include "LogSource.h"

TEST (LogSource, DefaultConstruction) {
    LogSource ls;

    EXPECT_EQ (0, ls.lineCount());
}
