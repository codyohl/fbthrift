<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * TestEnum
 */
enum TestEnum: int {
  UNKNOWN = 0;
  NEW_VALUE = 1;
}

enum TestUnionEnum: int {
  _EMPTY_ = 0;
  int_value = 1;
  str_value = 2;
  double_value = 3;
  list_of_strings = 4;
  map_of_string_to_ints = 5;
  struct_foo = 6;
}

/**
 * Original thrift struct:-
 * TestUnion
 */
class TestUnion implements \IThriftStruct, \IThriftUnion<TestUnionEnum>, \IThriftShapishStruct {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'int_value',
      'union' => true,
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'str_value',
      'union' => true,
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'double_value',
      'union' => true,
      'type' => \TType::DOUBLE,
    ),
    4 => shape(
      'var' => 'list_of_strings',
      'union' => true,
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'array',
    ),
    5 => shape(
      'var' => 'map_of_string_to_ints',
      'union' => true,
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'array',
    ),
    6 => shape(
      'var' => 'struct_foo',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'int_value' => 1,
    'str_value' => 2,
    'double_value' => 3,
    'list_of_strings' => 4,
    'map_of_string_to_ints' => 5,
    'struct_foo' => 6,
  ];

  const type TConstructorShape = shape(
    ?'int_value' => ?int,
    ?'str_value' => ?string,
    ?'double_value' => ?float,
    ?'list_of_strings' => ?varray<string>,
    ?'map_of_string_to_ints' => ?darray<string, int>,
    ?'struct_foo' => ?Foo,
  );

  const type TShape = shape(
    ?'int_value' => ?int,
    ?'str_value' => ?string,
    ?'double_value' => ?float,
    ?'list_of_strings' => ?varray<string>,
    ?'map_of_string_to_ints' => ?darray<string, int>,
    ?'struct_foo' => ?Foo::TShape,
  );
  const int STRUCTURAL_ID = 872350750526219001;
  /**
   * Original thrift field:-
   * 1: i32 int_value
   */
  public ?int $int_value;
  /**
   * Original thrift field:-
   * 2: string str_value
   */
  public ?string $str_value;
  /**
   * Original thrift field:-
   * 3: double double_value
   */
  public ?float $double_value;
  /**
   * Original thrift field:-
   * 4: list<string> list_of_strings
   */
  public ?varray<string> $list_of_strings;
  /**
   * Original thrift field:-
   * 5: map<string, i32> map_of_string_to_ints
   */
  public ?darray<string, int> $map_of_string_to_ints;
  /**
   * Original thrift field:-
   * 6: struct module.Foo struct_foo
   */
  public ?Foo $struct_foo;
  protected TestUnionEnum $_type = TestUnionEnum::_EMPTY_;

  <<__Rx>>
  public function __construct(?int $int_value = null, ?string $str_value = null, ?float $double_value = null, ?varray<string> $list_of_strings = null, ?darray<string, int> $map_of_string_to_ints = null, ?Foo $struct_foo = null  ) {
    $this->_type = TestUnionEnum::_EMPTY_;
    if ($int_value !== null) {
      $this->int_value = $int_value;
      $this->_type = TestUnionEnum::int_value;
    }
    if ($str_value !== null) {
      $this->str_value = $str_value;
      $this->_type = TestUnionEnum::str_value;
    }
    if ($double_value !== null) {
      $this->double_value = $double_value;
      $this->_type = TestUnionEnum::double_value;
    }
    if ($list_of_strings !== null) {
      $this->list_of_strings = $list_of_strings;
      $this->_type = TestUnionEnum::list_of_strings;
    }
    if ($map_of_string_to_ints !== null) {
      $this->map_of_string_to_ints = $map_of_string_to_ints;
      $this->_type = TestUnionEnum::map_of_string_to_ints;
    }
    if ($struct_foo !== null) {
      $this->struct_foo = $struct_foo;
      $this->_type = TestUnionEnum::struct_foo;
    }
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'int_value'),
      Shapes::idx($shape, 'str_value'),
      Shapes::idx($shape, 'double_value'),
      Shapes::idx($shape, 'list_of_strings'),
      Shapes::idx($shape, 'map_of_string_to_ints'),
      Shapes::idx($shape, 'struct_foo'),
    );
  }

  public function getName(): string {
    return 'TestUnion';
  }

  public function getType(): TestUnionEnum {
    return $this->_type;
  }

  public function set_int_value(int $int_value): this {
    $this->_type = TestUnionEnum::int_value;
    $this->int_value = $int_value;
    return $this;
  }

  public function get_int_value(): int {
    invariant(
      $this->_type === TestUnionEnum::int_value,
      'get_int_value called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->int_value as nonnull;
  }

  public function set_str_value(string $str_value): this {
    $this->_type = TestUnionEnum::str_value;
    $this->str_value = $str_value;
    return $this;
  }

  public function get_str_value(): string {
    invariant(
      $this->_type === TestUnionEnum::str_value,
      'get_str_value called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->str_value as nonnull;
  }

  public function set_double_value(float $double_value): this {
    $this->_type = TestUnionEnum::double_value;
    $this->double_value = $double_value;
    return $this;
  }

  public function get_double_value(): float {
    invariant(
      $this->_type === TestUnionEnum::double_value,
      'get_double_value called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->double_value as nonnull;
  }

  public function set_list_of_strings(varray<string> $list_of_strings): this {
    $this->_type = TestUnionEnum::list_of_strings;
    $this->list_of_strings = $list_of_strings;
    return $this;
  }

  public function get_list_of_strings(): varray<string> {
    invariant(
      $this->_type === TestUnionEnum::list_of_strings,
      'get_list_of_strings called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->list_of_strings as nonnull;
  }

  public function set_map_of_string_to_ints(darray<string, int> $map_of_string_to_ints): this {
    $this->_type = TestUnionEnum::map_of_string_to_ints;
    $this->map_of_string_to_ints = $map_of_string_to_ints;
    return $this;
  }

  public function get_map_of_string_to_ints(): darray<string, int> {
    invariant(
      $this->_type === TestUnionEnum::map_of_string_to_ints,
      'get_map_of_string_to_ints called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->map_of_string_to_ints as nonnull;
  }

  public function set_struct_foo(Foo $struct_foo): this {
    $this->_type = TestUnionEnum::struct_foo;
    $this->struct_foo = $struct_foo;
    return $this;
  }

  public function get_struct_foo(): Foo {
    invariant(
      $this->_type === TestUnionEnum::struct_foo,
      'get_struct_foo called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->struct_foo as nonnull;
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'int_value' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'str_value' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'double_value' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_strings' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_ints' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'struct_foo' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->_type = TestUnionEnum::_EMPTY_;
    if (Shapes::idx($shape, 'int_value') !== null) {
      $me->int_value = $shape['int_value'];
      $me->_type = TestUnionEnum::int_value;
    }
    if (Shapes::idx($shape, 'str_value') !== null) {
      $me->str_value = $shape['str_value'];
      $me->_type = TestUnionEnum::str_value;
    }
    if (Shapes::idx($shape, 'double_value') !== null) {
      $me->double_value = $shape['double_value'];
      $me->_type = TestUnionEnum::double_value;
    }
    if (Shapes::idx($shape, 'list_of_strings') !== null) {
      $me->list_of_strings = $shape['list_of_strings'];
      $me->_type = TestUnionEnum::list_of_strings;
    }
    if (Shapes::idx($shape, 'map_of_string_to_ints') !== null) {
      $me->map_of_string_to_ints = $shape['map_of_string_to_ints'];
      $me->_type = TestUnionEnum::map_of_string_to_ints;
    }
    if (Shapes::idx($shape, 'struct_foo') !== null) {
      $me->struct_foo = Foo::__fromShape($shape['struct_foo']);
      $me->_type = TestUnionEnum::struct_foo;
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'int_value' => $this->int_value,
      'str_value' => $this->str_value,
      'double_value' => $this->double_value,
      'list_of_strings' => $this->list_of_strings,
      'map_of_string_to_ints' => $this->map_of_string_to_ints,
      'struct_foo' => $this->struct_foo?->__toShape(),
    );
  }
}

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'array',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => shape(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => shape(
            'type' => \TType::I32,
          ),
          'format' => 'array',
        ),
        'format' => 'array',
      ),
      'format' => 'array',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::I64,
    ),
    4 => shape(
      'var' => 'd',
      'type' => \TType::BOOL,
    ),
    5 => shape(
      'var' => 'str_value',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
    'str_value' => 5,
  ];

  const type TConstructorShape = shape(
    ?'a' => varray<string>,
    ?'b' => ?darray<string, varray<dict<int, bool>>>,
    ?'c' => int,
    ?'d' => bool,
    ?'str_value' => string,
  );

  const type TShape = shape(
    'a' => varray<string>,
    ?'b' => ?darray<string, varray<dict<int, bool>>>,
    'c' => int,
    'd' => bool,
    'str_value' => string,
  );
  const int STRUCTURAL_ID = 5952652426480946901;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public varray<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public ?darray<string, varray<dict<int, bool>>> $b;
  /**
   * Original thrift field:-
   * 3: i64 c
   */
  public int $c;
  /**
   * Original thrift field:-
   * 4: bool d
   */
  public bool $d;
  /**
   * Original thrift field:-
   * 5: string str_value
   */
  public string $str_value;

  <<__Rx>>
  public function __construct(?varray<string> $a = null, ?darray<string, varray<dict<int, bool>>> $b = null, ?int $c = null, ?bool $d = null, ?string $str_value = null  ) {
    $this->a = $a ?? varray[];
    $this->b = $b;
    $this->c = $c ?? 7;
    $this->d = $d ?? false;
    $this->str_value = $str_value ?? "hello";
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
      Shapes::idx($shape, 'c'),
      Shapes::idx($shape, 'd'),
      Shapes::idx($shape, 'str_value'),
    );
  }

  public function getName(): string {
    return 'Foo';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'a' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'b' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'c' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'd' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'str_value' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->a = $shape['a'];
    if (Shapes::idx($shape, 'b') !== null) {
      $me->b = $shape['b'];
    }
    $me->c = $shape['c'];
    $me->d = $shape['d'];
    $me->str_value = $shape['str_value'];
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'b' => $this->b,
      'c' => $this->c,
      'd' => $this->d,
      'str_value' => $this->str_value,
    );
  }
}

/**
 * Original thrift struct:-
 * TestStruct
 */
class TestStruct implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'foo_struct',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    2 => shape(
      'var' => 'union_value',
      'type' => \TType::STRUCT,
      'class' => TestUnion::class,
    ),
    3 => shape(
      'var' => 'struct_of_self',
      'type' => \TType::STRUCT,
      'class' => TestStruct::class,
    ),
    4 => shape(
      'var' => 'list_of_struct_foo',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'format' => 'array',
    ),
    5 => shape(
      'var' => 'map_of_string_to_struct_foo',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'format' => 'array',
    ),
    6 => shape(
      'var' => 'list_of_struct_self',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => TestStruct::class,
      ),
      'format' => 'array',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'foo_struct' => 1,
    'union_value' => 2,
    'struct_of_self' => 3,
    'list_of_struct_foo' => 4,
    'map_of_string_to_struct_foo' => 5,
    'list_of_struct_self' => 6,
  ];

  const type TConstructorShape = shape(
    ?'foo_struct' => ?Foo,
    ?'union_value' => ?TestUnion,
    ?'struct_of_self' => ?TestStruct,
    ?'list_of_struct_foo' => varray<Foo>,
    ?'map_of_string_to_struct_foo' => darray<string, Foo>,
    ?'list_of_struct_self' => varray<TestStruct>,
  );

  const type TShape = shape(
    ?'foo_struct' => ?Foo::TShape,
    ?'union_value' => ?TestUnion::TShape,
    ?'struct_of_self' => ?TestStruct::TShape,
    'list_of_struct_foo' => varray<Foo::TShape>,
    'map_of_string_to_struct_foo' => darray<string, Foo::TShape>,
    'list_of_struct_self' => varray<TestStruct::TShape>,
  );
  const int STRUCTURAL_ID = 6681594433718475023;
  /**
   * Original thrift field:-
   * 1: struct module.Foo foo_struct
   */
  public ?Foo $foo_struct;
  /**
   * Original thrift field:-
   * 2: struct module.TestUnion union_value
   */
  public ?TestUnion $union_value;
  /**
   * Original thrift field:-
   * 3: struct module.TestStruct struct_of_self
   */
  public ?TestStruct $struct_of_self;
  /**
   * Original thrift field:-
   * 4: list<struct module.Foo> list_of_struct_foo
   */
  public varray<Foo> $list_of_struct_foo;
  /**
   * Original thrift field:-
   * 5: map<string, struct module.Foo> map_of_string_to_struct_foo
   */
  public darray<string, Foo> $map_of_string_to_struct_foo;
  /**
   * Original thrift field:-
   * 6: list<struct module.TestStruct> list_of_struct_self
   */
  public varray<TestStruct> $list_of_struct_self;

  <<__Rx>>
  public function __construct(?Foo $foo_struct = null, ?TestUnion $union_value = null, ?TestStruct $struct_of_self = null, ?varray<Foo> $list_of_struct_foo = null, ?darray<string, Foo> $map_of_string_to_struct_foo = null, ?varray<TestStruct> $list_of_struct_self = null  ) {
    $this->foo_struct = $foo_struct;
    $this->union_value = $union_value;
    $this->struct_of_self = $struct_of_self;
    $this->list_of_struct_foo = $list_of_struct_foo ?? varray[];
    $this->map_of_string_to_struct_foo = $map_of_string_to_struct_foo ?? darray[];
    $this->list_of_struct_self = $list_of_struct_self ?? varray[];
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'foo_struct'),
      Shapes::idx($shape, 'union_value'),
      Shapes::idx($shape, 'struct_of_self'),
      Shapes::idx($shape, 'list_of_struct_foo'),
      Shapes::idx($shape, 'map_of_string_to_struct_foo'),
      Shapes::idx($shape, 'list_of_struct_self'),
    );
  }

  public function getName(): string {
    return 'TestStruct';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'foo_struct' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'union_value' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'struct_of_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_struct_foo' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_struct_foo' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_struct_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    if (Shapes::idx($shape, 'foo_struct') !== null) {
      $me->foo_struct = Foo::__fromShape($shape['foo_struct']);
    }
    if (Shapes::idx($shape, 'union_value') !== null) {
      $me->union_value = TestUnion::__fromShape($shape['union_value']);
    }
    if (Shapes::idx($shape, 'struct_of_self') !== null) {
      $me->struct_of_self = TestStruct::__fromShape($shape['struct_of_self']);
    }
    $me->list_of_struct_foo = $shape['list_of_struct_foo']
      |> Vec\map(
        $$,
        $_val0 ==> $_val0
          |> Foo::__fromShape($$),
      ) |> varray($$);
    $me->map_of_string_to_struct_foo = $shape['map_of_string_to_struct_foo']
      |> Dict\map(
        $$,
        $_val1 ==> $_val1
          |> Foo::__fromShape($$),
      ) |> darray($$);
    $me->list_of_struct_self = $shape['list_of_struct_self']
      |> Vec\map(
        $$,
        $_val2 ==> $_val2
          |> TestStruct::__fromShape($$),
      ) |> varray($$);
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'foo_struct' => $this->foo_struct?->__toShape(),
      'union_value' => $this->union_value?->__toShape(),
      'struct_of_self' => $this->struct_of_self?->__toShape(),
      'list_of_struct_foo' => $this->list_of_struct_foo
        |> (
          Vec\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ) |> varray($$)
        ),
      'map_of_string_to_struct_foo' => $this->map_of_string_to_struct_foo
        |> (
          Dict\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ) |> darray($$)
        ),
      'list_of_struct_self' => $this->list_of_struct_self
        |> (
          Vec\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ) |> varray($$)
        ),
    );
  }
}

/**
 * Original thrift exception:-
 * Baz
 */
class Baz extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'some_field',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    3 => shape(
      'var' => 'some_container',
      'type' => \TType::SET,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'array',
    ),
    4 => shape(
      'var' => 'code',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
    'some_field' => 2,
    'some_container' => 3,
    'code' => 4,
  ];

  const type TConstructorShape = shape(
    ?'message' => string,
    ?'some_field' => ?Foo,
    ?'some_container' => dict<string, bool>,
    ?'code' => int,
  );

  const int STRUCTURAL_ID = 1663976252517274137;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;
  /**
   * Original thrift field:-
   * 2: struct module.Foo some_field
   */
  public ?Foo $some_field;
  /**
   * Original thrift field:-
   * 3: set<string> some_container
   */
  public dict<string, bool> $some_container;
  /**
   * Original thrift field:-
   * 4: i32 code
   */
  public int $code;

  <<__Rx>>
  public function __construct(?string $message = null, ?Foo $some_field = null, ?dict<string, bool> $some_container = null, ?int $code = null  ) {
    parent::__construct();
    $this->message = $message ?? '';
    $this->some_field = $some_field;
    $this->some_container = $some_container ?? dict[];
    $this->code = $code ?? 0;
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'message'),
      Shapes::idx($shape, 'some_field'),
      Shapes::idx($shape, 'some_container'),
      Shapes::idx($shape, 'code'),
    );
  }

  public function getName(): string {
    return 'Baz';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'message' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'some_field' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'some_container' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'code' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

}

/**
 * Original thrift exception:-
 * OptBaz
 */
class OptBaz extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];

  const type TConstructorShape = shape(
    ?'message' => ?string,
  );

  const int STRUCTURAL_ID = 546500496397478593;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  <<__Rx>>
  public function __construct(?string $message = null  ) {
    parent::__construct();
    $this->message = $message ?? '';
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'message'),
    );
  }

  public function getName(): string {
    return 'OptBaz';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'message' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

}

