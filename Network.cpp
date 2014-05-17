#include "Network.h"

Poco::SharedPtr<Poco::Net::SocketAddress>  CNetwork::m_sockAddr = 0;
Poco::SharedPtr<Poco::Net::DatagramSocket> CNetwork::m_dgSocket = 0;

CNetwork::CNetwork(void)
{
}


CNetwork::~CNetwork(void)
{
}

void CNetwork::init()
{
	m_sockAddr = new Poco::Net::SocketAddress("localhost", APP_PORT);
	m_dgSocket = new Poco::Net::DatagramSocket(*m_sockAddr);
}

int CNetwork::send( unsigned char* sendbuffer, int length )
{
	return m_dgSocket->sendBytes(sendbuffer, length);
}

int CNetwork::recv( unsigned char* recvbuffer, int length  )
{
	return m_dgSocket->receiveBytes(recvbuffer, length);
}
