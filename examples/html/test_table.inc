<?php
$handler->closeHead();
$table = new CTable(array(
						array('id'=>1,'Name'=>'content','Third column'=>'other content'),
						array('id'=>2,'Name'=>'cdsad','Third column'=>'other evavavav'),
						array('id'=>3,'Name'=>'cdfgfgdf','Third column'=>'other acasveegve'),
					),array(),false);

$table->setVisibleField(array('name'=>'id', 'label'=>'ID'));
$table->setVisibleField(array('name'=>'Name', 'label'=>'Second Column'));
$table->setVisibleField(array('name'=>'Third column', 'label'=>'Second Column'));

$table->renderTable();



?>
