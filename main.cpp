#include <iostream>
#include <pqxx/pqxx>
#include "Connection.h"

using namespace std;
using namespace pqxx;

int main() {
    string dbname = "rallye";
    string user = "postgres";
    string password = "kaloina1501";
    string hostaddr = "localhost";
    string port = "5432";

    Connection conn(dbname,user,password,hostaddr,port);

    connection *con = conn.getConnection();

    cout << con << endl;

    return 0;
}