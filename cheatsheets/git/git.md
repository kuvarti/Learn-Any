# **GIT**
&nbsp;&nbsp;&nbsp;
Git küçük veya büyük farketmeksizin projeleri hızlı ve etkili şekilde yöneten bir açık kaynak kodlu ücretsiz dağıtılmış kontrol sistemidir.

Bir klasör'ün git tarafından kontrol edilmesini istiyorsak o klasöre gidip;

	git init
yazarak mevcut dizin ve alt dizinleri git kontrolüne alırız.

## **Kavramlar**

**Repository(Repo):** Repository genel olarak bütün dosyalarımız ve bilgilerinin bulunduğu bir depodur.

**Working Directory:** Çalışma dizini. Repo burada bulunur ve bu alanda çalışırız.

**Staging Area:** Proje dosyalarımızdaki değişiklikleri yeni versiyon olarak eklemeden önce kayıt altında tuttuğumuz alan.

**Commit:** Git'e eklenen dosyaları kalıcı olarak repoya işlemeye commit denir.

### **Git Workflow(iş akışı):**

![Workflow](../IMGs/git/git-workflow.png "Workflow")
## **Git Config**
git config -> Git yapılandırma ayarları bu komut üzerinden yapılır.
\
&nbsp;
\
&nbsp;
git işlemlerine başlamadan loglarda tutulabilmesi için kullanıcı adı ve mail adresi girilmelidir.

	git config <Parametre> user.name "<isim>"
	git config <Parametre> user.mail "<mail>"
&nbsp;
	Commitler vs.. için mesaj editörü eklemek için;
```
git config <parametre> core.editor "<program>"
```
\
&nbsp;
Mevcut yapılandırmaları görüntülemek için bunlardan birisini yazabiliriz;
```
git config -l
git config --list
```
### **Parametreler**

  * ### **--global**
	Global(Genel) düzeyde ayarlamalar kullanıcıya özeldir, yani bir işletim sistemi kullanıcısına uygulanır. Global ayarlamalar kullanıcının 'home' dizininde depolanır.

		git config --global ...

  * ### **--system**
	System(Sistem) düzeyinde ayarlamalar tüm makineye uygulanır. Bu işletim sistemindeki bütün kullanıcıları ve bütün repo'ları kapsar. system ayarlamaları makinenin 'root' dizininde depolanır.

		git config --system ...

## **Basics**

&nbsp;&nbsp;&nbsp;
Başlangıç seviyesi için bilinmesi gereken komutlar;
 * **git add** -> Git'e eklenecek dosyaların listesini belirtir.

		git add <dosya> <dosya> ...
 * **git rm** -> Git'e eklenen dosyaları siler.

		git rm <dosya> <dosya> ...
 * **git commit** -> Git'e eklenen dosyaları commit eder.

		git commit -m "<commit mesajı>"
 * **git status** -> Git'e eklenen dosyaların durumunu gösterir.

		git status
 * **git log** -> Git'e eklenen dosyaların commit loglarını gösterir.

		git log
 * **git checkout** -> Git'e eklenen dosyaların durumunu geri alır veya branch değiştirir.

		git checkout <commit>

## **Branch/Merge**

![branch sheme](../IMGs/git/git-branchsheme.png "branch sheme")

&nbsp;&nbsp;&nbsp;
**Branch** projeyi dallara ayırmamızı sağlar. Ana projeden bir dal ayırarak eklemek istediğimiz özelliği ana programa zarar vermeden, ayrı bir dalda ekleyip test edip eğer problemsiz çalışıyorsa ana programa sonradan eklememize yardımcı olur.

&nbsp;&nbsp;&nbsp;
**Merge** ise herhangi bir brach'de yaptığımız değişiklikleri master branch'imiz ile birleştirme veya master branch'e entegre etme işlemidir.

&nbsp;&nbsp;&nbsp;
**HEAD** basitçe 'commit' referansıdır. HEAD'in değeri o anki commit'in referansıdır.

* ## Branch

	Mevcut brancleri görmek için;

		git branch -l -a


	Yeni branch eklemek için;

		git branch <isim>

	Branch silmek için;

		git branch -d <isim> <isim> ...

	Branchler arası geçiş için;

		git checkout <isim>

* ## Merge

	İlk önce birleştirilecek branch'e gidip daha sonra

		git merge <Branch adı>
	Yazarak birleştirebiliriz. ÖR:

		git merge web
	Yazarak "web" branch'ini o an bulunduğum branch ile birleştirdim.

	Eğer birleştirme işlemi başarısız olursa;

		git merge --abort

	###	Merge Türleri
	*	#### Fast Forward
		![merge ff](../IMGs/git/git-mergeff.png "merge ff")
\
&nbsp;&nbsp;&nbsp;
		En yaygın merge türüdür. Git'e eklenen dosyaların commit loglarının aynısını kullanarak birleştirir. Eski kodlarda bir değişiklik olmaz. Geçmişi tek çizgi olarak gösterir.

			git merge <Branch adı>

	*	#### Recursive
		![merge recursive](../IMGs/git/git-mergerecursive.png "merge recursive")
\
&nbsp;&nbsp;&nbsp;
		Recursice 2 HEAD üzerinde çalışır. Recursive yeniden adlandırma içeren birleştirmeleri algılayabilir ve işleyebilir, ancak algılanan kopyaları kullanamaz. Bir dalı çekme veya birleştirme yaparken varsayılan olarak kullanılır.

			git merge -s recursive <branch1> <branch2>

		 ####	**Fast-Forward vs Recursive**
		| Fast-Forward | vs | Recursive |
		| :---------- | :-: | -----------: |
		| Masterda yeni commit olmaz | | Masterda commit olur |
		| Çizgisel geçmiş | | Commit 2 ebevenyi gösterir |
		| Merge commiti bulunmaz | | Merge commiti bulunur |

	*	#### Ours
		![ours](../IMGs/git/git-mergeours.png "ours")
\
&nbsp;&nbsp;&nbsp;
		Ours 1den fazla branchde çalışır. Merge sonucu çıktısı her zaman mevcut branch'in HEADinkidir. Sadece ortak noktaları merge eder diğer dallardan gelen tüm değişiklikleri yok sayar.

			git merge -s ours <branch1> <branch2> <branchN>

	*	#### Octopus
		![octopus](../IMGs/git/git-mergeoctopus.png "octopus")
\
&nbsp;&nbsp;&nbsp;
		Octopus 2den fazla branch girildiğinde otomatik devreye girer. Eğer çakışmalar olursa onları düzeltmeyi reddeder, manuel olarak düzeltilmesi gerekir.

			git merge -s octopus <branch1> <branch2> <branchN>
	*	#### Resolve
		![resolve](https://media.geeksforgeeks.org/wp-content/uploads/20191231173643/Resolve-Merge-Strategy.png "resolve")
		[resim linki](https://www.geeksforgeeks.org/merge-strategies-in-git/)
\
&nbsp;&nbsp;&nbsp;
		Resolve '3-way merge' algoritmasını kullanarak sadece 2 tane Headi çözer. Çapraz merge belirsizliklerini dikkatlice tespit etmeye çalışır. Genellikle güvenli ve hızlı olarak kabul edilir.

			git merge -s resolve <branch1> <branch2>

	*	#### Subtree
		![subtree](../IMGs/git/git-mergesubtree.png "subtree")
\
&nbsp;&nbsp;&nbsp;
		subtree, recursive merge uzantısıdır. A ve Byi Merge etmek istediğinizde;
		 eğer B, A'nın alt ağacına karşılık geliyorsa B, A'nın ağaç yapısını yansıtacak şekilde güncellenir, Bu güncelleme ayrıca A ve B arasında paylaşılan ortak ata ağacına da yapılır.

		 	git merge -s subtree <branchA> <branchB>
## **Rebase**
![rebase](../IMGs/git/git-rebase.png "rebase")
\
&nbsp;&nbsp;&nbsp;
	```Git Rebase``` ile ```Git Merge``` benzer işlevleri yapmak için kullanılıyor. Temel olarak 2side bir Branchdeki değişiklikleri diğerine aktarmak için kullanılıyor.
\
&nbsp;&nbsp;&nbsp;
	Merge ile birleştirme yapıldığında loglarda Merge işlemini gösteren bir commit bulunurken, Rebase ile yapıldığında loglarda sanki 2 Branchdeki değişiklikler tek branchde yapılmış gibi gözükür.
```
git rebase <branch>
```
### **Merge vs Rebase**
![Rebase vs Merge](../IMGs/git/git-rebasevsmerge.png "Rebase vs Merge")
\
&nbsp;&nbsp;&nbsp;
	Git üzerinden branch/merge ağını grafiksel olarak görmek için "git a dog";

```
git log --all --decorate --oneline --graph
```
## **Conflict**(Çakışma)
&nbsp;&nbsp;&nbsp;
	Conflict'ler _(çakışma (lar))_ Farklı Branchlerde aynı dosyada aynı satırlarda değişiklik yapıldıktan sonra Merge etmeye çalışırken karşımıza çıkar. Bir conflict ile karşılaştığınızda şuna benzer birşey yazar.
```
Auto-merging <File>
CONFLICT (content): Merge conflict in <File>
Automatic merge failed; fix conflicts and then commit the result.
```
&nbsp;
	Burada yapmamız gereken. ```<File>``` ile belirtilen dosyayı açıp conflict durumunu çözmek. problem karşımıza şu şekilde gelicektir.
```c
<<<<<<< HEAD
	printf("merhaba");
=======
	printf("merhaba dünya");
>>>>>>> <branch>
```
&nbsp;
	Bu noktada '```<<<<<<< HEAD```' ile '```=======```' arasında kalan kısım, kodun HEAD deki yani bulunduğumuz committeki versiyonu gösterir. '```=======```' ile '```>>>>>>> <branch>```' arasında kalan kısım ise kodların ```<branch>```deki versiyonunu gösterir. İkisinden birini veya ikisini birden seçerek düzenleyip daha sonra commit attığımızda conflict'i çözeriz. Ör olarak Çözülmesi Gereken Konflict'i yukarıdaki örnek olarak referans alırsak;

Sadece ```HEAD```i seçersek;
```c
	printf("merhaba");
```
Sadece ```<Branch>```i seçersek;
```c
	printf("merhaba dünya");
```
İkisini birden seçersek;
```c
	printf("merhaba");
	printf("merhaba dünya");
```
olarak bırakmamız yeterli. Kalan çakışma sonucu alanları da sildikten sonra commitlenmeye hazır. Conflictleri daha rahat çözmek için VS Code gibi text editörler kullanabilirsiniz.
\
\
\
&nbsp;
## Kaynaklar

* https://aliozgur.gitbooks.io/git101/content/branching_dallanma_ve_merging_birlestirme/degisiklikleri_merge_etmek.html
* https://qastack.info.tr/programming/2304087/what-is-head-in-git
* https://medium.com/nafidurmus/git-ile-dallanma-branching-ve-birleştirme-merging-olayları-da805501cc61
* https://www.mobilhanem.com/git-merge-dallari-birlestirelim/
* https://www.atlassian.com/git/tutorials/using-branches/merge-strategy
* https://www.geeksforgeeks.org/merge-strategies-in-git/
* https://aliozgur.gitbooks.io/git101/content/alistirmalar/Gun_10.html
