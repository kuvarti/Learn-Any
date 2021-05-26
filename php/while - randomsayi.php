<?php 
	$i=rand(1,50); //$i değişkenine 1 ile 50 arasında rastgele sayı ataması yapar.
	echo "basla"."<br>";
	while ($i > 10) { // rastgele üretilen sayı 10dan büyük olduğu sürece içindeki kodları çalıştırır
		echo "$i <br>";
		$i=rand(1,50);
	}
	echo "$i";
echo "<hr>";
	do { // rastgele üretilen sayı 10dan büyük olduğu sürece içindeki kodları çalıştırır
		$i=rand(1,50);
		echo "$i <br>";
	} while ($i > 10);
 ?>