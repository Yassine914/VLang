workspace "dev"
    configurations {"debug", "release"}

project "vlang"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/"

files {"**.h", "**.cpp"}

filter "configurations:debug"
    defines {"DEBUG"}
    symbols "On"

filter "configurations:release"
    defines {"NDEBUG"}
    optimize "On"