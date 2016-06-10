#include <iostream> //abrindo à biblioteca
#include <string> //abrindo uma biblioteca necessária para usar strings
#include <ctime> //Para gerar uma semente a partir do tempo
using namespace std; //Para não recisar escrever "std"

int main() //função principal
{
	bool sair = false; //variável do tipo boleana para usar no while
	string jog1, jog2; //variável para salvar os nomes dos competidores
	int vida1 = 20, vida2 = 20; //vida inicial dos lutadores
	int danoc1 = 0, danoc2 = 0;//Dano causado

	cout << "Digite o nome do jogador 1:" << endl; //imprindo na tela "Digite o nome do jogador 1"
	cin >> jog1; //recebendo o nome do jogador 1

	cout << "Digite o nome do jogador 2:" << endl; //imprindo na tela "Digite o nome do jogador 2"
	cin >> jog2; //recebendo o nome do jogador 2

	while (sair == false) //se sair for verdadeiro, o jogo finalizar
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl; //imprimindo dano causado 
		cout << " o                             o" << endl; //imprimindo uma parte do corpo de cada personagens
		cout << ".T./                         \\.T. " << endl; //imprimindo outra parte do corpo de cada personagens
		cout << " ^                             ^" << endl; ////imprimindo a última parte do corpo de cada personagens
		cout << "Atq: 4                        Atq: 4" << endl; //imprimindo os status de ataque de cada personagens
		cout << "Def: 2                        Def: 2" << endl; //imprimindo os status de defesa de cada personagens
		cout << jog1 << "                         " << jog2 << endl; //imprimindo os nomes de cada personagens
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl; //imprimindo a vida de cada personagens
		system("pause"); ////Apertar qual quer tecla para continuar
		int dado6;//declarando um dado de 6 lados
		srand((int)time(0)); //Gerando uma semente aleatória
		dado6 = rand() % 6 + 1; //Gerando um número aleatório
		danoc1 = dado6 - 4; //calculando o dano causado ao personagen 1
		if (danoc1 < 0) //se o dano causado for menos do que zero
		{
			danoc1 = 0; // dano recebe zero
		}
		vida1 = vida1 - danoc1; //dano recebido será à vida menos o dano

		dado6 = rand() % 6 + 1; //gerando um número aleatório
		danoc2 = dado6 - 4; //calculando o dano causado ao personagen 2
		if (danoc2 < 0) //se o dano causado for menos do que zero
		{
			danoc2 = 0; //dano recebe zero
		}
		vida2 = vida2 - danoc2; //dano recebido será à vida menos o dano

		system("cls"); //limpando a tela

		if (vida1 <= 0 || vida2 <= 0) //se um dos personagens ficar com a vida menor ou igual a zero
		{
			sair = true; //o jogo acabará
		}
	}

	if (vida1 < vida2) //se a vida do personagen 1 for menor do que a do personagen 2
	{
		cout << jog2 << " Venceu!" << endl; //o personagen 2 vence o jogo
	}
	else if (vida2 < vida1) //se a vida do personagen 2 for menor do que a do personagen 1
	{
		cout << jog1 << " Venceu!" << endl; //o personagen 1 vence o jogo
	}
	else //se vida dos personagens forem iguais
	{
		cout << "Empate!" << endl; //o jogo será empate
	}
	return 0; //fechando o jogo(o programa)
}
