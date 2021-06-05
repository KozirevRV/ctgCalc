#include <Windows.h>
#include "ctgCalcMain.h"

using namespace ctgCalc; //DataBaseMySQL - Пространство имён проекта

int WINAPI WinMain(HINSTANCE hInstance, // дескриптор экземпл¤ра приложени¤
    HINSTANCE hPrevInstance, // в Win32 не используетс¤
    LPSTR lpCmdLine, // нужен дл¤ запуска окна в режиме командной строки
    int nCmdShow) { // режим отображени¤ окна 
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
    System::Windows::Forms::Application::Run(gcnew ctgCalcMain);
    return 0;
}