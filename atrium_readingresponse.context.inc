<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_readingresponse_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'readingresponse_listing';
  $context->description = '';
  $context->tag = 'Reading Response';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'readingresponse' => 'readingresponse',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'readingresponse_listing' => 'readingresponse_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-readingresponse_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'readingresponse_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-readingresponse_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'readingresponse_listing-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'readingresponse',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Reading Response');
  $export['readingresponse_listing'] = $context;

  return $export;
}
