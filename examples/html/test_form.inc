<?php
$handler->closeHead();

$form = new CForm(true);

$form->beginForm('form_test');
$form->beginFieldset();
$form->insertLegend('Static Form');

$form->addField('text','user','Text-Field',array('placeholder'=>'textfield','class'=>'text_class'));
$form->insertArea('area','TextArea',array('class'=>'textarea_class'),'Content');
$form->insertComboList('list', 'Simple List',
						array(1=>'first option', 2=>'second option'),
						array('default'=>1, 'class'=>'combolist_class'));

$form->insertOptionGroup('group', 'Complex List',array(
							'first group' => array(1=>'first option first group', 2=>'second option first group'),
							'second group' => array(3=>'first option second group', 4=>'second option second group'),
						),
						array('default'=>3, 'class'=>'combolist_class'));

$form->insertDataList('datalist', 'DataList',
						array('first option'=>'', 'second option'=>''),
						array('class'=>'combolist_class'));

$form->addMultipleChioice('radio','test_radio','Radio',array('male'=>'Male', 'female'=>'Female'), array('checked'=>'male'));
$form->addMultipleChioice('checkbox','test_radio','Radio',array('male'=>'Male', 'female'=>'Female'));


$form->endFieldset();
$form->beginFieldset();
$form->insertLegend('Query Form');

$form->insertComboList('list', 'Simple List',
						array('query'=>array('table'=>'menu_table', 'field'=>array('description as label','id'),'where'=>array('parent_menu '=>0))),
						array('class'=>'combolist_class'));


$form->insertOptionGroup('group', 'Complex List',
						array(
							'first'=>array('query'=>array('table'=>'menu_table', 'field'=>array('description as label','id'),'where'=>array('parent_menu '=>0))),
							'second'=>array('query'=>array('table'=>'menu_table', 'field'=>array('description as label','id'),'where'=>array('NOT parent_menu '=>0))),
						),
						array('class'=>'combolist_class'));

$form->insertDataList('querydatalist', 'DataList',
						array('query'=>array('table'=>'menu_table', 'field'=>array('description as id','null as label'),'where'=>array('parent_menu '=>0))),
						array('class'=>'combolist_class'));

$form->addAutocompleteField('autcomplete_query', 'Autocomplete', array(
			'query'=>array('table'=>'menu_table', 'field'=>array('description as value','id'),'where'=>array('parent_menu '=>0))
			), array('placeholder'=>'autcomplete'));
			
$form->addAutocompleteField('second autcomplete', 'Autocomplete country', array(
			'query'=>array('table'=>'countries', 'field'=>array('code as id','name_en as value'))
			), array('placeholder'=>'autcomplete country'));			
			
$form->endFieldset();
$form->endForm();

?>
