//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LaunchCoordinator : NSObject
{
}

+ (unsigned long long)_streamTypeForStreamName:(id)arg1;	// IMP=0x00000001000a7ccc
+ (_Bool)isEventStichable:(id)arg1 currentLaunch:(id)arg2;	// IMP=0x00000001000a7cc4
+ (id)stitchTogetherEvents:(id)arg1;	// IMP=0x00000001000a7a20
+ (id)allUsageForStreams:(unsigned long long)arg1 fromDate:(id)arg2 endDate:(id)arg3 bundleIDs:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000a716c
+ (id)allUsageForStreams:(unsigned long long)arg1 fromDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000a70ec

@end

