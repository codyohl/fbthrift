// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::type_complexity)]

pub use self::errors::*;
pub use self::types::*;

/// Thrift type definitions for `module`.
pub mod types {
    #![allow(clippy::redundant_closure)]


    #[derive(Clone, PartialEq)]
    pub struct MyStruct {
        pub boolVal: ::std::primitive::bool,
        pub byteVal: ::std::primitive::i8,
        pub i16Val: ::std::primitive::i16,
        pub i32Val: ::std::primitive::i32,
        pub i64Val: ::std::primitive::i64,
        pub floatVal: ::std::primitive::f32,
        pub doubleVal: ::std::primitive::f64,
        pub stringVal: ::std::string::String,
        pub binaryVal: ::std::vec::Vec<::std::primitive::u8>,
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    #[derive(Clone, PartialEq)]
    pub struct MyStructPatch {
        pub boolVal: patch::types::BoolPatch,
        pub byteVal: patch::types::BytePatch,
        pub i16Val: patch::types::I16Patch,
        pub i32Val: patch::types::I32Patch,
        pub i64Val: patch::types::I64Patch,
        pub floatVal: patch::types::FloatPatch,
        pub doubleVal: patch::types::DoublePatch,
        pub stringVal: patch::types::StringPatch,
        pub binaryVal: patch::types::BinaryPatch,
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    #[derive(Clone, PartialEq)]
    pub struct MyStructValuePatch {
        #[doc = "Assigns to a given struct. If set, all other operations are ignored."]
        pub assign: ::std::option::Option<crate::types::MyStruct>,
        #[doc = "Clears a given struct. Applied first."]
        pub clear: ::std::primitive::bool,
        #[doc = "Patches a given struct. Applied second."]
        pub patch: crate::types::MyStructPatch,
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    #[derive(Clone, PartialEq)]
    pub struct OptionalMyStructValuePatch {
        #[doc = "If the optional value should be cleared. Applied first."]
        pub clear: ::std::primitive::bool,
        #[doc = "The patch to apply to any set value. Applied second."]
        pub patch: crate::types::MyStructValuePatch,
        #[doc = "The value with which to initialize any unset value. Applied third."]
        pub ensure: ::std::option::Option<crate::types::MyStruct>,
        #[doc = "The patch to apply to any set value, including newly set values. Applied forth."]
        pub patchAfter: crate::types::MyStructValuePatch,
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    impl ::std::default::Default for self::MyStruct {
        fn default() -> Self {
            Self {
                boolVal: ::std::default::Default::default(),
                byteVal: ::std::default::Default::default(),
                i16Val: ::std::default::Default::default(),
                i32Val: ::std::default::Default::default(),
                i64Val: ::std::default::Default::default(),
                floatVal: ::std::default::Default::default(),
                doubleVal: ::std::default::Default::default(),
                stringVal: ::std::default::Default::default(),
                binaryVal: ::std::default::Default::default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::MyStruct {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("MyStruct")
                .field("boolVal", &self.boolVal)
                .field("byteVal", &self.byteVal)
                .field("i16Val", &self.i16Val)
                .field("i32Val", &self.i32Val)
                .field("i64Val", &self.i64Val)
                .field("floatVal", &self.floatVal)
                .field("doubleVal", &self.doubleVal)
                .field("stringVal", &self.stringVal)
                .field("binaryVal", &self.binaryVal)
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::MyStruct {}
    unsafe impl ::std::marker::Sync for self::MyStruct {}

    impl ::fbthrift::GetTType for self::MyStruct {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStruct");
            p.write_field_begin("boolVal", ::fbthrift::TType::Bool, 1);
            ::fbthrift::Serialize::write(&self.boolVal, p);
            p.write_field_end();
            p.write_field_begin("byteVal", ::fbthrift::TType::Byte, 2);
            ::fbthrift::Serialize::write(&self.byteVal, p);
            p.write_field_end();
            p.write_field_begin("i16Val", ::fbthrift::TType::I16, 3);
            ::fbthrift::Serialize::write(&self.i16Val, p);
            p.write_field_end();
            p.write_field_begin("i32Val", ::fbthrift::TType::I32, 4);
            ::fbthrift::Serialize::write(&self.i32Val, p);
            p.write_field_end();
            p.write_field_begin("i64Val", ::fbthrift::TType::I64, 5);
            ::fbthrift::Serialize::write(&self.i64Val, p);
            p.write_field_end();
            p.write_field_begin("floatVal", ::fbthrift::TType::Float, 6);
            ::fbthrift::Serialize::write(&self.floatVal, p);
            p.write_field_end();
            p.write_field_begin("doubleVal", ::fbthrift::TType::Double, 7);
            ::fbthrift::Serialize::write(&self.doubleVal, p);
            p.write_field_end();
            p.write_field_begin("stringVal", ::fbthrift::TType::String, 8);
            ::fbthrift::Serialize::write(&self.stringVal, p);
            p.write_field_end();
            p.write_field_begin("binaryVal", ::fbthrift::TType::String, 9);
            ::fbthrift::Serialize::write(&self.binaryVal, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("binaryVal", ::fbthrift::TType::String, 9),
                ::fbthrift::Field::new("boolVal", ::fbthrift::TType::Bool, 1),
                ::fbthrift::Field::new("byteVal", ::fbthrift::TType::Byte, 2),
                ::fbthrift::Field::new("doubleVal", ::fbthrift::TType::Double, 7),
                ::fbthrift::Field::new("floatVal", ::fbthrift::TType::Float, 6),
                ::fbthrift::Field::new("i16Val", ::fbthrift::TType::I16, 3),
                ::fbthrift::Field::new("i32Val", ::fbthrift::TType::I32, 4),
                ::fbthrift::Field::new("i64Val", ::fbthrift::TType::I64, 5),
                ::fbthrift::Field::new("stringVal", ::fbthrift::TType::String, 8),
            ];
            let mut field_boolVal = ::std::option::Option::None;
            let mut field_byteVal = ::std::option::Option::None;
            let mut field_i16Val = ::std::option::Option::None;
            let mut field_i32Val = ::std::option::Option::None;
            let mut field_i64Val = ::std::option::Option::None;
            let mut field_floatVal = ::std::option::Option::None;
            let mut field_doubleVal = ::std::option::Option::None;
            let mut field_stringVal = ::std::option::Option::None;
            let mut field_binaryVal = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Bool, 1) => field_boolVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Byte, 2) => field_byteVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::I16, 3) => field_i16Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::I32, 4) => field_i32Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::I64, 5) => field_i64Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Float, 6) => field_floatVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Double, 7) => field_doubleVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 8) => field_stringVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 9) => field_binaryVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                boolVal: field_boolVal.unwrap_or_default(),
                byteVal: field_byteVal.unwrap_or_default(),
                i16Val: field_i16Val.unwrap_or_default(),
                i32Val: field_i32Val.unwrap_or_default(),
                i64Val: field_i64Val.unwrap_or_default(),
                floatVal: field_floatVal.unwrap_or_default(),
                doubleVal: field_doubleVal.unwrap_or_default(),
                stringVal: field_stringVal.unwrap_or_default(),
                binaryVal: field_binaryVal.unwrap_or_default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }


    impl ::std::default::Default for self::MyStructPatch {
        fn default() -> Self {
            Self {
                boolVal: ::std::default::Default::default(),
                byteVal: ::std::default::Default::default(),
                i16Val: ::std::default::Default::default(),
                i32Val: ::std::default::Default::default(),
                i64Val: ::std::default::Default::default(),
                floatVal: ::std::default::Default::default(),
                doubleVal: ::std::default::Default::default(),
                stringVal: ::std::default::Default::default(),
                binaryVal: ::std::default::Default::default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::MyStructPatch {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("MyStructPatch")
                .field("boolVal", &self.boolVal)
                .field("byteVal", &self.byteVal)
                .field("i16Val", &self.i16Val)
                .field("i32Val", &self.i32Val)
                .field("i64Val", &self.i64Val)
                .field("floatVal", &self.floatVal)
                .field("doubleVal", &self.doubleVal)
                .field("stringVal", &self.stringVal)
                .field("binaryVal", &self.binaryVal)
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::MyStructPatch {}
    unsafe impl ::std::marker::Sync for self::MyStructPatch {}

    impl ::fbthrift::GetTType for self::MyStructPatch {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::MyStructPatch
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStructPatch");
            p.write_field_begin("boolVal", ::fbthrift::TType::Struct, 1);
            ::fbthrift::Serialize::write(&self.boolVal, p);
            p.write_field_end();
            p.write_field_begin("byteVal", ::fbthrift::TType::Struct, 2);
            ::fbthrift::Serialize::write(&self.byteVal, p);
            p.write_field_end();
            p.write_field_begin("i16Val", ::fbthrift::TType::Struct, 3);
            ::fbthrift::Serialize::write(&self.i16Val, p);
            p.write_field_end();
            p.write_field_begin("i32Val", ::fbthrift::TType::Struct, 4);
            ::fbthrift::Serialize::write(&self.i32Val, p);
            p.write_field_end();
            p.write_field_begin("i64Val", ::fbthrift::TType::Struct, 5);
            ::fbthrift::Serialize::write(&self.i64Val, p);
            p.write_field_end();
            p.write_field_begin("floatVal", ::fbthrift::TType::Struct, 6);
            ::fbthrift::Serialize::write(&self.floatVal, p);
            p.write_field_end();
            p.write_field_begin("doubleVal", ::fbthrift::TType::Struct, 7);
            ::fbthrift::Serialize::write(&self.doubleVal, p);
            p.write_field_end();
            p.write_field_begin("stringVal", ::fbthrift::TType::Struct, 8);
            ::fbthrift::Serialize::write(&self.stringVal, p);
            p.write_field_end();
            p.write_field_begin("binaryVal", ::fbthrift::TType::Struct, 9);
            ::fbthrift::Serialize::write(&self.binaryVal, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::MyStructPatch
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("binaryVal", ::fbthrift::TType::Struct, 9),
                ::fbthrift::Field::new("boolVal", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("byteVal", ::fbthrift::TType::Struct, 2),
                ::fbthrift::Field::new("doubleVal", ::fbthrift::TType::Struct, 7),
                ::fbthrift::Field::new("floatVal", ::fbthrift::TType::Struct, 6),
                ::fbthrift::Field::new("i16Val", ::fbthrift::TType::Struct, 3),
                ::fbthrift::Field::new("i32Val", ::fbthrift::TType::Struct, 4),
                ::fbthrift::Field::new("i64Val", ::fbthrift::TType::Struct, 5),
                ::fbthrift::Field::new("stringVal", ::fbthrift::TType::Struct, 8),
            ];
            let mut field_boolVal = ::std::option::Option::None;
            let mut field_byteVal = ::std::option::Option::None;
            let mut field_i16Val = ::std::option::Option::None;
            let mut field_i32Val = ::std::option::Option::None;
            let mut field_i64Val = ::std::option::Option::None;
            let mut field_floatVal = ::std::option::Option::None;
            let mut field_doubleVal = ::std::option::Option::None;
            let mut field_stringVal = ::std::option::Option::None;
            let mut field_binaryVal = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Struct, 1) => field_boolVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 2) => field_byteVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 3) => field_i16Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 4) => field_i32Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 5) => field_i64Val = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 6) => field_floatVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 7) => field_doubleVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 8) => field_stringVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 9) => field_binaryVal = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                boolVal: field_boolVal.unwrap_or_default(),
                byteVal: field_byteVal.unwrap_or_default(),
                i16Val: field_i16Val.unwrap_or_default(),
                i32Val: field_i32Val.unwrap_or_default(),
                i64Val: field_i64Val.unwrap_or_default(),
                floatVal: field_floatVal.unwrap_or_default(),
                doubleVal: field_doubleVal.unwrap_or_default(),
                stringVal: field_stringVal.unwrap_or_default(),
                binaryVal: field_binaryVal.unwrap_or_default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }


    impl ::std::default::Default for self::MyStructValuePatch {
        fn default() -> Self {
            Self {
                assign: ::std::option::Option::None,
                clear: ::std::default::Default::default(),
                patch: ::std::default::Default::default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::MyStructValuePatch {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("MyStructValuePatch")
                .field("assign", &self.assign)
                .field("clear", &self.clear)
                .field("patch", &self.patch)
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::MyStructValuePatch {}
    unsafe impl ::std::marker::Sync for self::MyStructValuePatch {}

    impl ::fbthrift::GetTType for self::MyStructValuePatch {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::MyStructValuePatch
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStructValuePatch");
            if let ::std::option::Option::Some(some) = &self.assign {
                p.write_field_begin("assign", ::fbthrift::TType::Struct, 1);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_begin("clear", ::fbthrift::TType::Bool, 2);
            ::fbthrift::Serialize::write(&self.clear, p);
            p.write_field_end();
            p.write_field_begin("patch", ::fbthrift::TType::Struct, 3);
            ::fbthrift::Serialize::write(&self.patch, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::MyStructValuePatch
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("assign", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("clear", ::fbthrift::TType::Bool, 2),
                ::fbthrift::Field::new("patch", ::fbthrift::TType::Struct, 3),
            ];
            let mut field_assign = ::std::option::Option::None;
            let mut field_clear = ::std::option::Option::None;
            let mut field_patch = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Struct, 1) => field_assign = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Bool, 2) => field_clear = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 3) => field_patch = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                assign: field_assign,
                clear: field_clear.unwrap_or_default(),
                patch: field_patch.unwrap_or_default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }


    impl ::std::default::Default for self::OptionalMyStructValuePatch {
        fn default() -> Self {
            Self {
                clear: ::std::default::Default::default(),
                patch: ::std::default::Default::default(),
                ensure: ::std::option::Option::None,
                patchAfter: ::std::default::Default::default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::OptionalMyStructValuePatch {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("OptionalMyStructValuePatch")
                .field("clear", &self.clear)
                .field("patch", &self.patch)
                .field("ensure", &self.ensure)
                .field("patchAfter", &self.patchAfter)
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::OptionalMyStructValuePatch {}
    unsafe impl ::std::marker::Sync for self::OptionalMyStructValuePatch {}

    impl ::fbthrift::GetTType for self::OptionalMyStructValuePatch {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::OptionalMyStructValuePatch
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("OptionalMyStructValuePatch");
            p.write_field_begin("clear", ::fbthrift::TType::Bool, 2);
            ::fbthrift::Serialize::write(&self.clear, p);
            p.write_field_end();
            p.write_field_begin("patch", ::fbthrift::TType::Struct, 3);
            ::fbthrift::Serialize::write(&self.patch, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.ensure {
                p.write_field_begin("ensure", ::fbthrift::TType::Struct, 1);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_begin("patchAfter", ::fbthrift::TType::Struct, 4);
            ::fbthrift::Serialize::write(&self.patchAfter, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::OptionalMyStructValuePatch
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("clear", ::fbthrift::TType::Bool, 2),
                ::fbthrift::Field::new("ensure", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("patch", ::fbthrift::TType::Struct, 3),
                ::fbthrift::Field::new("patchAfter", ::fbthrift::TType::Struct, 4),
            ];
            let mut field_clear = ::std::option::Option::None;
            let mut field_patch = ::std::option::Option::None;
            let mut field_ensure = ::std::option::Option::None;
            let mut field_patchAfter = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Bool, 2) => field_clear = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 3) => field_patch = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 1) => field_ensure = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 4) => field_patchAfter = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                clear: field_clear.unwrap_or_default(),
                patch: field_patch.unwrap_or_default(),
                ensure: field_ensure,
                patchAfter: field_patchAfter.unwrap_or_default(),
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }


    mod dot_dot {
        #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
        pub struct OtherFields(pub(crate) ());

        #[allow(dead_code)] // if serde isn't being used
        pub(super) fn default_for_serde_deserialize() -> OtherFields {
            OtherFields(())
        }
    }
}

/// Error return types.
pub mod errors {
}
