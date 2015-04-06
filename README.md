php-class
=========

 PhP classes to create dynamic pages quickly and fully costumable.
 Contains the following classes:
- Form generator       (CForm)
- Menu generator       (CMenu)
- Table generator      (CTable)
- Search on database   (CSearch)
- Manager of site      (CPage)
- MySql manager        (CDatabase)

##Configuration
 In your index page instantiates the main class:
```php
include(config/Autoload.php);
include(config/CONSTANT.class);
$template = new CPage($_REQUEST);
```
 or activating the debugging mode (available in each class):
```php
$template = new CPage($_REQUEST,true);
```
 The first two _include_ are needed to automatically load the specified classes need and the configuration of the server.

 Now loads the page needed:
```php
 $template->startPage();
 $pages = $template->getPage();

 foreach($pages as $page)
        if(file_exists($page))
                include($page);
```
 Finally closes the page:
```php
 $template->endPage();
```
 Now you can write your own pages!

##Usage
 You have to put your pages, with the same name, in three different folder:
  - in "page" folder the main content of the page, with ```.inc``` extension;
  - in "php" folder eventually script to execute before the content;
  - in "js" folder all javascript, jquery script you need.

To use that classes you just have to instantiate the one you need in your pages, see some examples below.
On the first line of your html page you have to close the head tag with:
 ```php
$template->renderHead();
```

###Menu
```php
$menu = new CMenu(true);

/***Create your menu***/
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
```
###Form
```php
$form = new CForm();

/***Build your form***/
$form->beginForm('form_test');
$form->beginFieldset();
$form->insertLegend('Static Form');

$form->addField('text','user','Text-Field',array('placeholder'=>'textfield','class'=>'text_class'));

$form->endForm();
```
###Table
```php

$table = new CTable(array(
            array('id'=>1,'Name'=>'content','Third column'=>'other content'),
            array('id'=>2,'Name'=>'cdsad','Third column'=>'other evavavav'),
            array('id'=>3,'Name'=>'cdfgfgdf','Third column'=>'other acasveegve'),
          ),array(),false);

/***Add the column to show***/
$table->setVisibleField(array('name'=>'id', 'label'=>'ID'));
$table->setVisibleField(array('name'=>'Name', 'label'=>'Second Column'));
$table->setVisibleField(array('name'=>'Third column', 'label'=>'Second Column'));

/***Finally plot the table***/
$table->renderTable();
```

###Search
```php

$search = new CSearch($_REQUEST,'page');

$search->beginForm('search_test');
$search->beginFieldset();
$search->insertLegend('Search a Page');

/***Create the form***/
$search->addField('text','label','Label of the page',array('placeholder'=>'textfield','class'=>'text_class'));
$search->addField('submit','submit','');
$search->endFieldset();
$search->endForm();


/***Then print the result of the search***/
$search->setVisibleField(array('name'=>'id', 'label'=>'ID'));
$search->setVisibleField(array('name'=>'label', 'label'=>'Page name'));
$search->setVisibleField(array('name'=>'level', 'label'=>'Level'));

$search->renderTable();
```

For more examples see the folders ```examples```.

##License
 See LICENSE
