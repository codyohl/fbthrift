/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
public class RaiserAsyncClientImpl implements Raiser.Async {

    @Override
    public void close() {
      throw new RuntimeException("No implemented");
    }


    @Override
    public ListenableFuture<Void> doBland() {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<Void> doRaise() {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<String> get200() {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<String> get500() {
        throw new UnsupportedOperationException();
    }
}
