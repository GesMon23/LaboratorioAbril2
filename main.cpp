#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int i, Notas[4], SumaNot, Promedio;
	printf("PROMEDIO DE LOS 4 CICLOS DEL ESTUDIANTE: \n\n");
	for(i=1;i<5;i++){
		printf("INGRESE LA NOTA DEL CICLO NO.%d \n", i);
		scanf("%d", &Notas[i]);
		printf("\n");
	}
	for(i=1;i<5;i++){
		SumaNot +=Notas[i];
	}
	Promedio=SumaNot/4;
	printf("EL PROMEDIO DEL ESTUDIANTE ES: %d \n", Promedio);
	system("pause");
}
