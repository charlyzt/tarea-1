#include <iostream>
#include <windows.h>
#include <sstream>
#include <string>

using namespace std;

void alarma(int segundos)
{
 int temporizador = 0;
 while (true)
 {
   cout << temporizador << endl;
   if (temporizador == segundos) cout << "**** ALARMA ****" << endl;
   if (temporizador > segundos) cout << "\a"; //BEEP
   Sleep(1000); //1 segundo
   temporizador++;   
 }    
}

int main(int argc, char *argv[])
{
 cout << "Segundos para que suene la alarma: ";
 string s;
 getline(cin, s);
 int segundos;
 if (istringstream(s) >> segundos) alarma(segundos);
 system("PAUSE");
 return 0;
}

