class TestCout : public std::stringstream
{
public:
    ~TestCout()
    {
        std::cout << "\u001b[32m[--MESSAGE-] \u001b[33m" << str() << "\u001b[0m" << std::flush;
    }
};

#define TEST_COUT  TestCout()