cpp_flags = Split('''-std=c++1y 
                     -Wno-c++98-compat 
                     -O0 
                     -g 
                     -fcolor-diagnostics''')

build_env = Environment(CXXFLAGS = cpp_flags)   

main_program = ['Main.cc', 'IO.cc']
executable = 'RunMe'
build_env.Program(source = main_program, target = executable)
