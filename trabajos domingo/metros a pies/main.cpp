#include <iostream>
#include <locale.h>
using namespace std;
/*setlocale(LC_ALL, "spanish");*/

int main(int argc, char** argv)


 {
 	//////////////variables///////////////////
 	int can=0;
 	int  opcion=0;
 	float res=0;
 	///////////////////////////////////////////////////////
 	
 	
 	setlocale(LC_ALL, "spanish");
 	system("color A");
 	cout<<"\n******************************************************************************\n";
 	cout<<("\n\t\teste es un programa diseñado para calcular\n\t\t metros, yardas, millas a PUIES\n");
 	cout<<"\n******************************************************************************\n\n\n\n";
 	cout<<"\t\tingresa la cantidad que deseas transformar a pies\n\n";
 	cout<<"\t\t ==>";cin>>can;
 	cout<<"\n\n\n\t\t*******escoge una opcion**********\n\n\n1.-Pie\n2.-Yarda\n3.-Milla\n\n";
 	cin>>opcion;
	switch(opcion)
	{
		case 1:
			{
			cout<<"\t\tselecionas la opcion pie\n\n";
			res=can*3.28084;
			cout<<"\n\n\t\ttu resultado es : "<<res<<endl;
			break;
			}
		case 2:
			{
			cout<<"\t\tselecionas la opcion Yarda\n\n";
			res=can*1.09361;
			cout<<"\n\n\t\ttu resultado es : "<<res<<endl;
			break;
			}	
		case 3:
			{
			cout<<"\t\tselecionas la opcion Milla\n\n";
			res=can*0.000621371;
			cout<<"\n\n\t\ttu resultado es : "<<res<<endl;
			break;
			}		
	}
	system("pause");
	return 0;
}
