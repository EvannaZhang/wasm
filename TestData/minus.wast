(module
 (memory $0 1)
 (export "memory" (memory $0))
 (export "func" (func $func))
 (export "main" (func $main))
 (func $func (; 0 ;) (param $0 i32) (param $1 i32) (result i32)
  (i32.sub
   (local.get $0)
   (local.get $1)
  )
 )
 (func $main (; 1 ;) (result i32)
  (local $0 i32)
  (select
   (i32.const 0)
   (tee_local $0
    (call $func
     (call $func
      (i32.const 10)
      (i32.const 4)
     )
     (call $func
      (i32.const 4)
      (i32.const 223)
     )
    )
   )
   (i32.eq
    (local.get $0)
    (i32.const 225)
   )
  )
 )
)