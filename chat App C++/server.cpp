#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>

int main()
{
  int server_fd, new_socket;
  struct sockaddr_in address;
  int opt = 1;
  int addrlen = sizeof(address);
  char buffer[1024] = {0};

  // Creating socket file descriptor
  if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
            // AF_INET specifies the IPv4 address family
            // SOCK_STREAM indicates a TCP socket
{
    perror("socket failed");
    exit(EXIT_FAILURE);
}

  // Forcefully attaching socket to the port 8080
        //setsockopt to set options for the socket. In our program
  if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt)))
            // SO_REUSEADDR and SO_REUSEPORT allow the server to bind to a port that remains in a TIME_WAIT state.
{
    perror("setsockopt");
    exit(EXIT_FAILURE);
}

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(8080);

  // Forcefully attaching socket to the port 8080
        // sockaddr_in structure specifies the address and port for the socket
  if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
        // bind associates the socket with its local address.

    //
{
    perror("bind failed");
    exit(EXIT_FAILURE);
}
  if (listen(server_fd, 3) < 0)
    // listen sets the socket to listen for incoming connections.
{
    perror("listen");
    exit(EXIT_FAILURE);
}
  if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0)
        // sockaddr_in structure specifies the address and port for the socket
    
    // accept waits for an incoming client connection
{
    perror("accept");
    exit(EXIT_FAILURE);
}

// It blocks the execution until a client connects.
// Once a client connects, it returns a new socket specifically for the client.

  while (true)
    // server enters a loop where it listens for messages from the client using read
    //  It then echoes back the received message using send
{
    memset(buffer, 0, sizeof(buffer)); // Clear the buffer

    int bytes_read = read(new_socket, buffer, sizeof(buffer));
    if (bytes_read == 0)
    {
        std::cout << "Client disconnected" << std::endl;
        break;
    }

        // client is connected
    std::cout << "Client: " << buffer << std::endl;

    // Echo the message back to the client
    send(new_socket, buffer, strlen(buffer), 0);

    // Check if the message is a command to close the connection
    if (strcmp(buffer, "exit") == 0)
        // If "exit" is received or the client disconnects, the server breaks out of the loop
    {
        std::cout << "Exit command received. Closing connection." << std::endl;
        break;
    }

    // closing the client socket and its own socket before terminating.
}

  close(new_socket);
  close(server_fd);

  return 0;

}