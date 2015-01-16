<?php
$handler->closeHead();

$menu = new CMenu(true, array('div'=>array('class'=> 'mainmenu')));
        $menu->renderMenu(array(
                                                    array('label'=>'Test Menu', 'url'=>array('r'=>'test_menu')),
                                                    array('label'=>'Test Form', 'url'=>array('r'=>'test_form'), 
                                                        'items'=>array(
                                                            array('label'=>'Test Insert Form', 'url'=>array('r'=>'test_insert_form')),
                                                            array('label'=>'Test Edit Form', 'url'=>array('r'=>'test_edit_form', 'id'=>'1')),
                                                    )),
                                                    array('label'=>'Test Table', 'url'=>array('r'=>'test_table'),
                                                        'items'=>array(
                                                                array('label'=>'Test Search', 'url'=>array('r'=>'test_search_form')),
                                                    )),
                                                    array('label'=>'Null Page', 'url'=>array('r'=>'#')),
        ));

?>
