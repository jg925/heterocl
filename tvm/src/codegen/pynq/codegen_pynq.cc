/*!
 *  Copyright (c) 2017 by Contributors
 * \file codegen_pynq.cc
 */
#include <tvm/runtime/config.h>
#include <tvm/packed_func_ext.h>
#include <vector>
#include <string>
#include <tuple>
#include <regex>
#include "./codegen_merlinc.h"
#include "../../runtime/thread_storage_scope.h"

namespace TVM {
namespace codegen {

CodeGenPynq::CodeGenPynq() {
  restrict_keyword_ = "restrict"; // Is this useful?
  return ;
}

void CodeGenPynq::InitFuncState(LoweredFunc f) {
  CodeGenC::InitFuncState(f);
  for (Var arg : f->args) {
    if (arg.type().is_handle()) {
      alloc_storage_scope_[arg.get()] = "global";
    }
  }
}
} // namespace codegen
} // namespace TVM
