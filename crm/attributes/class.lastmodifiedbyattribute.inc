<?php

class lastModifiedByAttribute extends atkManyToOneRelation
{

  function lastModifiedByAttribute($name,$destination, $flags="")
  {
    $this->atkManyToOneRelation($name,$destination, $flags|AF_FORCE_LOAD|AF_HIDE_LIST|AF_READONLY);
  }
  
  function needsUpdate() { return true; }

  function needsInsert() { return true; }

  function value2db($rec)
  {
    $user = getUser();
    return $user["id"];
  }
}
?>