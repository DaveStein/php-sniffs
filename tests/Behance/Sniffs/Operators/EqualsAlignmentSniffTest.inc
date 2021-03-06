<?php

$i  = 2;  // fail
$i = 2;   // pass


class SomeClass {

  // THESE SHOULD PASS

  const TABLE_CAREER_INFO = 'members_career_info';

  const LOG_CHANNEL_DEFAULT = 'test';
  const CHANNEL_SIGNUP      = 'test';

  const CACHE_FOLLOWED_TEAM_IDS_ = 'net_user_followed_team_ids_';
  const CACHE_TEAM_RELATIONS_    = 'user_team_relations_';

  // this comment shouldn't make the sniff throw an error
  const API_ACCESS_RESTRICTED_GEO        = 'restricted-geo';
  const API_ACCESS_RESTRICTED_LOGGED_OUT = 'logged-out';

  // THESE SHOULD CAUSE ERRORS
  const COVER_SORT_DEFAULT            = 'default';

  const COVER_SORT_APPRECIATIONS = 'appreciations';
  const COVER_SORT_COMMENTS       = 'comments';

  const COVER_SORT_FOLLOWED = 'followed';
  const COVER_SORT_FEATURED_DATE = 'featured_date';
  const COVER_SORT_PUBLISHED            = 'published';

  const LOCK_CREATE_USER_WAIT_MS    = 1000;
  const LOCK_CREATE_USER_MAX_TRIES  = 5;

  /**
   * @return bool
   */
  public function testsShouldPass( $some_var = null, $another_var = null ) {

    $valid = 1;

    $also_fine = 2;

    $valid      = 3;
    $this_works = 4;

    $absolutely_fine = 3;
    $totally_cool    = 4;

    $doesnt = ( $a )
              ? $b
              : $c;
    $matter_at_all = ( $d )
                     ? $e
                     : $f;

    $data = $this->_formatScopesByUserApp( $user );

    $sessions = ( empty( $data['sessions'] ) )
                ? []
                : $data['sessions'];

    $app_scopes = ( empty( $data['app_scopes'] ) )
                  ? []
                  : $data['app_scopes'];

  } // testsShouldPass

  /**
   * @return bool
   */
  public function testsShouldFail( $some_var = null, $another_var = null ) {

    $invalid = 5;
    $broke = 6;

    $broke_by_itself_because_spacing            = 6;

    $broke_by_itself_because_spacing2 =           6;

    $third_segment  = ( !empty( $third_segment ) )
                      ? $third_segment
                      : $this->uri->getRoutedMethod();

    $third_segment1 = ( !empty( $third_segment ) )
                      ? $third_segment
                      : 'index';

    $pre_event->insert_mode   = $post_event->insert_mode   = $insert_mode;

    $pre_event->insert_params = $post_event->insert_params = $db_params;
    $pre_event->insert_mode   = $post_event->insert_mode   = $insert_mode;

    /**
     * @service \Behance\Core\Logger\Logger;
     */
    $container['storage.logger.query'] = ( function( Container $container ) {

      $log_level  = ( $container['base.config']->item( 'log_db_queries' ) )
                    ? Logger\Logger::INFO
                    : Logger\Logger::ERROR;

      $use_stdout = $container['base.config']->app( 'log_stdout', false );
      $log_path   = ( $use_stdout )
                    ? null
                    : $container['base.config']->app( 'log_path' );

      $handler    = ( $use_stdout )
                    ? new \Monolog\Handler\StreamHandler( 'php://stdout', $log_level )
                    : new Logger\Handler\StreamHandler( $log_path, $log_level );

      $logger     = new Logger\Logger( LegacyFactory::CHANNEL_DB, $log_level );
      $formatter  = new Logger\Formatter\KeyValueFormatter();

      $handler->setFormatter( $formatter );

      $logger->pushProcessor( new Logger\Processor\AppProcessor( 'Network' ) );
      $logger->pushProcessor( new Logger\Processor\WebProcessor( $container['request'] ) );
      $logger->pushProcessor( new Logger\Processor\RequestProcessor( $container['request'] ) );
      $logger->pushProcessor( new Logger\Processor\GenericKeyValueProcessor( 'trace_id', $container['base.trace_id_generator']->getTraceId() ) );

      $logger->pushHandler( $handler );

      return $logger;

    } );

    /**
     * @service \Behance\Core\Model\THIS_SHOULD_PASS
     */
    $container['model.manager.registry'] = ( function( Container $container ) {

      $registry = new ModelManagerRegistry( $container['storage.base']->getPool()->getDb(), $container['storage.base']->getPool()->getCache() );
      $registry->register( ReceiptModel::class, $container['storage.base']->getPool()->getDb(), $container['storage.cache.utility'] );

      return $registry;

    } ); // storage.cache.utility


    // The last assignment of the file should be valid too
    $i = 'something';

  } // testsShouldFail

} // SomeClass

// will pass
$i = 2;

// will fail
$i =  2;
$i  = 2;

// will pass
$i = 1;
for ( $i = 3; $i < 3; $i++ ) {}

// will pass
$this->_phpcsFile            = $phpcsFile;
$this->_tokens               = $phpcsFile->getTokens();
$this->_stackPtr             = $stackPtr;
$this->_current_column       = $this->_tokens[ $stackPtr ]['column'];
$this->_current_line         = $this->_tokens[ $stackPtr ]['line'];
$this->_previous_equals_sign = $this->_phpcsFile->findPrevious( T_EQUAL, $this->_stackPtr - 1 );
$code                        = 'EqualsAlignment';
$next_token_column           = $this->_tokens[ $stackPtr + 2 ]['column'];
$desired_column_after_equals = $this->_tokens[ $stackPtr ]['column'] + 2;
