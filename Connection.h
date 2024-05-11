#ifndef CONNECTION_H
#define CONNECTION_H

#include <pqxx/pqxx>
#include <iostream>

using namespace std;
using namespace pqxx;

class Connection
{
private:
    connection *connect;
public:
    Connection(string dbname , string user , string password , string hostaddr , string port);
    ~Connection();
    connection *getConnection();
};

#endif
