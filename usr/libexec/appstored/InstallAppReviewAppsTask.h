//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray;

@interface InstallAppReviewAppsTask : Task
{
    NSArray *_installs;	// 8 = 0x8
    NSArray *_processedExternalIDs;	// 16 = 0x10
}

+ (id)_packageWithXPCMetadata:(id)arg1;	// IMP=0x00000001002c5780
+ (id)_installWithXPCMetadata:(id)arg1;	// IMP=0x00000001002c5290
+ (id)taskWithXPCAppMetadata:(id)arg1 requestToken:(id)arg2;	// IMP=0x00000001002c4e68
- (void).cxx_destruct;	// IMP=0x00000001002c593c
- (void)main;	// IMP=0x00000001002c501c
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithInstalls:(id)arg1;	// IMP=0x00000001002c4f3c

@end

