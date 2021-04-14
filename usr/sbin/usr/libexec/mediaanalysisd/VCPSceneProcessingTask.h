//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class PHPhotoLibrary, VCPDatabaseWriter, VCPPreAnalyzer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPSceneProcessingTask : NSObject <VCPMADTaskProtocol>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPreAnalyzer *_analyzer;	// 16 = 0x10
    VCPDatabaseWriter *_database;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_publishGroup;	// 40 = 0x28
    int _publishStatus;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_analysisGroup;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 72 = 0x48
    struct mach_timebase_info _timebase;	// 80 = 0x50
}

+ (id)taskWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067f0c
- (void).cxx_destruct;	// IMP=0x000000010006b080
@property(readonly, nonatomic) VCPDatabaseWriter *database; // @synthesize database=_database;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (int)run;	// IMP=0x000000010006b068
- (int)flush;	// IMP=0x000000010006b03c
- (int)processAssets:(id)arg1;	// IMP=0x000000010006ae20
- (int)processAssetsSerial:(id)arg1;	// IMP=0x0000000100069cf4
- (int)processAssetsConcurrent:(id)arg1;	// IMP=0x0000000100068678
- (void)analyzeAsset:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067ffc
- (_Bool)isCancelled;	// IMP=0x0000000100067fbc
- (void)cancel;	// IMP=0x0000000100067fac
- (float)resourceRequirement;	// IMP=0x0000000100067fa4
- (id)initWithPhotoLibrary:(id)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067d70
- (id)init;	// IMP=0x0000000100067d58

@end

