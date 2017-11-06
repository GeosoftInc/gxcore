
# Geosoft GX Core C/C++ Repository

This is the repository for Geosoft GX Developer support for C/C++ development. It contains headers, libraries and dlls as well as  samples illustrating how to use the APIs.

At its heart the GX API is exposed as a low level C API that is version stable. This repository also provides a header only C++ wrapper that could be used to write cleaner and simpler code than using the API directly.

Refer to the documentation for more information.

[GX Developer documentation](https://geosoftgxdev.atlassian.net/wiki/display/GD/Python+in+GX+Developer)

[C/C++ Development](https://geosoftgxdev.atlassian.net/wiki/spaces/GXD93/pages/78119004/C+C+Development)

Also see the [Geosoft Inc. organization on Github](https://github.com/GeosoftInc) for the other programming language specific repos.

How to build
------------

The `build.proj` and `env.targets` files contain [MSBuild](https://docs.microsoft.com/en-us/visualstudio/msbuild/msbuild) scripts that  can be used to build the examples or launch Visual Studio with the correct environments defined.

[Visual Studio Community 2017](https://www.visualstudio.com/downloads/) is recommened for developers that do not yet have access to Visual Studio. It should also be possible to build using other toolsets (e.g. MingW), but this is neither tested nor supported.

The MSBuild scripts require [the MSBuild Extension Pack](http://www.msbuildextensionpack.com/).

The commands are intended to be executed under the [Developer Command Prompt for Visual Studio](https://docs.microsoft.com/en-us/dotnet/framework/tools/developer-command-prompt-for-vs)

### Commandline Build
```
msbuild
```

### Launch Visual Studio
```
msbuild /t:StartDevEnv
```
Then open `examples\examples.sln`.

License
-------
Any source code found here are released under the [BSD 2-clause license](https://github.com/GeosoftInc/gxpy/blob/master/LICENSE). Core functionality exposed by the GX API may have additional license implications. For more information consult the [License page in the GX Developer Wiki](https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License)
