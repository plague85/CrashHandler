# Copyright (c) 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)
#
# Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
# or copy at http://opensource.org/licenses/MIT)
project (CrashHandler C)

set (source_files
    src/Main.c
    src/SignalHandler.c
    src/SignalHandler.h
    src/Format.c
    src/Format.h
    README.md
    LICENSE.txt
    .gitignore
)

add_executable (CrashHandler ${source_files})