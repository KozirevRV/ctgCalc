#include <Windows.h>
#include "ctgCalcMain.h"

using namespace ctgCalc; //DataBaseMySQL - ������������ ��� �������

int WINAPI WinMain(HINSTANCE hInstance, // ���������� ��������� ���������
    HINSTANCE hPrevInstance, // � Win32 �� �����������
    LPSTR lpCmdLine, // ����� �� ������� ���� � ������ ��������� ������
    int nCmdShow) { // ����� ���������� ���� 
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
    System::Windows::Forms::Application::Run(gcnew ctgCalcMain);
    return 0;
}