//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDArchive : NSObject
{
    struct archive *_archive;	// 8 = 0x8
    struct archive *_disk_reader;	// 16 = 0x10
    int _archive_fd;	// 24 = 0x18
    _Bool _shouldCompress;	// 28 = 0x1c
    struct __sFILE *_summaryFD;	// 32 = 0x20
    long long _uncompressed_size;	// 40 = 0x28
    long long _compressed_size;	// 48 = 0x30
    NSString *_basePath;	// 56 = 0x38
    void *_writer;	// 64 = 0x40
    void *_ostream;	// 72 = 0x48
    _Bool _useParallelCompression;	// 80 = 0x50
    NSMutableSet *_objects;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_tarQueue;	// 96 = 0x60
    long long _archiveStatus;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010005420c
@property long long archiveStatus; // @synthesize archiveStatus=_archiveStatus;
@property(retain) NSObject<OS_dispatch_queue> *tarQueue; // @synthesize tarQueue=_tarQueue;
- (void)closeArchive;	// IMP=0x0000000100053e3c
- (long long)getUncompressedSize;	// IMP=0x0000000100053e34
- (int)getProtectionClass;	// IMP=0x0000000100053e1c
- (void)addArchiveFile:(id)arg1;	// IMP=0x0000000100053d38
- (void)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2;	// IMP=0x00000001000538b8
- (void)addFileToArchive:(id)arg1 withFileName:(id)arg2;	// IMP=0x000000010005381c
- (void)addArchiveObject:(id)arg1;	// IMP=0x0000000100052e40
- (long long)_writeEntryData:(void *)arg1 size:(long long)arg2;	// IMP=0x0000000100052c40
- (int)_writeArchiveHeader:(void *)arg1;	// IMP=0x0000000100052ae4
- (void)_disposeEntry:(void *)arg1;	// IMP=0x0000000100052acc
- (void *)_createHeaderEntrywithFile:(id)arg1 attributes:(struct stat *)arg2;	// IMP=0x0000000100052884
- (int)_writeChunk:(int)arg1 maxSize:(long long)arg2;	// IMP=0x0000000100052780
- (id)initWithPath:(id)arg1 withOptions:(int)arg2;	// IMP=0x000000010005201c
- (_Bool)shouldParallelCompress:(int)arg1;	// IMP=0x000000010005200c
- (int)_initlibParallelCompressionWithOption:(int)arg1;	// IMP=0x0000000100051de4
- (void)_getCompressionParameters:(CDStruct_b03498f8 *)arg1 forAlgo:(int)arg2;	// IMP=0x0000000100051dc4
- (int)_initlibArchiveshouldCompress:(int)arg1;	// IMP=0x0000000100051bd4

@end

