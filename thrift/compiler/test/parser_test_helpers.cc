/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "thrift/compiler/test/parser_test_helpers.h"

#include <fstream>
#include <glog/logging.h>
#include <folly/experimental/TestUtil.h>
#include <thrift/compiler/ast/t_program_bundle.h>
#include <thrift/compiler/compiler.h>
#include <thrift/compiler/util.h>

std::shared_ptr<t_program> dedent_and_parse_to_program(
    std::string thrift_content) {
  folly::test::TemporaryFile tempFile;
  const auto path = tempFile.path().string();
  std::ofstream(path) << strip_left_margin(thrift_content);
  auto bundle = parse_and_get_program({"UNNAMED", "--gen", "mstch_cpp2", path});
  auto program = bundle->root_program();
  return {program, [b = std::move(bundle), f = std::move(tempFile)](auto) {}};
}
