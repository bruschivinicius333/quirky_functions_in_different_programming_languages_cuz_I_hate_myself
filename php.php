<?php

  function somar($arg1 = 0, $arg2 = 0) {    
    try {
      return $arg1 + $arg2;  
    } catch(TypeError) {
      return $arg1 . $arg2;
    }
    
  }

  echo somar(7, "fdherth");

?>
