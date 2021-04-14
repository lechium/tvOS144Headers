//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UpdatableAssetControllerDeferredScheduleValues : NSObject
{
    _Bool _scheduledInBackground;	// 8 = 0x8
    NSURL *_manifestURL;	// 16 = 0x10
    NSURL *_bundledManifestURL;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
    NSString *_userAgent;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100180784
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool scheduledInBackground; // @synthesize scheduledInBackground=_scheduledInBackground;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSURL *bundledManifestURL; // @synthesize bundledManifestURL=_bundledManifestURL;
@property(retain, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;

@end
