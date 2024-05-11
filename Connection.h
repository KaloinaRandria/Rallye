#ifndef CONNECTION_H
#define CONNECTION_H

#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;

class Connection
{
private:
    connection *connect;
public:
    Connection(string dbname , string user , string password , string hostaddr , string portf);
    ~Connection();
    connection *getConnection();
};

#endif
