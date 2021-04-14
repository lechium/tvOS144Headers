//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VideoConversionTaskProgressUpdateObserver-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, NSURL, PAMediaConversionServiceResourceURLCollection, VideoConversionTask;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MediaConversionQueueEntry : NSObject <VideoConversionTaskProgressUpdateObserver>
{
    _Bool _cancelled;	// 8 = 0x8
    _Bool _taskTypeSupportsDeduplication;	// 9 = 0x9
    struct os_unfair_lock_s _stateLock;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_initialRequestIdentifier;	// 24 = 0x18
    NSDictionary *_initialRequestConversionOptions;	// 32 = 0x20
    NSURL *_temporaryFilesParentDirectoryURL;	// 40 = 0x28
    VideoConversionTask *_videoConversionTask;	// 48 = 0x30
    PAMediaConversionServiceResourceURLCollection *_sourceURLCollection;	// 56 = 0x38
    PAMediaConversionServiceResourceURLCollection *_temporaryDestinationURLCollection;	// 64 = 0x40
    NSObject<OS_os_transaction> *_transaction;	// 72 = 0x48
    NSMutableArray *_clientRequests;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010000b0dc
@property struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain) NSMutableArray *clientRequests; // @synthesize clientRequests=_clientRequests;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool taskTypeSupportsDeduplication; // @synthesize taskTypeSupportsDeduplication=_taskTypeSupportsDeduplication;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain) PAMediaConversionServiceResourceURLCollection *temporaryDestinationURLCollection; // @synthesize temporaryDestinationURLCollection=_temporaryDestinationURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceURLCollection; // @synthesize sourceURLCollection=_sourceURLCollection;
@property(retain) VideoConversionTask *videoConversionTask; // @synthesize videoConversionTask=_videoConversionTask;
@property(retain) NSURL *temporaryFilesParentDirectoryURL; // @synthesize temporaryFilesParentDirectoryURL=_temporaryFilesParentDirectoryURL;
@property(retain) NSDictionary *initialRequestConversionOptions; // @synthesize initialRequestConversionOptions=_initialRequestConversionOptions;
@property(retain) NSString *initialRequestIdentifier; // @synthesize initialRequestIdentifier=_initialRequestIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void)videoConversionTask:(id)arg1 didUpdateFractionCompleted:(double)arg2;	// IMP=0x000000010000ae7c
- (void)addClientRequest:(id)arg1;	// IMP=0x000000010000ad9c
- (id)description;	// IMP=0x000000010000acc4
- (void)dealloc;	// IMP=0x000000010000ab8c
- (id)initWithIdentifier:(id)arg1 initialConversionOptions:(id)arg2;	// IMP=0x000000010000aa60

@end

