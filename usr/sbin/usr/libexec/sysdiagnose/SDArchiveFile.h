//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SDArchiveFile : NSObject
{
    int _fd;	// 8 = 0x8
    NSString *_sourcePath;	// 16 = 0x10
    NSString *_targetPath;	// 24 = 0x18
    NSString *_fileType;	// 32 = 0x20
    NSArray *_offsets;	// 40 = 0x28
    NSArray *_sizes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100051b80
@property int fd; // @synthesize fd=_fd;
@property(copy) NSArray *sizes; // @synthesize sizes=_sizes;
@property(copy) NSArray *offsets; // @synthesize offsets=_offsets;
@property(copy) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy) NSString *targetPath; // @synthesize targetPath=_targetPath;
@property(copy) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (id)initWithPath:(id)arg1 target:(id)arg2 ofType:(id)arg3;	// IMP=0x0000000100051a1c

@end

