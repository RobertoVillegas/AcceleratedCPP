// No funciona porque no se inicializa el segundo comentario
#include <iostream>
int main()
{
  /* This is a comment that extends over several lines
  because it uses /* and */ as its startingand ending delimiters* /
  std::cout << "Does this work?" << std::endl;
  return 0;
}