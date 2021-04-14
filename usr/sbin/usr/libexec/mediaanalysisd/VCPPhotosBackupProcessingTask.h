//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class NSArray;

@interface VCPPhotosBackupProcessingTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100055028
- (void).cxx_destruct;	// IMP=0x0000000100057108
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;	// IMP=0x0000000100057054
- (int)_backupPhotoLibrary:(id)arg1;	// IMP=0x0000000100056a30
- (int)_createBackupAtFilepath:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x0000000100055b80
- (void)_touchExistingBackup:(id)arg1;	// IMP=0x0000000100055834
- (_Bool)_shouldPerformBackup:(id)arg1;	// IMP=0x00000001000551f4
- (_Bool)isCancelled;	// IMP=0x00000001000551b4
- (void)cancel;	// IMP=0x00000001000551a4
- (float)resourceRequirement;	// IMP=0x000000010005519c
- (void)dealloc;	// IMP=0x0000000100055110
- (id)initWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100054ec4
- (id)init;	// IMP=0x0000000100054eac

@end
