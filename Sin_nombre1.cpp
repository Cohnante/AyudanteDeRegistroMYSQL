#include <iostream>
#include <stdlib.h>
#include <time.h>
// agregar Datos automaticos a mysql;
using namespace std;

int main(){
	/*Arrays Inicio*/
	srand(time(NULL));
	
	string ArraysNombre[10]={"ADRIAN","ALBERTO","ALVARO","AMAIA","ARIADNA","ARTURO","CARLOS","CORAL","CRISTINA","DARINA"};
	
	string ArraysApellido[20]={"HERNANDEZ","SANCHEZ","REY","ABONDANO","ACEVEDO","MONTERROZA","CARVAJAL","VARGAS","ACERO","CARO","CRUZ","GARCIA","VILLA","MONROY","MAHECHA","PIÑEROS","BLANCO","CONCHA","ROCHA","GARCIA"};
	
	int ArraysEdad[31]={18,19,20,21,22,23,24,25,26,27,28,30,31,32,33,34,35,36,37,40,41,42,43,44,45,46,47,48,49,50};
	
	int ArraysId[10]={489159456,213460357,478569021,984021551,156144878,102315641,987410531,189457984,168941521,418695415};
	
	string ArraysDireccion[20]={"Calle 10 # 5-51","Avenida 19 No. 98-03, sexto piso, Edificio Torre 100","Calle 53 No 10-60/46, Piso 2","Calle 10 # 5-51 ","Avenida Calle 26 No 59-51 Edificio Argos - Torre 3 Piso 4","Calle 9 # 9 – 62, Leticia, Barrio Centro",
	"Calle 19 # 80A-40. Barrio Belén La Nubia","Carrera 21 # 17 -63","Carrera 42 # 54-77 Barrio El Recreo","Calle 100 # 11B-27 Bogotá","Carrera 20 B # 29-18. Barrio Pie de la Popa","Transversal 9 a No. 29 - 29 Barrio Maldonado","Calle 53 # 25A-35","Carrera 20 B # 29-18. Barrio Pie de la Popa.",
	"Calle 4 norte # 10B-66 Barrio Modelo","Calle 7 # 19-35","carrera 8 #15ª-19, Locales comerciales Santo Domingo","Calle 28 # 2-27 Barrio Centro","Calle 25 # 6-08","Calle 10 # 8-07"};
	
	int ArraysCantidad[10]={1,2,3,4,5,6,7,8,9,10};
	
	int ArraysCodigo[20]={321,465,165,254,470,324,145,651,798,684,521,984,512,105,231,416,785,398,721,594};
	
	int ArraysBool[2]={0,1};
	
	int ArraysDia[10]={150,160,176,201,145,21,45,780,146,315};
	
	int ArraysHora[7]={4,5,6,7,8,3,2};
	
	string ArraysFecha[10]={"2014-05-28","2001-12-31","2006-06-21","2019-09-14","2000-05-05","2017-07-07","2013-29-09","2012-07-05","2017-04-07","2016-23-11"};
	
	/*Arrays final*/
	int Cantidad;
	cout<<"Cantidad a repetir";
	cin>>Cantidad;
	/*Definir cuantas veces necesita repetir*/
	for(int b=0; b<=Cantidad;b++ ){
		/*Eleción de Datos*/
		int Nombre = rand() % (0 +10);
		int Edad = rand() % (0 +30);
		int Id = rand()%(0+10);
		int Dire=rand()%(0+20);
		int Cant=rand()%(0+10);
		int Codigo=rand()%(0+20);
		int Bool=rand()%(0+2);
		int Tiempo=rand()%(0+10);
		int Hora=rand()%(0+7);
		int Apellido=rand()%(0+20);
		int Fecha= rand()%(0+10);
		
		/*Impresión de insert 10 veces*/
		
		/*cout<<"insert into ContratadosVigilantes values ("<<"'"<<ArraysCodigo[Codigo]<<"'"<<","<<"'"<<ArraysDia[Tiempo]<<"'"<<","<<"'"<<ArraysHora[Hora]<<"'"<<","<<"'"<<ArraysNombre[Nombre]<<"'"<<","<<"'"<<ArraysApellido[Apellido]<<"'"<<","<<"'"<<ArraysBool[Bool]<<"'"<<");"<<endl;*/
		//cout<<"insert into Ataques values ("<<"'"<<ArraysCodigo[Codigo]<<"'"<<","<<"'"<<ArraysFecha[Fecha]<<"'"<<","<<"'"<<ArraysNombre[Nombre]<<"'"<<","<<"'"<<ArraysCantidad[Cant]<<"'"<<");"<<endl;
		//cout<<"insert into DepartamentoPolicia values ("<<"'"<<ArraysCodigo[Codigo]<<"'"<<","<<"'"<<ArraysDireccion[Dire]<<"'"<<");"<<endl;
		cout<<"insert into Ataques values ("<<"'"<<ArraysCodigo[Codigo]<<"'"<<","<<"'"<<ArraysFecha[Fecha]<<"'"<<","<<"'"<<ArraysNombre[Nombre]<<"'"<<","<<"'"<<ArraysCantidad[Cant]<<"'"<<");"<<endl;
		
		
	}
}
