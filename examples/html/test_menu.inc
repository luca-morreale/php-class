<?php
$handler->closeHead();

echo CHtml::tag('p',array(),'Now will be created a Menu static');

$menu = new CMenu(true);
$menu->renderMenu(array(
					array('label'=>'First Element','url'=>array('r'=>'#'),
                                'items'=>array(
                                    array('label'=>'Submenu_1','url'=>array('r'=>'test_menu'))
                                )
                    ),
                    array('label'=>'Second Element','url'=>array('r'=>'#'),
                                'items'=>array(
                                    array('label'=>'Submenu_2','url'=>array('r'=>'test_form'))
                                )
                    ),)
                );

echo CHtml::tag('p',array(),'Now will be created a Menu from a query');

$menu->renderMenu(array(
                'query'=>array(
                    'table'=>'menu_table', 'field'=>array('description as label','url as page'),'where'=>array('level <'=>5)
                )
            ));

?>
