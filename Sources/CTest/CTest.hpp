#ifndef TEST_CTEST_HPP
#define TEST_CTEST_HPP

#ifdef __cplusplus
    extern "C" {
#endif

    const char * getMessage(const char * message);
    int add(int value_1, int value_2);
    const char * getLambda();

#define callLambda(type, integer) \
{                             \
    return type(integer);      \
}                               \

#ifdef __cplusplus
}
#endif

#endif //TEST_CTEST_HPP
