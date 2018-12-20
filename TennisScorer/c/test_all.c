#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "tennis1.c"

static void test_LoveAll_0_0()
{
    char retStr[32];
    tennis_score(retStr,0,0);
    assert_string_equal("Love-All", retStr);
}


void test_FifteenAll_1_1()
{
    char retStr[32];
    tennis_score(retStr,1,1);
    assert_string_equal("Fifteen-All", retStr);
}

void test_ThirtyAll_2_2()
{
    char retStr[32];
    tennis_score(retStr,2,2);
    assert_string_equal("Thirty-All", retStr);
}

void test_Deuce_3_3()
{
    char retStr[32];
    tennis_score(retStr,3,3);
    assert_string_equal("Deuce", retStr);
}

void test_Deuce_4_4()
{
    char retStr[32];
    tennis_score(retStr,4,4);
    assert_string_equal("Deuce", retStr);
}

void test_FifteenLove_1_0()
{
    char retStr[32];
    tennis_score(retStr,1,0);
    assert_string_equal("Fifteen-Love", retStr);
}

void test_LoveFifteen_0_1()
{
    char retStr[32];
    tennis_score(retStr,0,1);
    assert_string_equal("Love-Fifteen", retStr);
}

void test_ThirtyLove_2_0()
{
    char retStr[32];
    tennis_score(retStr,2,0);
    assert_string_equal("Thirty-Love", retStr);
}

void test_LoveThirty_0_2()
{
    char retStr[32];
    tennis_score(retStr,0,2);
    assert_string_equal("Love-Thirty", retStr);
}

void test_FortyLove_3_0()
{
    char retStr[32];
    tennis_score(retStr,3,0);
    assert_string_equal("Forty-Love", retStr);
}

void test_LoveForty_0_3()
{
    char retStr[32];
    tennis_score(retStr,0,3);
    assert_string_equal("Love-Forty", retStr);
}

void test_Winforplayer1_4_0()
{
    char retStr[32];
    tennis_score(retStr,4,0);
    assert_string_equal("Win for player1", retStr);
}

void test_Winforplayer2_0_4()
{
    char retStr[32];
    tennis_score(retStr,0,4);
    assert_string_equal("Win for player2", retStr);
}

void test_ThirtyFifteen_2_1()
{
    char retStr[32];
    tennis_score(retStr,2,1);
    assert_string_equal("Thirty-Fifteen", retStr);
}

void test_FifteenThirty_1_2()
{
    char retStr[32];
    tennis_score(retStr,1,2);
    assert_string_equal("Fifteen-Thirty", retStr);
}

void test_FortyFifteen_3_1()
{
    char retStr[32];
    tennis_score(retStr,3,1);
    assert_string_equal("Forty-Fifteen", retStr);
}

void test_FifteenForty_1_3()
{
    char retStr[32];
    tennis_score(retStr,1,3);
    assert_string_equal("Fifteen-Forty", retStr);
}

void test_Winforplayer1_4_1()
{
    char retStr[32];
    tennis_score(retStr,4,1);
    assert_string_equal("Win for player1", retStr);
}

void test_Winforplayer2_1_4()
{
    char retStr[32];
    tennis_score(retStr,1,4);
    assert_string_equal("Win for player2", retStr);
}

void test_FortyThirty_3_2()
{
    char retStr[32];
    tennis_score(retStr,3,2);
    assert_string_equal("Forty-Thirty", retStr);
}

void test_ThirtyForty_2_3()
{
    char retStr[32];
    tennis_score(retStr,2,3);
    assert_string_equal("Thirty-Forty", retStr);
}

void test_Winforplayer1_4_2()
{
    char retStr[32];
    tennis_score(retStr,4,2);
    assert_string_equal("Win for player1", retStr);
}

void test_Winforplayer2_2_4()
{
    char retStr[32];
    tennis_score(retStr,2,4);
    assert_string_equal("Win for player2", retStr);
}

void test_Advantageplayer1_4_3()
{
    char retStr[32];
    tennis_score(retStr,4,3);
    assert_string_equal("Advantage player1", retStr);
}

void test_Advantageplayer2_3_4()
{
    char retStr[32];
    tennis_score(retStr,3,4);
    assert_string_equal("Advantage player2", retStr);
}

void test_Advantageplayer1_5_4()
{
    char retStr[32];
    tennis_score(retStr,5,4);
    assert_string_equal("Advantage player1", retStr);
}

void test_Advantageplayer2_4_5()
{
    char retStr[32];
    tennis_score(retStr,4,5);
    assert_string_equal("Advantage player2", retStr);
}

void test_Advantageplayer1_15_14()
{
    char retStr[32];
    tennis_score(retStr,15,14);
    assert_string_equal("Advantage player1", retStr);
}

void test_Advantageplayer2_14_15()
{
    char retStr[32];
    tennis_score(retStr,14,15);
    assert_string_equal("Advantage player2", retStr);
}

void test_Winforplayer1_6_4()
{
    char retStr[32];
    tennis_score(retStr,6,4);
    assert_string_equal("Win for player1", retStr);
}

void test_Winforplayer2_4_6()
{
    char retStr[32];
    tennis_score(retStr,4,6);
    assert_string_equal("Win for player2", retStr);
}

void test_Winforplayer1_16_14()
{
    char retStr[32];
    tennis_score(retStr,16,14);
    assert_string_equal("Win for player1", retStr);
}

void test_Winforplayer2_14_16()
{
    char retStr[32];
    tennis_score(retStr,14,16);
    assert_string_equal("Win for player2", retStr);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_LoveAll_0_0),
        cmocka_unit_test(test_FifteenAll_1_1),
        cmocka_unit_test(test_ThirtyAll_2_2),
        cmocka_unit_test(test_Deuce_3_3),
        cmocka_unit_test(test_Deuce_4_4),
        cmocka_unit_test(test_FifteenLove_1_0),
        cmocka_unit_test(test_LoveFifteen_0_1),
        cmocka_unit_test(test_ThirtyLove_2_0),
        cmocka_unit_test(test_LoveThirty_0_2),
        cmocka_unit_test(test_FortyLove_3_0),
        cmocka_unit_test(test_LoveForty_0_3),
        cmocka_unit_test(test_Winforplayer1_4_0),
        cmocka_unit_test(test_Winforplayer2_0_4),
        cmocka_unit_test(test_ThirtyFifteen_2_1),
        cmocka_unit_test(test_FifteenThirty_1_2),
        cmocka_unit_test(test_FortyFifteen_3_1),
        cmocka_unit_test(test_FifteenForty_1_3),
        cmocka_unit_test(test_Winforplayer1_4_1),
        cmocka_unit_test(test_Winforplayer2_1_4),
        cmocka_unit_test(test_FortyThirty_3_2),
        cmocka_unit_test(test_ThirtyForty_2_3),
        cmocka_unit_test(test_Winforplayer1_4_2),
        cmocka_unit_test(test_Winforplayer2_2_4),
        cmocka_unit_test(test_Advantageplayer1_4_3),
        cmocka_unit_test(test_Advantageplayer2_3_4),
        cmocka_unit_test(test_Advantageplayer1_5_4),
        cmocka_unit_test(test_Advantageplayer2_4_5),
        cmocka_unit_test(test_Advantageplayer1_15_14),
        cmocka_unit_test(test_Advantageplayer2_14_15),
        cmocka_unit_test(test_Winforplayer1_6_4),
        cmocka_unit_test(test_Winforplayer2_4_6),
        cmocka_unit_test(test_Winforplayer1_16_14),
        cmocka_unit_test(test_Winforplayer2_14_16),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
