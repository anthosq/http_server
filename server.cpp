#include <sys/epoll.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <fcntl.h>
#include <fmt/format.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    struct addrinfo *addrinfo;
    int res = getaddrinfo("127.0.0.1", "80", NULL, &addrinfo);
    
}
