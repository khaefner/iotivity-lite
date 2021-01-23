cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
list(APPEND EXTRA_COMPONENT_DIRS components/lvgl_esp32_drivers components/lvgl_esp32_drivers/lvgl_tft components/lv_lib_qrcode)
project(example)

idf_build_get_property(config_dir CONFIG_DIR)
set(sdkconfig_header ${config_dir}/sdkconfig.h)
set(project_elf ${CMAKE_PROJECT_NAME}.elf)
