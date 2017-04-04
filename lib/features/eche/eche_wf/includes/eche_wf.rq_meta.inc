<?php
/**
 * @file
 * eche_wf.rq_meta.inc
 */

/**
 * Class EcheWfRqMeta.
 *
 * Responsible for storage and retrieval of Rector's Quiz metadata.
 */
class EcheWfRqMeta {

  protected $cid;
  protected $nid;

  /**
   * Construct.
   */
  public function __construct($nid, $cid) {
    $this->cid = $cid;
    $this->nid = $nid;
  }

  /**
   * Load all metadata for a node.
   */
  public function loadAll() {
    $results = db_query('SELECT * FROM {eche_wf_component_rq_meta} WHERE nid = :nid',
      array(':nid' => $this->nid));
    $data = array();
    foreach ($results as $row) {
      foreach ($row as $column_name => $column_data) {
        if (eche_wf_meta_is_serialized($column_data)) {
          $column_data = unserialize($column_data);
        }
        $data[$row->cid][$column_name] = $column_data;
      }
    }
    return $data;
  }

  /**
   * Load metadata for node and component id (cid).
   */
  public function load() {
    $results = db_query('SELECT * FROM {eche_wf_component_rq_meta} WHERE nid = :nid AND cid=:cid', array(
      ':nid' => $this->nid,
      ':cid' => $this->cid,
    ));
    $data = array();
    foreach ($results as $row) {
      foreach ($row as $column_name => $column_data) {
        if (eche_wf_meta_is_serialized($column_data)) {
          $column_data = unserialize($column_data);
        }
        $data[$column_name] = $column_data;
      }
    }
    return $data;
  }

  /**
   * Save metadata for node and component id (cid).
   */
  public function save($meta) {
// @codingStandardsIgnoreStart
    db_query(
      'INSERT INTO {eche_wf_component_rq_meta} (nid, cid, meta)
       VALUES (:nid, :cid, :meta)
       ON DUPLICATE KEY UPDATE meta=:meta',
      array(
        ':nid' => $this->nid,
        ':cid' => $this->cid,
        ':meta' => serialize($meta),
      )
    );
// @codingStandardsIgnoreEnd
  }

}
