# mod_pfakeph

dummy php apache-2.x module

mod_pfakeph is apache-2.x module to allow directives like

- php_value
- php_flag
- php_admin_value
- php_admin_flag

in apache configuration files and .htaccess file.

Specified use for serve php over php-fpm with apache2

## compile

- RedHat, CentOS

```sh
apxs -i -a -c mod_pfakeph.c
```

- Debian/Ubintu

```sh
apxs2 -i -a -c mod_pfakeph.c
```
