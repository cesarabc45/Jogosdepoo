#include <iostream> //abrindo à biblioteca
#include <ctime> //abrindo outra biblioteca para gerar espaços aleatório
using namespace std; 

void imprimir_espacos(int rodada); //declarando a função que imprime os espaços
int main() //função principal
{
	int total_espacos = 50; //declarando à quantidade de espaços necessário para chegar na linha de chegada 
	int espacos_pjd = 0; //declarando à quantidade de espaços que o carro pjd percorreu
	int espacos_profmarcelo = 0; //declarando à quantidade de espaços que o carro profmarcelo percorreu
	while (espacos_pjd < total_espacos && espacos_profmarcelo < total_espacos) //
	{
		system("cls"); //limpando a tela
		cout << "Jogo do carro de corrida" << endl; //imprimindo na tela o nome do jogo
		cout << "                                                Chegada!" << endl; //imprimindo a chegada

		srand((int)time(0)); //declarando a função que imprime números aleatórios

		espacos_pjd = rand() % 3 + 1 + espacos_pjd; //gerando um número aleatório de 1 a 3 somando mais do resultado, para o carro pjd andar
		imprimir_espacos(espacos_pjd); //imprimindo os espaços
		cout << "  _  " << endl;
		imprimir_espacos(espacos_pjd);
		cout << "-o-o>" << endl;

		espacos_profmarcelo = rand() % 3 + 1 + espacos_profmarcelo;
		imprimir_espacos(espacos_profmarcelo);
		cout << "  _  " << endl;
		imprimir_espacos(espacos_profmarcelo);
		cout << "-o-o>" << endl;
	}
	if (espacos_pjd > espacos_profmarcelo) cout << "Carro pjd venceu a corrida!" << endl;
	else if (espacos_profmarcelo > espacos_pjd) cout << "Carro profmarcelo venceu a corrida!" << endl;
	else cout << "Empate!" << endl;
	return 0;
}

void imprimir_espacos(int rodada)
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{
		cout << " ";
	}
}
