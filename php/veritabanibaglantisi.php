<?php 
	
	$username	="root";
	$password	="admina12";
	$sunucu		="localhost";
	$database	="ilkdeneme";
	$dolar=0;

	$baglan = mysqli_connect($sunucu,$username,$password);

	if ($baglan->connect_errno >0 ) {
		die "sunucu hatası:".$baglanti->connect_error();
	}
	echo "calisti";

	/*
	$sql="SELECT * FROM 'kategori' ";
	mysqli_select_db('ilkdeneme');
	$gelenveri= mysqli_query($sql, $baglan);

      echo "ID :{$row[1]['kid']}  <br> ".
         "ADI : {$row[1]['kad']} <br> ".
         "--------------------------------<br>";
   mysqli_close($baglan);

   echo $dolar;

	/*

	/*
	$db=mysql_select_db($database);
	if ($db) {
		echo "veritabanı hatası".mysql_error();
		echo "<br>";
		echo "bla bla bla bla bla bla";
		exit();
	}*/
 ?>
