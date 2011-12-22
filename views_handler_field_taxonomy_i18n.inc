<?php

class views_handler_field_taxonomy_i18n extends views_handler_field_taxonomy {
  function render($values) {
    $tid = $values->{$this->aliases['tid']};
    $string_name = "taxonomy:term:$tid:name";
    $term_name = i18nstrings($string_name, $values->{$this->field_alias});
    return $this->render_link($term_name, $values);
  }
}

?>