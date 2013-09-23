<?php
/**
 * @file
 * campkitlite_sessions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function campkitlite_sessions_taxonomy_default_vocabularies() {
  return array(
    'session_type' => array(
      'name' => 'Session type',
      'machine_name' => 'session_type',
      'description' => 'Different types of session',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
