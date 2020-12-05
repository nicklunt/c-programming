#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <unistd.h>
#include "mysockets.h"

int main(int argc, char *argv[]) {

    char server_message[] = "You have reached the server!";

    // create TCP server socket
    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // define the server address. sockaddr_in is a struct used in the bind below
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);
    server_address.sin_addr.s_addr = INADDR_ANY;   

    // bind the socket to our specified IP and port
    int server_bind_status = bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
    if(server_bind_status != 0) {
        printf("Error binding server to %u\n", PORT);
        exit(1);
    }
    else {
        printf("Server listening on port %u\n", PORT);
    }

    // listen for connections
    listen(server_socket, 5);

    // get the client socket we want to write to
    int client_socket;
    client_socket = accept(server_socket, NULL, NULL);

    // send our data to the client
    send(client_socket, server_message, sizeof(server_message), 0);

    // close the socket
    // shutdown(server_socket, SHUT_RDWR);
    close(server_socket);

    return 0;
}