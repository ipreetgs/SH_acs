#pragma once\n\n #include < stdint                                             \
                                .h>\n #include < stdbool                       \
                                                     .h>\n #include < esp_err  \
                                                                          .h>\n\n #ifdef __cplusplus\nextern "C" {\n #endif \n\ntypedef struct {\n bool is_on;\n uint8_t brightness;\n uint8_t r;\n uint8_t g;\n uint8_t b;\n } nvs_storage_state_t;\n\nesp_err_t nvs_storage_save_state(nvs_storage_state_t * state);\nesp_err_t nvs_storage_load_state(nvs_storage_state_t * state);\n\n #ifdef __cplusplus\n }\n #endif \n
