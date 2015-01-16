<?php
$handler->closeHead();
$search = new CSearch($_REQUEST,'page',array(), true);


$search->beginForm('search_test');
$search->beginFieldset();
$search->insertLegend('Search a Page');

$search->addField('text','label','Label of the page',array('placeholder'=>'textfield','class'=>'text_class'));
$search->addField('submit','submit','');
$search->endFieldset();
$search->endForm();




$search->setVisibleField(array('name'=>'id', 'label'=>'ID'));
$search->setVisibleField(array('name'=>'label', 'label'=>'Page name'));
$search->setVisibleField(array('name'=>'level', 'label'=>'Permission Level'));

$search->renderTable();



?>
