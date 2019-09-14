// make sure the average includes decimal digits

#include <iostream>

int main()
{
  // TODO#1: use the "static_cast" operator to cast the character to a short
  // then print both the char and the short

  char my_char1 = 'J';
  short my_short1 = 74;

  std::cout << static_cast<short>(my_char1) << std::endl;

  std::cout << "The ASCII value for " << my_char1 << " is " << my_short1 << std::endl;


  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#2: add one to the character to see what gets printed out

  char my_char2 = 'C';
  my_char2 = my_char2 + 1;
  std::cout << "Char1: \"C\". After adding +1, the value changed to " << my_char2 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#3: again add one to the character to see what gets printed out
  // and add a comment explaining why the value of the character is no
  // longer alphabetic

  char my_char3 = 'z';
  my_char3 = my_char3 + 1;

  //the value is no longer alphabetic since the max end value has been reached
  std::cout << "Char2: \"z\", after adding +1, the value changed to " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#4: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not
  // note: std::dec and std::hex indicate the format of the output, decimal
  // versus hexadecimal

  short my_short2 = 32767; // maximum value for a short
  int my_int2 = my_short2;
  short myShort2;
  int myInt2;

  myShort2 = my_short2 + 1;
  myInt2 = my_int2 + 1;


  std::cout << "Short (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_short2 << std::hex << " (0x" << my_short2 << ')';

    // the value wrapped around the variable since the max value has been reached
  std::cout << ", after adding 1: " << std::dec << myShort2
    << std::hex << " (0x" << myShort2 << ")\n";

    // the value incremented by once since the data type is an integer
  std::cout << "Int (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_int2 << std::hex << " (0x" << my_int2 << ')';

  std::cout << ", after adding 1: " << std::dec << myInt2
    << std::hex << " (0x" << myInt2 << ")\n";

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#5: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not

  unsigned short my_short3 = 65535; // maximum value for an unsigned short
  int my_int3 = my_short3;
  unsigned short myShort3 = my_short3 + 1;
  int myInt3 = my_int3 + 1;

  std::cout << "Unsigned short (" << sizeof(my_short3) << " bytes): "
    << std::dec << my_short3 << std::hex << " (0x" << my_short3 << ')';

    // the value wrapped around the variable, and since the  the variable
    // is unsigned, the value doesn't turn negative.
  std::cout << ", after adding 1: " << std::dec << myShort3
    << std::hex << " (0x" << myShort3 << ")\n";

  std::cout << "Same value as int (" << sizeof(my_int3) << " bytes): "
    << std::dec << my_int3 << std::hex << " (0x" << my_int3 << ')';

    // the value incremented by once since the data type is an integer
  std::cout << ", after adding 1: " << std::dec << myInt3
    << std::hex << " (0x" << myInt3 << ")\n";

  // ** not required, but for more practice, feel free to add code below which **
  // ** tests underflow and overflow using other data types **

  return 0;
}
