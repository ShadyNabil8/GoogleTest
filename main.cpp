#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mymath.h"
#include "Programmer.h"
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
// /******* This is treated as one test case *******/
// TEST(ADD, MYTEST0)
// {
//     EXPECT_EQ(5, add(2, 3));
// }
// /************************************************/
// TEST(ADD, MYTEST1)
// {
//     EXPECT_EQ(4, add(2, 2));
// }
// TEST(ADD, MYTEST2)
// {
//     EXPECT_EQ(6, add(3, 3));
// }
// TEST(ADD, MYTEST3)
// {
//     EXPECT_EQ(8, add(2, 6));
// }
// TEST(ADD, MYTEST4)
// {
//     // The differwncw between ASSERT and EXPECT is that ->
//     // ASSERT breaks the TEST if there is an error
//     ASSERT_TRUE(istrue());
//     std::cout << "After ASSERT!!" << std::endl;
// }
// TEST(ADD, MYTEST5)
// {
//     EXPECT_THROW(ThrowError(), std::runtime_error);
// }
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

// It is not a good idea to make a global variable to make the tests through it,
// so we use TEST_F to make it more efficiently and reliable.
// TEST_F take the class that must inhearate from testing::Test.
// This class (Prpgrammer in this case) must overrite the two functions SetUp() and TearDown().
// SetUp() sets the default values each time we make test.
TEST_F(Programmer, Test_1)
{
    EXPECT_TRUE(s1.DisplayResult());
}
TEST_F(Programmer, Test_2)
{
    s1.score = 20;
    EXPECT_FALSE(s1.DisplayResult());
}
int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
