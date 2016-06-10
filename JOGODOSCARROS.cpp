#include <iostream> //abrindo à biblioteca
#include <ctime> //abrindo outra biblioteca para gerar espaços aleatório
using namespace std; //Para não recisar escrever "std"

void imprimir_espacos(int rodada); //declarando a função que imprime os espaços
int main() //função principal
{
	int total_espacos = 50; //declarando à quantidade de espaços necessário para chegar na linha de chegada 
	int espacos_pjd = 0; //declarando à quantidade de espaços que o carro pjd percorreu
	int espacos_profmarcelo = 0; //declarando à quantidade de espaços que o carro profmarcelo percorreu
	while (espacos_pjd < total_espacos && espacos_profmarcelo < total_espacos) //abrindo um laço. Esse laço vai sair quando chegar na linha de chegada
	{
		system("cls"); //limpando a tela
		cout << "Jogo do carro de corrida" << endl; //imprimindo na tela o nome do jogo
		cout << "                                                Chegada!" << endl; //imprimindo a chegada

		srand((int)time(0)); //declarando a função que imprime números aleatórios

		espacos_pjd = rand() % 3 + 1 + espacos_pjd; //gerando um número aleatório de 1 a 3, para o carro pjd andar
		imprimir_espacos(espacos_pjd); //imprimindo os espaços para o carro pjd andar
		cout << "  _  " << endl; //imprimindo uma parte do carro pjd
		imprimir_espacos(espacos_pjd); //imprimindo espaços do carro pjd
		cout << "-o-o>" << endl; //imprimindo a última parte do carro pjd

		espacos_profmarcelo = rand() % 3 + 1 + espacos_profmarcelo; //gerando um número aleatório de 1 a 3, para o carro profmarcelo andar
		imprimir_espacos(espacos_profmarcelo); //imprimindo os espaços para o carro profmarceloandar
		cout << "  _  " << endl; //imprimindo uma parte do carro profmarcelo
		imprimir_espacos(espacos_profmarcelo); //imprimindo espaços do carro profmarcelo
		cout << "-o-o>" << endl; //imprimindo a última parte do carro pjd
	}
	if (espacos_pjd > espacos_profmarcelo) cout << "Carro pjd venceu a corrida!" << endl; //vai imprimir na tela "carro pjd venceu a corrida!" se o carro pjd ganhar a corrida 
	else if (espacos_profmarcelo > espacos_pjd) cout << "Carro profmarcelo venceu a corrida!" << endl; //vai imprimir na tela "carro profmarcelo venceu a corrida!" se o carro profmarcelo ganhar a corrida 
	else cout << "Empate!" << endl; //vai imprimir na tela "empate!" se nenhum dos carros ganhar a corrida
	return 0; //fechando o jogo(progama)
}

void imprimir_espacos(int rodada) //declarando a função que imprime os espaços
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++) //imprimindo os espaços de cada rodada
	{
		cout << " "; //imprimindo os espaços
	}
}
