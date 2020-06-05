#ifndef RPC_BENCH_APP_H_
#define RPC_BENCH_APP_H_
#include <iostream>
#include "command_opts.h"

namespace rpc_bench {

class App {
 public:
  static App* Create(CommandOpts opts);

  virtual int Run() {
    std::cerr << "unimplemented\n";
    std::abort();
  }

 private:
  CommandOpts opts_;
};

}  // namespace rpc_bench

#endif  // RPC_BENCH_APP_H_