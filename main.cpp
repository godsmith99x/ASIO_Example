#include <iostream>

#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>


int main()
{

    asio::error_code ec;

    //Create a "context" - platform specific interface
    asio::io_context context;

    //Get address we want to connect to
    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.34", ec), 80);

    //Create a socket, the context will deliver the implementation
    asio::ip::tcp::socket socket(context);

    //Tell socket to try to connect
    socket.connect(endpoint, ec);

    if (!ec)
    {
        std::cout << "Connection Established" << std::endl;
    }
    else
    {
        std::cout << "Failed to connect to address: \n" << ec.message() << std::endl;
    }

    return 0;
}
