/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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

@SuppressWarnings({ "unused", "serial", "unchecked" })
public class TypeUri extends TUnion<TypeUri> {
  private static final TStruct STRUCT_DESC = new TStruct("TypeUri");
  private static final TField URI_FIELD_DESC = new TField("uri", TType.STRING, (short)1);
  private static final TField TYPE_HASH_PREFIX_SHA2_256_FIELD_DESC = new TField("typeHashPrefixSha2_256", TType.STRING, (short)2);

  public static final int URI = 1;
  public static final int TYPEHASHPREFIXSHA2_256 = 2;

  public static final Map<Integer, FieldMetaData> metaDataMap = new HashMap<>();

  public TypeUri() {
    super();
  }

  public TypeUri(int setField, Object __value) {
    super(setField, __value);
  }

  public TypeUri(TypeUri other) {
    super(other);
  }

  public TypeUri deepCopy() {
    return new TypeUri(this);
  }

  public static TypeUri uri(String __value) {
    TypeUri x = new TypeUri();
    x.setUri(__value);
    return x;
  }

  public static TypeUri typeHashPrefixSha2_256(byte[] __value) {
    TypeUri x = new TypeUri();
    x.setTypeHashPrefixSha2_256(__value);
    return x;
  }


  @Override
  protected Object readValue(TProtocol iprot, TField __field) throws TException {
    switch (__field.id) {
      case URI:
        if (__field.type == URI_FIELD_DESC.type) {
          String uri;
          uri = iprot.readString();
          return uri;
        }
        break;
      case TYPEHASHPREFIXSHA2_256:
        if (__field.type == TYPE_HASH_PREFIX_SHA2_256_FIELD_DESC.type) {
          byte[] typeHashPrefixSha2_256;
          typeHashPrefixSha2_256 = iprot.readBinary();
          return typeHashPrefixSha2_256;
        }
        break;
    }
    TProtocolUtil.skip(iprot, __field.type);
    return null;
  }

  @Override
  protected void writeValue(TProtocol oprot, short setField, Object __value) throws TException {
    switch (setField) {
      case URI:
        String uri = (String)getFieldValue();
        oprot.writeString(uri);
        return;
      case TYPEHASHPREFIXSHA2_256:
        byte[] typeHashPrefixSha2_256 = (byte[])getFieldValue();
        oprot.writeBinary(typeHashPrefixSha2_256);
        return;
      default:
        throw new IllegalStateException("Cannot write union with unknown field " + setField);
    }
  }

  @Override
  protected TField getFieldDesc(int setField) {
    switch (setField) {
      case URI:
        return URI_FIELD_DESC;
      case TYPEHASHPREFIXSHA2_256:
        return TYPE_HASH_PREFIX_SHA2_256_FIELD_DESC;
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  protected TStruct getStructDesc() {
    return STRUCT_DESC;
  }

  @Override
  protected Map<Integer, FieldMetaData> getMetaDataMap() { return metaDataMap; }

  private Object __getValue(int expectedFieldId) {
    if (getSetField() == expectedFieldId) {
      return getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field '" + getFieldDesc(expectedFieldId).name + "' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  private void __setValue(int fieldId, Object __value) {
    if (__value == null) throw new NullPointerException();
    setField_ = fieldId;
    value_ = __value;
  }

  public String getUri() {
    return (String) __getValue(URI);
  }

  public void setUri(String __value) {
    __setValue(URI, __value);
  }

  public byte[] getTypeHashPrefixSha2_256() {
    return (byte[]) __getValue(TYPEHASHPREFIXSHA2_256);
  }

  public void setTypeHashPrefixSha2_256(byte[] __value) {
    __setValue(TYPEHASHPREFIXSHA2_256, __value);
  }

  public boolean equals(Object other) {
    if (other instanceof TypeUri) {
      return equals((TypeUri)other);
    } else {
      return false;
    }
  }

  public boolean equals(TypeUri other) {
    return equalsSlowImpl(other);
  }


  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {getSetField(), getFieldValue()});
  }

}