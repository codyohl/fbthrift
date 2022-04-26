/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basic;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyStruct implements TBase, java.io.Serializable, Cloneable, Comparable<MyStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
  private static final TField MY_INT_FIELD_FIELD_DESC = new TField("myIntField", TType.I64, (short)1);
  private static final TField MY_STRING_FIELD_FIELD_DESC = new TField("myStringField", TType.STRING, (short)2);

  public long myIntField;
  public String myStringField;
  public static final int MYINTFIELD = 1;
  public static final int MYSTRINGFIELD = 2;

  // isset id assignments
  private static final int __MYINTFIELD_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(MYINTFIELD, new FieldMetaData("myIntField", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I64)));
    tmpMetaDataMap.put(MYSTRINGFIELD, new FieldMetaData("myStringField", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(MyStruct.class, metaDataMap);
  }

  public MyStruct() {
  }

  public MyStruct(
      long myIntField,
      String myStringField) {
    this();
    this.myIntField = myIntField;
    setMyIntFieldIsSet(true);
    this.myStringField = myStringField;
  }

  public static class Builder {
    private long myIntField;
    private String myStringField;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setMyIntField(final long myIntField) {
      this.myIntField = myIntField;
      __optional_isset.set(__MYINTFIELD_ISSET_ID, true);
      return this;
    }

    public Builder setMyStringField(final String myStringField) {
      this.myStringField = myStringField;
      return this;
    }

    public MyStruct build() {
      MyStruct result = new MyStruct();
      if (__optional_isset.get(__MYINTFIELD_ISSET_ID)) {
        result.setMyIntField(this.myIntField);
      }
      result.setMyStringField(this.myStringField);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStruct(MyStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.myIntField = TBaseHelper.deepCopy(other.myIntField);
    if (other.isSetMyStringField()) {
      this.myStringField = TBaseHelper.deepCopy(other.myStringField);
    }
  }

  public MyStruct deepCopy() {
    return new MyStruct(this);
  }

  public long getMyIntField() {
    return this.myIntField;
  }

  public MyStruct setMyIntField(long myIntField) {
    this.myIntField = myIntField;
    setMyIntFieldIsSet(true);
    return this;
  }

  public void unsetMyIntField() {
    __isset_bit_vector.clear(__MYINTFIELD_ISSET_ID);
  }

  // Returns true if field myIntField is set (has been assigned a value) and false otherwise
  public boolean isSetMyIntField() {
    return __isset_bit_vector.get(__MYINTFIELD_ISSET_ID);
  }

  public void setMyIntFieldIsSet(boolean __value) {
    __isset_bit_vector.set(__MYINTFIELD_ISSET_ID, __value);
  }

  public String getMyStringField() {
    return this.myStringField;
  }

  public MyStruct setMyStringField(String myStringField) {
    this.myStringField = myStringField;
    return this;
  }

  public void unsetMyStringField() {
    this.myStringField = null;
  }

  // Returns true if field myStringField is set (has been assigned a value) and false otherwise
  public boolean isSetMyStringField() {
    return this.myStringField != null;
  }

  public void setMyStringFieldIsSet(boolean __value) {
    if (!__value) {
      this.myStringField = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case MYINTFIELD:
      if (__value == null) {
        unsetMyIntField();
      } else {
        setMyIntField((Long)__value);
      }
      break;

    case MYSTRINGFIELD:
      if (__value == null) {
        unsetMyStringField();
      } else {
        setMyStringField((String)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case MYINTFIELD:
      return new Long(getMyIntField());

    case MYSTRINGFIELD:
      return getMyStringField();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStruct))
      return false;
    MyStruct that = (MyStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.myIntField, that.myIntField)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetMyStringField(), that.isSetMyStringField(), this.myStringField, that.myStringField)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {myIntField, myStringField});
  }

  @Override
  public int compareTo(MyStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetMyIntField()).compareTo(other.isSetMyIntField());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(myIntField, other.myIntField);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetMyStringField()).compareTo(other.isSetMyStringField());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(myStringField, other.myStringField);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case MYINTFIELD:
          if (__field.type == TType.I64) {
            this.myIntField = iprot.readI64();
            setMyIntFieldIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case MYSTRINGFIELD:
          if (__field.type == TType.STRING) {
            this.myStringField = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(MY_INT_FIELD_FIELD_DESC);
    oprot.writeI64(this.myIntField);
    oprot.writeFieldEnd();
    if (this.myStringField != null) {
      oprot.writeFieldBegin(MY_STRING_FIELD_FIELD_DESC);
      oprot.writeString(this.myStringField);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("MyStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("myIntField");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getMyIntField(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("myStringField");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getMyStringField() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getMyStringField(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

