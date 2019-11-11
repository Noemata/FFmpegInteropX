#pragma once

#include "libavformat\avformat.h"

#include "NativeBufferFactory.h"

using namespace Platform;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;

namespace FFmpegInterop
{
	public ref class AttachedFile sealed
	{
	public:
		property String^ Name { String^ get() { return name; } };
		property String^ MimeType { String^ get() { return mimeType; } };
		property uint64 Size { uint64 get() { return stream->codecpar->extradata_size; }}

	internal:

		AttachedFile(String^ name, String^ mimeType, AVStream* stream)
		{
			this->name = name;
			this->mimeType = mimeType;
			this->stream = stream;
		}

		IBuffer^ GetBuffer()
		{
			return NativeBuffer::NativeBufferFactory::CreateNativeBuffer(stream->codecpar->extradata, (DWORD)Size);
		}

	private:
		String^ name;
		String^ mimeType;

		AVStream* stream;
	};

}