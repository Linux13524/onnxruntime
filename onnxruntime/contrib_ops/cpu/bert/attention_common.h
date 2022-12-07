// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

namespace onnxruntime {
namespace contrib {

struct AttentionParameters {
  int batch_size;
  int sequence_length;
  int kv_sequence_length;     // input sequence length of K or V
  int past_sequence_length;   // sequence length in past state of K or V
  int total_sequence_length;  // total sequence length of K or V
  int max_sequence_length;
  int input_hidden_size;
  int hidden_size;    // hidden size of Q or K
  int head_size;      // hidden size per head of Q or K
  int v_hidden_size;  // hidden size of V
  int v_head_size;    // hidden size per head of V
  int num_heads;
  bool is_unidirectional;
};

namespace attention {
// Environment variable to disable fused attention kernel. Default is false.
constexpr const char* kDisableFusedAttention = "ORT_DISABLE_FUSED_ATTENTION";

// Environment variable to enable flash attention. Default is false.
constexpr const char* kEnableFlashAttention = "ORT_ENABLE_FLASH_ATTENTION";

// Environment variable to enable removing padding and restore padding. Default is false.
constexpr const char* kEnableUnpadAttention = "ORT_ENABLE_UNPAD_ATTENTION";

// Environment variable to enable flash attention. Default is false.
constexpr const char* kEnableDumpAttention = "ORT_DUMP_ATTENTION";
}  // namespace attention

}  // namespace contrib
}  // namespace onnxruntime