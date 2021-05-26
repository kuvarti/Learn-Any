<?php 
	for ($i=0; $i < 50; $i++) { // 0dan 49a kadar 1'er 1'er sayar ve her bir seferinde içindeki satırları çalıştırır.
		echo "bu satır ".($i+1).". defa çalışıyor"."<br>";
	}
echo "<hr>";
	for ($i=0; $i < 100; $i+=2) { //0dan 49a kadar 2'ser 2'ser sayar ve her bir seferinde içindeki satırları çalıştırır.
		echo "cift sayilar : $i <br>";
	}
echo "<hr>";
	for ($i=200; $i >= 0 ; $i-=5) { //200den geriye 5'er 5'er sayar ve her bir seferinde içindeki satırları çalıştırır.
		echo "$i <br> $i"."- 5 = ";
	}
	echo "-5";
echo "<hr>";
	$s1=0;
	$s2=100;
	$s3=3;
	for ($i=$s1; $i <$s2 ; $i+=$s3) { //$s1 den $2 ye $3'er $3'er sayar ve her bir seferinde içindeki satırları çalıştırır.
		echo $i."<br>";
	}
 ?>