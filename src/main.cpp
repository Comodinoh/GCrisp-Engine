#include <GCrisp/core.h>
#include <iostream>

int main(int argc, char *argv[])
{
  gcrisp::GameEngine engine = gcrisp::GameEngine({"asd", 1});
  std::cout << engine.game_info.game_name << std::endl;
  return 0;
}
