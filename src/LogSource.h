#include <cstddef>

class LogSource {
public:
    LogSource();
    virtual ~LogSource();

    std::size_t lineCount() const;
};
