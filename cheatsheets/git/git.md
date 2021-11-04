# **GIT**
Git küçük veya büyük farketmeksizin projeleri hızlı ve etkili şekilde yöneten bir açık kaynak kodlu ücretsiz dağıtılmış kontrol sistemidir.

## **Kavramlar**

**Repository(Repo)**: Repository genel olarak bütün dosyalarımız ve bilgilerinin bulunduğu bir depodur.

**Working Directory**: Çalışma dizini. Repo burada bulunur ve bu alanda çalışırız.

**Staging Area**: Proje dosyalarımızdaki değişiklikleri yeni versiyon olarak eklemeden önce kayıt altında tuttuğumuz alan.

**Commit**: Git'e eklenen dosyaları kalıcı olarak repoya işlemeye commit denir.

## Git Workflow(iş akışı):

![alt text](https://github.com/kuvarti/Learn-Any/blob/main/cheatsheets/IMGs/git-workflow.png "Workflow")

## **Git Config**
git config -> Git yapılandırma ayarları bu komut üzerinden yapılır.
\
&nbsp;
\
&nbsp;
git işlemlerine başlamadan loglarda tutulabilmesi için kullanıcı adı ve mail adresi girilmelidir.

	git config <Parametre> user.name "<isim>"
	git config <Parametre> user.mail "<mail>"

\
&nbsp;
Mevcut yapılandırmaları görüntülemek için;
```
git config -l
```
## Parametreler

  * ### **--global**
	Global(Genel) düzeyde ayarlamalar kullanıcıya özeldir, yani bir işletim sistemi kullanıcısına uygulanır. Global ayarlamalar kullanıcının 'home' dizininde depolanır.

			git config --global ...

  * ### **--system**
	System(Sistem) düzeyinde ayarlamalar tüm makineye uygulanır. Bu işletim sistemindeki bütün kullanıcıları ve bütn repo'ları kapsar. system ayarlamaları makinenin 'root' dizininde depolanır.

			git config --system ...
