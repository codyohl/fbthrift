/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.params;

import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
public class NestedContainersAsyncClientImpl implements NestedContainers.Async {

    @Override
    public void close() {
      throw new RuntimeException("No implemented");
    }


    @Override
    public ListenableFuture<Void> mapList(
        Map<Integer, List<Integer>> foo) {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<Void> mapSet(
        Map<Integer, Set<Integer>> foo) {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<Void> listMap(
        List<Map<Integer, Integer>> foo) {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<Void> listSet(
        List<Set<Integer>> foo) {
        throw new UnsupportedOperationException();
    }

    @Override
    public ListenableFuture<Void> turtles(
        List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo) {
        throw new UnsupportedOperationException();
    }
}
