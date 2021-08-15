// COMPILATION
// g++-10 -fPIC -Wall -I /usr/local/mysql-5.7.9-osx10.9-x86_64/include/ -dynamiclib -lstdc++ -o test_udf.so test_udf.cc

// INSTALLATION
// COPY TO: /usr/local/mysql/lib/plugin/
#include <mysql.h>

extern "C"{
  long long my_add(UDF_INIT *initid, UDF_ARGS *args, char *is_null, char *error);
  my_bool my_add_init(UDF_INIT *initid, UDF_ARGS *args, char *message);
}

long long my_add(UDF_INIT *initid, UDF_ARGS *args, char *is_null, char *error) {
  int a = *((long long *)args->args[0]);
  int b = *((long long *)args->args[1]);
  return a + b;
}

my_bool my_add_init(UDF_INIT *initid, UDF_ARGS *args, char *message) {
  return 0;
}
