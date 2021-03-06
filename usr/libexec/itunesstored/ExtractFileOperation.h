//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface ExtractFileOperation : ISOperation
{
    long long _activeFileBytesCopied;	// 96 = 0x60
    NSString *_activeFilePath;	// 104 = 0x68
    NSString *_destinationFilePath;	// 112 = 0x70
    NSDictionary *_fileAttributes;	// 120 = 0x78
    double _lastSnapshotTime;	// 128 = 0x80
    NSString *_sourceFilePath;	// 136 = 0x88
    int _sourceFileType;	// 144 = 0x90
}

@property int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(retain) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
- (void)_updateProgressWithByteCount:(long long)arg1;	// IMP=0x0000000100084598
- (_Bool)_performBOMCopy:(id *)arg1;	// IMP=0x0000000100083b5c
- (id)_newBOMCopierOptions;	// IMP=0x0000000100083ae0
- (void)_initializeProgress;	// IMP=0x0000000100083a20
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x00000001000839a0
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x0000000100083938
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x00000001000838fc
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100083118
- (void)run;	// IMP=0x0000000100083078
- (void)dealloc;	// IMP=0x0000000100083008

@end

