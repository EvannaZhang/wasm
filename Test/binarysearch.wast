(module
 (memory $0 1)
 (data (i32.const 16) "\00\00\00\00\01\00\00\00\02\00\00\00\03\00\00\00\04\00\00\00\05\00\00\00\06\00\00\00\07\00\00\00\08\00\00\00\t\00\00\00\n\00\00\00")
 (export "memory" (memory $0))
 (export "binsearch" (func $binsearch))
 (export "main" (func $main))
 (func $binsearch (; 0 ;) (param $0 i32) (param $1 i32) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (block $label$0
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i32.lt_s
       (local.get $2)
       (i32.const 1)
      )
     )
     (local.set $3
      (i32.add
       (local.get $2)
       (i32.const -1)
      )
     )
     (local.set $4
      (i32.const 0)
     )
     (loop $label$3
      (block $label$4
       (br_if $label$4
        (i32.le_s
         (tee_local $5
          (i32.load
           (i32.add
            (local.get $1)
            (i32.shl
             (tee_local $2
              (i32.div_s
               (i32.add
                (local.get $3)
                (local.get $4)
               )
               (i32.const 2)
              )
             )
             (i32.const 2)
            )
           )
          )
         )
         (local.get $0)
        )
       )
       (local.set $5
        (i32.const -1)
       )
       (local.set $3
        (i32.add
         (local.get $2)
         (i32.const -1)
        )
       )
       (br_if $label$3
        (i32.lt_s
         (local.get $4)
         (local.get $2)
        )
       )
       (br $label$1)
      )
      (br_if $label$0
       (i32.ge_s
        (local.get $5)
        (local.get $0)
       )
      )
      (local.set $4
       (i32.add
        (local.get $2)
        (i32.const 1)
       )
      )
      (br_if $label$3
       (i32.lt_s
        (local.get $2)
        (local.get $3)
       )
      )
     )
    )
    (local.set $5
     (i32.const -1)
    )
   )
   (return
    (local.get $5)
   )
  )
  (local.get $2)
 )
 (func $main (; 1 ;) (result i32)
  (i32.add
   (call $binsearch
    (i32.const 4)
    (i32.const 16)
    (i32.const 11)
   )
   (i32.const -4)
  )
 )
)
