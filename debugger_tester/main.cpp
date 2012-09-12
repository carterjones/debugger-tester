#include <Windows.h>

int main() {
  Sleep(500);
  __asm {
    mov eax, 0
    mov eax, [eax]
  }
  return 0;
}
