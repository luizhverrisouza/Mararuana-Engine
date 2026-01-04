# cmake/spdlog.cmake
include(FetchContent)

FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG v1.16.0  # Mantenha atualizado com a versão estável de 2026
)

# Opcional: Se quiser usar o spdlog apenas como header-only para build mais rápido
set(SPDLOG_BUILD_ALL OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(spdlog)
