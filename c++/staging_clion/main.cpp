#include <iostream>
#include <sqlite3.h>

int main() {
    const int STATEMENTS = 8;
    sqlite3 *db;
    char *zErrMsg = nullptr;
    const char *pSQL[STATEMENTS];
    int rc;

    rc = sqlite3_open("RPGDB.db", &db);

    if( rc )
    {
        std::cout<<"Can't open database: "<<sqlite3_errmsg(db)<<"\n";
        return 1;
    }
    else
    {
        std::cout<<"Open database successfully\n\n";
        return 0;
    }
}
