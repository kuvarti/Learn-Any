-GIT-

Git küçük veya büyük farketmeksizin projeleri hızlı ve etkili şekilde yöneten bir açık kaynak kodlu ücretsiz dağıtılmış kontrol sistemidir.

Kavramlar;

Repository(Repo): Repository genel olarak bütün dosyalarımız ve bilgilerinin bulunduğu bir depodur.

Working Directory: Çalışma dizini. Repo burada bulunur ve bu alanda çalışırız.

Staging Area: Proje dosyalarımızdaki değişiklikleri yeni versiyon olarak eklemeden önce kayıt altında tuttuğumuz alan.

Commit: Git'e eklenen dosyaları kalıcı olarak repoya işlemeye commit denir.

Git Workflow(iş akışı):

	Working		Staging		.git directory
	Directory	area		(repository)
	  |		  |		    |
	  | <----- checkout the project	--- |
	  |		  |		    |
	  |-stage files	->|		    |
	  |		  | --	commit	--->|
	  |		  |		    |

Git Config;
 Git yapılandırma ayarlarıdır, git ile ayarlamalar bu komut üzerinden yapılır.

Mevcut yapılandırmaları görüntülemek için;
```
~ git config -l
```
* Parametreler