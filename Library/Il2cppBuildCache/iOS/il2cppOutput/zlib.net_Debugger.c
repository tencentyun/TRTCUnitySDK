#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[101] = 
{
	{ 0, 0 } /* 0x06000001 System.Int64 zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000002 System.Void zlib.Adler32::.ctor() */,
	{ 0, 0 } /* 0x06000003 System.Void zlib.Deflate::.ctor() */,
	{ 0, 0 } /* 0x06000004 System.Void zlib.Deflate::lm_init() */,
	{ 0, 0 } /* 0x06000005 System.Void zlib.Deflate::tr_init() */,
	{ 0, 0 } /* 0x06000006 System.Void zlib.Deflate::init_block() */,
	{ 0, 0 } /* 0x06000007 System.Void zlib.Deflate::pqdownheap(System.Int16[],System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Boolean zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[]) */,
	{ 0, 0 } /* 0x06000009 System.Void zlib.Deflate::scan_tree(System.Int16[],System.Int32) */,
	{ 0, 0 } /* 0x0600000A System.Int32 zlib.Deflate::build_bl_tree() */,
	{ 0, 0 } /* 0x0600000B System.Void zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600000C System.Void zlib.Deflate::send_tree(System.Int16[],System.Int32) */,
	{ 0, 0 } /* 0x0600000D System.Void zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600000E System.Void zlib.Deflate::put_byte(System.Byte) */,
	{ 0, 0 } /* 0x0600000F System.Void zlib.Deflate::put_short(System.Int32) */,
	{ 0, 0 } /* 0x06000010 System.Void zlib.Deflate::putShortMSB(System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.Void zlib.Deflate::send_code(System.Int32,System.Int16[]) */,
	{ 0, 0 } /* 0x06000012 System.Void zlib.Deflate::send_bits(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000013 System.Void zlib.Deflate::_tr_align() */,
	{ 0, 0 } /* 0x06000014 System.Boolean zlib.Deflate::_tr_tally(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000015 System.Void zlib.Deflate::compress_block(System.Int16[],System.Int16[]) */,
	{ 0, 0 } /* 0x06000016 System.Void zlib.Deflate::set_data_type() */,
	{ 0, 0 } /* 0x06000017 System.Void zlib.Deflate::bi_flush() */,
	{ 0, 0 } /* 0x06000018 System.Void zlib.Deflate::bi_windup() */,
	{ 0, 0 } /* 0x06000019 System.Void zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0 } /* 0x0600001A System.Void zlib.Deflate::flush_block_only(System.Boolean) */,
	{ 0, 0 } /* 0x0600001B System.Int32 zlib.Deflate::deflate_stored(System.Int32) */,
	{ 0, 0 } /* 0x0600001C System.Void zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0 } /* 0x0600001D System.Void zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0 } /* 0x0600001E System.Void zlib.Deflate::fill_window() */,
	{ 0, 0 } /* 0x0600001F System.Int32 zlib.Deflate::deflate_fast(System.Int32) */,
	{ 0, 0 } /* 0x06000020 System.Int32 zlib.Deflate::deflate_slow(System.Int32) */,
	{ 0, 0 } /* 0x06000021 System.Int32 zlib.Deflate::longest_match(System.Int32) */,
	{ 0, 0 } /* 0x06000022 System.Int32 zlib.Deflate::deflateInit(zlib.ZStream,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000023 System.Int32 zlib.Deflate::deflateInit2(zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000024 System.Int32 zlib.Deflate::deflateReset(zlib.ZStream) */,
	{ 0, 0 } /* 0x06000025 System.Int32 zlib.Deflate::deflateEnd() */,
	{ 0, 0 } /* 0x06000026 System.Int32 zlib.Deflate::deflate(zlib.ZStream,System.Int32) */,
	{ 0, 0 } /* 0x06000027 System.Void zlib.Deflate::.cctor() */,
	{ 0, 0 } /* 0x06000028 System.Void zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000029 System.Void zlib.InfBlocks::reset(zlib.ZStream,System.Int64[]) */,
	{ 0, 0 } /* 0x0600002A System.Int32 zlib.InfBlocks::proc(zlib.ZStream,System.Int32) */,
	{ 0, 0 } /* 0x0600002B System.Void zlib.InfBlocks::free(zlib.ZStream) */,
	{ 0, 0 } /* 0x0600002C System.Int32 zlib.InfBlocks::inflate_flush(zlib.ZStream,System.Int32) */,
	{ 0, 0 } /* 0x0600002D System.Void zlib.InfBlocks::.cctor() */,
	{ 0, 0 } /* 0x0600002E System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.ZStream) */,
	{ 0, 0 } /* 0x0600002F System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0 } /* 0x06000030 System.Int32 zlib.InfCodes::proc(zlib.InfBlocks,zlib.ZStream,System.Int32) */,
	{ 0, 0 } /* 0x06000031 System.Void zlib.InfCodes::free(zlib.ZStream) */,
	{ 0, 0 } /* 0x06000032 System.Int32 zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.InfBlocks,zlib.ZStream) */,
	{ 0, 0 } /* 0x06000033 System.Void zlib.InfCodes::.cctor() */,
	{ 0, 0 } /* 0x06000034 System.Int32 zlib.Inflate::inflateEnd(zlib.ZStream) */,
	{ 0, 0 } /* 0x06000035 System.Int32 zlib.Inflate::inflate(zlib.ZStream,System.Int32) */,
	{ 0, 0 } /* 0x06000036 System.Void zlib.Inflate::.cctor() */,
	{ 0, 0 } /* 0x06000037 System.Int32 zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[]) */,
	{ 0, 0 } /* 0x06000038 System.Int32 zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0 } /* 0x06000039 System.Int32 zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0 } /* 0x0600003A System.Int32 zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],zlib.ZStream) */,
	{ 0, 0 } /* 0x0600003B System.Void zlib.InfTree::.cctor() */,
	{ 0, 0 } /* 0x0600003C System.Void zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600003D System.Void zlib.StaticTree::.cctor() */,
	{ 0, 0 } /* 0x0600003E System.Int64 zlib.SupportClass::Identity(System.Int64) */,
	{ 0, 0 } /* 0x0600003F System.Int32 zlib.SupportClass::URShift(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000040 System.Int64 zlib.SupportClass::URShift(System.Int64,System.Int32) */,
	{ 0, 0 } /* 0x06000041 System.Int32 zlib.Tree::d_code(System.Int32) */,
	{ 0, 0 } /* 0x06000042 System.Void zlib.Tree::gen_bitlen(zlib.Deflate) */,
	{ 0, 0 } /* 0x06000043 System.Void zlib.Tree::build_tree(zlib.Deflate) */,
	{ 0, 0 } /* 0x06000044 System.Void zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[]) */,
	{ 0, 0 } /* 0x06000045 System.Int32 zlib.Tree::bi_reverse(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000046 System.Void zlib.Tree::.cctor() */,
	{ 0, 0 } /* 0x06000047 System.Void zlib.Tree::.ctor() */,
	{ 0, 0 } /* 0x06000048 System.Void zlib.ZOutputStream::InitBlock() */,
	{ 0, 0 } /* 0x06000049 System.Void zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32) */,
	{ 0, 0 } /* 0x0600004A System.Void zlib.ZOutputStream::WriteByte(System.Int32) */,
	{ 0, 0 } /* 0x0600004B System.Void zlib.ZOutputStream::WriteByte(System.Byte) */,
	{ 0, 0 } /* 0x0600004C System.Void zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600004D System.Void zlib.ZOutputStream::finish() */,
	{ 0, 0 } /* 0x0600004E System.Void zlib.ZOutputStream::end() */,
	{ 0, 0 } /* 0x0600004F System.Void zlib.ZOutputStream::Close() */,
	{ 0, 0 } /* 0x06000050 System.Void zlib.ZOutputStream::Flush() */,
	{ 0, 0 } /* 0x06000051 System.Int32 zlib.ZOutputStream::Read(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000052 System.Int64 zlib.ZOutputStream::Seek(System.Int64,System.IO.SeekOrigin) */,
	{ 0, 0 } /* 0x06000053 System.Boolean zlib.ZOutputStream::get_CanRead() */,
	{ 0, 0 } /* 0x06000054 System.Boolean zlib.ZOutputStream::get_CanSeek() */,
	{ 0, 0 } /* 0x06000055 System.Boolean zlib.ZOutputStream::get_CanWrite() */,
	{ 0, 0 } /* 0x06000056 System.Int64 zlib.ZOutputStream::get_Length() */,
	{ 0, 0 } /* 0x06000057 System.Int64 zlib.ZOutputStream::get_Position() */,
	{ 0, 0 } /* 0x06000058 System.Void zlib.ZOutputStream::set_Position(System.Int64) */,
	{ 0, 0 } /* 0x06000059 System.Int32 zlib.ZStream::inflate(System.Int32) */,
	{ 0, 0 } /* 0x0600005A System.Int32 zlib.ZStream::inflateEnd() */,
	{ 0, 0 } /* 0x0600005B System.Int32 zlib.ZStream::deflateInit(System.Int32) */,
	{ 0, 0 } /* 0x0600005C System.Int32 zlib.ZStream::deflateInit(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600005D System.Int32 zlib.ZStream::deflate(System.Int32) */,
	{ 0, 0 } /* 0x0600005E System.Int32 zlib.ZStream::deflateEnd() */,
	{ 0, 0 } /* 0x0600005F System.Void zlib.ZStream::flush_pending() */,
	{ 0, 0 } /* 0x06000060 System.Int32 zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000061 System.Void zlib.ZStream::free() */,
	{ 0, 0 } /* 0x06000062 System.Void zlib.ZStream::.cctor() */,
	{ 0, 0 } /* 0x06000063 System.Void zlib.ZStream::.ctor() */,
	{ 0, 0 } /* 0x06000064 System.Void zlib.ZStreamException::.ctor() */,
	{ 0, 0 } /* 0x06000065 System.Void zlib.ZStreamException::.ctor(System.String) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointszlib_net[];
Il2CppSequencePoint g_sequencePointszlib_net[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointszlib_net[];
Il2CppSequencePoint g_sequencePointszlib_net[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 13574, 3923, 234, 0, -1 },
{ 13576, 3923, 8, 1, 0 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[101] = 
{
	{ 0, 0, 0 } /* System.Int64 zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Adler32::.ctor() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::.ctor() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::lm_init() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::tr_init() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::init_block() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::pqdownheap(System.Int16[],System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[]) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::scan_tree(System.Int16[],System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::build_bl_tree() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::send_tree(System.Int16[],System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::put_byte(System.Byte) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::put_short(System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::putShortMSB(System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::send_code(System.Int32,System.Int16[]) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::send_bits(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::_tr_align() */,
	{ 0, 0, 0 } /* System.Boolean zlib.Deflate::_tr_tally(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::compress_block(System.Int16[],System.Int16[]) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::set_data_type() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::bi_flush() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::bi_windup() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::flush_block_only(System.Boolean) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflate_stored(System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::fill_window() */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflate_fast(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflate_slow(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::longest_match(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflateInit(zlib.ZStream,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflateInit2(zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflateReset(zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflateEnd() */,
	{ 0, 0, 0 } /* System.Int32 zlib.Deflate::deflate(zlib.ZStream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate::.cctor() */,
	{ 0, 0, 0 } /* System.Void zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.InfBlocks::reset(zlib.ZStream,System.Int64[]) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfBlocks::proc(zlib.ZStream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.InfBlocks::free(zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfBlocks::inflate_flush(zlib.ZStream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.InfBlocks::.cctor() */,
	{ 0, 0, 0 } /* System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfCodes::proc(zlib.InfBlocks,zlib.ZStream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.InfCodes::free(zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.InfBlocks,zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Void zlib.InfCodes::.cctor() */,
	{ 0, 0, 0 } /* System.Int32 zlib.Inflate::inflateEnd(zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Inflate::inflate(zlib.ZStream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Inflate::.cctor() */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[]) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Int32 zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],zlib.ZStream) */,
	{ 0, 0, 0 } /* System.Void zlib.InfTree::.cctor() */,
	{ 0, 0, 0 } /* System.Void zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.StaticTree::.cctor() */,
	{ 0, 0, 0 } /* System.Int64 zlib.SupportClass::Identity(System.Int64) */,
	{ 0, 0, 0 } /* System.Int32 zlib.SupportClass::URShift(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Int64 zlib.SupportClass::URShift(System.Int64,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Tree::d_code(System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Tree::gen_bitlen(zlib.Deflate) */,
	{ 0, 0, 0 } /* System.Void zlib.Tree::build_tree(zlib.Deflate) */,
	{ 0, 0, 0 } /* System.Void zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[]) */,
	{ 0, 0, 0 } /* System.Int32 zlib.Tree::bi_reverse(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.Tree::.cctor() */,
	{ 0, 0, 0 } /* System.Void zlib.Tree::.ctor() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::InitBlock() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::WriteByte(System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::WriteByte(System.Byte) */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::finish() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::end() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::Close() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::Flush() */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZOutputStream::Read(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Int64 zlib.ZOutputStream::Seek(System.Int64,System.IO.SeekOrigin) */,
	{ 0, 0, 0 } /* System.Boolean zlib.ZOutputStream::get_CanRead() */,
	{ 0, 0, 0 } /* System.Boolean zlib.ZOutputStream::get_CanSeek() */,
	{ 0, 0, 0 } /* System.Boolean zlib.ZOutputStream::get_CanWrite() */,
	{ 0, 0, 0 } /* System.Int64 zlib.ZOutputStream::get_Length() */,
	{ 0, 0, 0 } /* System.Int64 zlib.ZOutputStream::get_Position() */,
	{ 0, 0, 0 } /* System.Void zlib.ZOutputStream::set_Position(System.Int64) */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::inflate(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::inflateEnd() */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::deflateInit(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::deflateInit(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::deflate(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::deflateEnd() */,
	{ 0, 0, 0 } /* System.Void zlib.ZStream::flush_pending() */,
	{ 0, 0, 0 } /* System.Int32 zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void zlib.ZStream::free() */,
	{ 0, 0, 0 } /* System.Void zlib.ZStream::.cctor() */,
	{ 0, 0, 0 } /* System.Void zlib.ZStream::.ctor() */,
	{ 0, 0, 0 } /* System.Void zlib.ZStreamException::.ctor() */,
	{ 0, 0, 0 } /* System.Void zlib.ZStreamException::.ctor(System.String) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationzlib_net;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationzlib_net = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointszlib_net,
	2,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
