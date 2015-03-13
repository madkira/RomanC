#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "Decode.h"
}

TEST_GROUP(Roman)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

//__________Test des Valeur a un seul Caractere__________//

TEST(Roman, Decode_I)
{
  CHECK_EQUAL(1, roman_decode("I"));
}

TEST(Roman, Decode_V)
{
  CHECK_EQUAL(5, roman_decode("V"));
}

TEST(Roman, Decode_X)
{
  CHECK_EQUAL(10, roman_decode("X"));
}

TEST(Roman, Decode_L)
{
  CHECK_EQUAL(50, roman_decode("L"));
}

TEST(Roman, Decode_C)
{
  CHECK_EQUAL(100, roman_decode("C"));
}

TEST(Roman, Decode_D)
{
  CHECK_EQUAL(500, roman_decode("D"));
}

TEST(Roman, Decode_M)
{
  CHECK_EQUAL(1000, roman_decode("M"));
}



//__________Test des Valeur a plusieurs caractères en somme__________//

TEST(Roman, Decode_II)
{
  CHECK_EQUAL(2, roman_decode("II"));
}


TEST(Roman, Decode_III)
{
  CHECK_EQUAL(3, roman_decode("III"));
}

TEST(Roman, Decode_IV)
{
  CHECK_EQUAL(4, roman_decode("IV"));
}

TEST(Roman, Decode_VI)
{
  CHECK_EQUAL(6, roman_decode("VI"));
}

TEST(Roman, Decode_VII)
{
  CHECK_EQUAL(7, roman_decode("VII"));
}

TEST(Roman, Decode_VIII)
{
  CHECK_EQUAL(8, roman_decode("VIII"));
}

TEST(Roman, Decode_IX)
{
  CHECK_EQUAL(9, roman_decode("IX"));
}

TEST(Roman, Decode_XXXI)
{
  CHECK_EQUAL(31, roman_decode("XXXI"));
}

TEST(Roman, Decode_XXIV)
{
  CHECK_EQUAL(24, roman_decode("XXIV"));
}

TEST(Roman, Decode_XL)
{
  CHECK_EQUAL(40, roman_decode("XL"));
}

TEST(Roman, Decode_LX)
{
  CHECK_EQUAL(60, roman_decode("LX"));
}

TEST(Roman, Decode_XC)
{
  CHECK_EQUAL(90, roman_decode("XC"));
}

TEST(Roman, Decode_CCCLXIX)
{
  CHECK_EQUAL(369, roman_decode("CCCLXIX"));
}

TEST(Roman, Decode_CDXLVIII)
{
  CHECK_EQUAL(448, roman_decode("CDXLVIII"));
}


