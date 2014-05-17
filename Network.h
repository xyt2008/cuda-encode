#pragma once
#include <Poco/Net/DatagramSocket.h>
#include <Poco/Net/SocketAddress.h>
#include <Poco/SharedPtr.h>

//#pragma comment("lib", "PocoNetd.lib")
//#pragma comment("lib", "PocoFoundationd.lib")

#define APP_PORT 11311

class CNetwork
{
private:
	static Poco::SharedPtr<Poco::Net::SocketAddress>	m_sockAddr;
	static Poco::SharedPtr<Poco::Net::DatagramSocket>	m_dgSocket;
public:
	CNetwork(void);
	~CNetwork(void);
	static void init();
	static int send(unsigned char* sendbuffer, int length );
	static int recv(unsigned char* recvbuffer, int length );
};

