#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <unistd.h>
#include "mysockets.h"

int main(int argc, char *argv[]) {

    // create a client TCP socket
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    // specify an address for the socket
    struct sockaddr_in client_address;
    client_address.sin_family = AF_INET;
    client_address.sin_port = htons(PORT);
    client_address.sin_addr.s_addr = INADDR_ANY;

    // Connect returns 0 ok and -1 error
    int client_connection_status = connect(network_socket, (struct sockaddr*) &client_address, sizeof(client_address));

    // check connection is ok
    if(client_connection_status == -1) {
        printf("There was an error making a connection to the remote socket on port %u\n\n", PORT);
        exit(1);
    }
    else {
        printf("Connection established\n\n");
    }

    // receive data from the server
    char server_response[BUFSIZ];
    recv(network_socket, &server_response, sizeof(server_response), 0);

    // close the socket
    //shutdown(network_socket, SHUT_RDWR);
    close(network_socket);

    // print the servers response
    printf("The server sent: \t%s\n", server_response);



    return 0;
}