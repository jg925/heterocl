/*!
 *   Copyright (c) 2020 by Contributers
 *   \file codegen_pynq.h
 *   \brief Generate Pynq device code.
 */
#ifndef TVM_CODEGEN_CODEGEN_PYNQ_H_
#define TVM_CODEGEN_CODEGEN_PYNQ_H_

#include <tvm/codegen.h>
#include <tvm/packed_func_ext.h>
#include <string>
#include "../codegen_c.h"

namespace TVM {
namespace codegen {

class CodeGenPynq final : public CodeGenC {
  public:
    CodeGenPynq();
};

} // namespace codegen
} // namespace TVM

#endif // TVM_CODEGEN_CODEGEN_PYNQ_H_
