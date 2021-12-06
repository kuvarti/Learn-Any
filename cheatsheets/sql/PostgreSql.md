# PostgreSQL nedir?

# Linux Kurulum

# Başlangıç

* Veritabanına Bağlanma
	```
	psql postgres
	```
	veya
	```
	psql -U postgres <kullanici>
	```

* Kullanıcıları listeler:
	```
	\du
	```
* veritabanlarını listeleme
	```
	\l
	```
* csvden import etme
	```
	\copy table_name from 'file_name.csv' delimiter ',' csv header; //csv header iilk satırı almamak için kullanılır.
	```


# Kaynaklar
* https://www.sinaneldem.com.tr/macos-centos-ve-ubuntu-uzerinde-postgresql-kurulumu-ve-turkce-karakter-hatasinin-giderilmesi
*
