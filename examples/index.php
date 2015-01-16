<?php

include("config/Autoload.php");
include("config/CONSTANT.class");

$handler = new CPage($_REQUEST, true);


$handler->startPage();

$pages = $handler->getPage();

foreach($pages as $page)
	if(file_exists($page))
		include($page);


$handler->endPage();

?>


