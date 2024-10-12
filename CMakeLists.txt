cmake_minimum_required(VERSION 3.29)

# Proje ismi ve ayarları
project(OpenPortController)

# C++ standardını belirleyin
set(CMAKE_CXX_STANDARD 20)

# Uygulamanın yürütülebilir dosyasını ekleyin
add_executable(OpenPortController protocols.cpp)

# Gerekli kütüphaneleri bağlayın
target_link_libraries(OpenPortController PRIVATE iphlpapi ws2_32)
