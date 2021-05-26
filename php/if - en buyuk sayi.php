<?php 
	
	$sayi1=10;
	$sayi2=30;
	$sayi3=20;

	if ($sayi1> $sayi2 && $sayi1 > $sayi3) {
		echo "\$sayi1 en büyük sayi : ".$sayi1;
	}
	elseif ($sayi2> $sayi1 && $sayi2 > $sayi3) {
		echo "\$sayi2 en büyük sayi : ".$sayi2;
	}
	else {
		echo "\$sayi3 en büyük sayi : ".$sayi3;
	}

 ?>