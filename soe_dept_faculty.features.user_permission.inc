<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function soe_dept_faculty_user_default_permissions() {
  $permissions = array();

  // Exported permission: create facultystaff content
  $permissions['create facultystaff content'] = array(
    'name' => 'create facultystaff content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any facultystaff content
  $permissions['edit any facultystaff content'] = array(
    'name' => 'edit any facultystaff content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
