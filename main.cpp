#include <iostream>
#include <pqxx/pqxx>
#include "Connection.h"

using namespace std;
using namespace pqxx;

int main() {
    string dbname = "rallye";
    string user = "postgres";
    string password = "kaloina1501";
    string hostaddr = "127.0.0.1";
    string port = "5432";

    Connection conn(dbname,user,password,hostaddr,port);

    connection *con = conn.getConnection();

    return 0;
}