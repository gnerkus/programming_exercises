```bash
We've installed your MySQL database without a root password. To secure it run:
    mysql_secure_installation

MySQL is configured to only allow connections from localhost by default

To connect run:
    mysql -uroot

mysql@5.7 is keg-only, which means it was not symlinked into /usr/local,
because this is an alternate version of another formula.

If you need to have mysql@5.7 first in your PATH, run:
  echo 'export PATH="/usr/local/opt/mysql@5.7/bin:$PATH"' >> ~/.zshrc

For compilers to find mysql@5.7 you may need to set:
  export LDFLAGS="-L/usr/local/opt/mysql@5.7/lib"
  export CPPFLAGS="-I/usr/local/opt/mysql@5.7/include"

For pkg-config to find mysql@5.7 you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/mysql@5.7/lib/pkgconfig"


To have launchd start mysql@5.7 now and restart at login:
  brew services start mysql@5.7
Or, if you don't want/need a background service you can just run:
  /usr/local/opt/mysql@5.7/bin/mysql.server start
==> Summary
🍺  /usr/local/Cellar/mysql@5.7/5.7.35: 319 files, 234.6MB
```

### Check if mysqld is running
```bash
ps -ef | grep -v grep | grep mysqld
```

### Change password of user 'localhost' to 'password'
```sql
ALTER USER root@localhost IDENTIFIED BY 'password';
```