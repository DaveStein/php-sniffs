<?php

/**
 * GOOD - THE CODE BELOW IS PROPERLY FORMATTED AND SHOULD NOT PRODUCE ANY ERRORS
 */

$resume_manager->expects( $this->once() )
  ->method( 'readResume' )
  ->with( $resume->id )
  ->will( $this->returnValue( $resume ) );

$manager->expects( $this->once() )
  ->method( 'getJobsByUser' )
  ->with( $user )
  ->will( $this->returnValue( $jobs ) );

$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement( $this->_somePrivateMethod );
$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement( $this->_somePrivateMethod->$this->_someOtherPrivateMethod->a_property );

$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement(
    $this->_somePrivateMethod
      ->_someOtherPrivateMethod
      ->a_property
);

$controller->expects( $this->once() )
  ->method( '_redirect' )
  ->with( Net_Urls::ACCOUNT_NOTIFICATIONS );

$controller->expects( $this->any() )
  ->method( '_renderMustachePartial' )
  ->will( $this->returnCallback( function( $arg1, $arg2 ) use ( &$template, &$view_vars ) {
      $view_vars = array_merge( $view_vars, $arg2 );
      $arg1; // this is here to prevent phpmd from complaining about an unused var
  } ) );

$resume->method( 'getSectionsByKey' )
  ->with( $sub_entity_key )
  ->willReturn( [] );

$entity_manager = $this->_getSubEntityManagerByType( $sub_entity_key, [ $manager_method ] );
$entity_manager->expects( $this->once() )
  ->method( $manager_method )
  ->willReturn( $resource );

/**
 * STATEMENTS BELOW SHOULD CONTAIN AT LEAST ONE ERROR
 */

$resume_manager->expects( $this->once() )
   ->method( 'readResume' )
  ->with( $resume->id )
  ->will( $this->returnValue( $resume ) );

$resume_manager->expects( $this->once() )
  ->method( 'readResume' )
   ->with( $resume->id )
  ->will( $this->returnValue( $resume ) );

$resume_manager->expects( $this->once() )
  ->method( 'readResume' )
  ->with( $resume->id )
   ->will( $this->returnValue( $resume ) );

$resume_manager->expects( $this->once() )
  ->method( 'readResume' )
   ->with( $resume->id )
   ->will( $this->returnValue( $resume ) );

$resume_manager->expects( $this->once() )
   ->method( 'readResume' )
   ->with( $resume->id )
  ->will( $this->returnValue( $resume ) );

$manager->expects( $this->once() )
  ->method( 'getJobsByUser' )
  ->with( $user )
   ->will( $this->returnValue( $jobs ) );

$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement(
    $this->_somePrivateMethod
       ->_someOtherPrivateMethod
      ->a_property
);

$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement(
    $this->_somePrivateMethod
      ->_someOtherPrivateMethod
       ->a_property
);

$this->_start_of_statement = $this->_phpcsFile->findStartOfStatement(
    $this->_somePrivateMethod
         ->_someOtherPrivateMethod
         ->a_property
);

$controller->expects( $this->once() )
   ->method( '_redirect' )
  ->with( Net_Urls::ACCOUNT_NOTIFICATIONS );

$controller->expects( $this->once() )
  ->method( '_redirect' )
   ->with( Net_Urls::ACCOUNT_NOTIFICATIONS );

$controller->expects( $this->once() )
           ->method( '_redirect' )
           ->with( Net_Urls::ACCOUNT_NOTIFICATIONS );

$controller->expects( $this->any() )
  ->method( '_renderMustachePartial' )
  ->will( $this->returnCallback( function( $arg1, $arg2 ) use ( &$template, &$view_vars ) {
      $view_vars = array_merge( $view_vars, $arg2 );
      $arg1; // this is here to prevent phpmd from complaining about an unused var
  } ) );

$controller->expects( $this->any() )
   ->method( '_renderMustachePartial' )
  ->will( $this->returnCallback( function( $arg1, $arg2 ) use ( &$template, &$view_vars ) {
      $view_vars = array_merge( $view_vars, $arg2 );
      $arg1; // this is here to prevent phpmd from complaining about an unused var
  } ) );

$controller->expects( $this->any() )
  ->method( '_renderMustachePartial' )
   ->will( $this->returnCallback( function( $arg1, $arg2 ) use ( &$template, &$view_vars ) {
      $view_vars = array_merge( $view_vars, $arg2 );
      $arg1; // this is here to prevent phpmd from complaining about an unused var
  } ) );

$controller->expects( $this->any() )
           ->method( '_renderMustachePartial' )
           ->will( $this->returnCallback( function( $arg1, $arg2 ) use ( &$template, &$view_vars ) {
      $view_vars = array_merge( $view_vars, $arg2 );
      $arg1; // this is here to prevent phpmd from complaining about an unused var
  } ) );

$resume->method( 'getSectionsByKey' )
   ->with( $sub_entity_key )
  ->willReturn( [] );

$resume->method( 'getSectionsByKey' )
  ->with( $sub_entity_key )
   ->willReturn( [] );

$resume->method( 'getSectionsByKey' )
       ->with( $sub_entity_key )
       ->willReturn( [] );

$resume->method( 'getSectionsByKey' )
->with( $sub_entity_key )
->willReturn( [] );
