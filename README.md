# FFmpegInteropX library for Windows

#### This project is licensed under the [Apache 2.0 License](http://www.apache.org/licenses/LICENSE-2.0)

## Original source to FFmpegInteropX

The original repo is located here: https://github.com/ffmpeginteropx/FFmpegInteropX

## Welcome to FFmpegInteropX

The original repository where this was pulled from is located here.  I did next to nothing to get this working with UWP and VS2019.  My changes took all of 5 minutes to do.

FFmpegInteropX is an open-source project that aims to provide an easy way to use **FFmpeg** in **Windows 10 UWP Apps**. This allows you to decode a lot of formats that are not natively supported on Windows 10.

FFmpegInteropX is a much **improved fork** of the original [Microsoft project](git://github.com/Microsoft/FFmpegInterop).

**Some of the important improvements:**

- Multiple audio stream support
- Subtitle support, including external subtitle files
- Audio effects (special thanks to [mcosmin222](https://github.com/mcosmin222)!)
- Stream information retrieval (name, language, format, etc)
- Passthrough of the following video formats for hardware decoding
  - HEVC
  - VC1 (Used in VC1 Advanced Profile)
  - WMV3 (Used in WMV9 and VC1 Simple and Main Profile)
  - MPEG2 (Requires "MPEG-2 Video Extensions" from Windows Store)
  - VP9 (Requires "VP9 Video Extensions" from Windows Store)
- Major performance improvements (zero-copy data handling in all important areas)
- Frame grabber support
- Chapter information support
- API improvements
- Include zlib and bzlib libraries into ffmpeg for full MKV subtitle support
- Include iconv for character encoding conversion
- Lots of bug fixes

**Other changes:**
- Support for Windows 8.x and Windows Phone 8.x has been dropped
- Visual Studio 2015 support has been dropped

**Prerequisites:**

Visual Studio 2019 is required.

- Visual Studio 2019 (15.9.x or higher):
  - Select Universal Windows Platform development workload in Installer
  - Select additional components from Installer:
    - Universal Windows Platform tools
    - VC++ 2019 latest version v142 tools
    - Win 10 SDK (10.0.18362.0) for uwp: c#, vb, js
    - Win 10 SDK (10.0.18362.0) for uwp: c++
    - Visual C++ compilers and libraries for ARM64 (optional)
    - Visual C++ compilers and libraries for ARM (optional)
    - C++ UWP tools for ARM64 (optional)
    - C++ runtime for uwp

- Visual Studio 2019:
  - Select Universal Windows Platform development workload in Installer
  - Manually install Windows 10 SDK 10.0.15063.0 from SDK archive:
    https://developer.microsoft.com/en-us/windows/downloads/sdk-archive
  - [Visual C++ Redistributable for Visual Studio 2015](https://www.microsoft.com/en-US/download/details.aspx?id=48145) (only if you installed yasm 64-bit)


## Building FFmpeg

* Install vcpkg
* .\vcpkg install ffmpeg:x64-uwp --recurse
* Build solutions
* Yes, it's that easy!

## Credits / contributors

I can't take any credit for filling in dialog boxes :-(

## Credits / contributors

- [lukasf](https://github.com/lukasf)
- [mcosmin222](https://github.com/mcosmin222)
- [MouriNaruto](https://github.com/MouriNaruto)

Thank you also to Microsoft and the team who developed the original library!

## Your feedback is appreciated!
