// C++ program to illustrate the client application in the 
// socket programming 
#include <cstring> 
#include <iostream> 
#include <winsock2.h>
#include <unistd.h> 
#pragma comment(lib, "ws2_32.lib")
int main() 
{ 
     // Initialize Winsock
    WSADATA wsData;
    WORD ver = MAKEWORD(2, 2);
    int wsOK = WSAStartup(ver, &wsData);
    if (wsOK != 0) {
        std::cerr << "Can't initialize Winsock! Quitting" << std::endl;
        return 1;
    }

	// creating socket 
	int clientSocket = socket(AF_INET, SOCK_STREAM, 0); 

	// specifying address 
	sockaddr_in serverAddress; 
	serverAddress.sin_family = AF_INET; 
	serverAddress.sin_port = htons(8080); 
	serverAddress.sin_addr.s_addr = INADDR_ANY; 

	// sending connection request 
	connect(clientSocket, (struct sockaddr*)&serverAddress, 
			sizeof(serverAddress)); 

	// sending data 
	const char* message = "Hello, server!"; 
	send(clientSocket, message, strlen(message), 0); 

	// closing socket 
	close(clientSocket); 
    WSACleanup();
	return 0; 
}