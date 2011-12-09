<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_readingresponse_user_default_permissions() {
  $permissions = array();

  // Exported permission: create readingresponse content
  $permissions['create readingresponse content'] = array(
    'name' => 'create readingresponse content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own readingresponse content
  $permissions['delete own readingresponse content'] = array(
    'name' => 'delete own readingresponse content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own readingresponse content
  $permissions['edit own readingresponse content'] = array(
    'name' => 'edit own readingresponse content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
