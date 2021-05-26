<?php 
	$dizi=array(1,2,3,4,5,6,7,8); //Foreach dizilerde kullanılan döngü çeşitidir.

	foreach ($dizi as $key => $deger) { //$key değeri $dizi indisleri içinde gezerek değeri $deger'e atar.
		echo "$key . sırada $deger var.<br>";
	}
 ?>