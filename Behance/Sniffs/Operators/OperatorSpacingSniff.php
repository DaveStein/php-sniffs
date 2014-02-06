<?php
class Behance_Sniffs_Operators_OperatorSpacingSniff implements PHP_CodeSniffer_Sniff {

  /**
   * Returns the token types that this sniff is interested in.
   *
   * @return array(int)
   */
  public function register() {

    return array_diff( array_unique( array_merge(
        [ T_STRING_CONCAT ],
        PHP_CodeSniffer_Tokens::$assignmentTokens,
        PHP_CodeSniffer_Tokens::$comparisonTokens,
        PHP_CodeSniffer_Tokens::$equalityTokens,
        PHP_CodeSniffer_Tokens::$operators
    ) ), [ T_BITWISE_AND, T_MINUS ] );

  } // register

  /**
   * Processes the tokens that this sniff is interested in.
   *
   * @param PHP_CodeSniffer_File $phpcsFile The file where the token was found.
   * @param int                  $stackPtr  The position in the stack where
   *                                        the token was found.
   *
   * @return void
   */
  public function process( PHP_CodeSniffer_File $phpcsFile, $stackPtr ) {

    $tokens = $phpcsFile->getTokens();

    if ( $tokens[ $stackPtr - 1 ]['code'] !== T_WHITESPACE ) {
      $error = '"%s" operator requires whitespace before it';
      $data  = [ $tokens[ $stackPtr ]['content'] ];
      $phpcsFile->addError( $error, $stackPtr, 'OperatorPadding', $data );
    }

    if ( $tokens[ $stackPtr + 1 ]['code'] !== T_WHITESPACE ) {
      $error = '"%s" operator requires whitespace after it';
      $data  = [ $tokens[ $stackPtr ]['content'] ];
      $phpcsFile->addError( $error, $stackPtr, 'OperatorPadding', $data );
    }

  } // process

} // Behance_Sniffs_Operators_OperatorSpacingSniff