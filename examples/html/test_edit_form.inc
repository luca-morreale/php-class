<?php
$handler->closeHead();

$form = new CEditForm($_REQUEST, 'insert_form', true, true);


$form->beginForm('form_test');
$form->beginFieldset();
$form->insertLegend('Insert Form');

$form->addField('text','text','Text-Field',array('placeholder'=>'textfield','class'=>'text_class', 'required'=>1));
$form->insertArea('big_text','TextArea',array('class'=>'textarea_class'),'Content');
$form->insertComboList('choice', 'Simple List',
                        array(1=>'first option', 2=>'second option'),
                        array('class'=>'combolist_class', 'required'=>1));


$form->addMultipleChioice('radio','radio_choice','Radio',array('M'=>'Male', 'F'=>'Female'), array('required'=>1));

$form->addField('submit','submit','');

$form->endFieldset();
$form->endForm();

?>
