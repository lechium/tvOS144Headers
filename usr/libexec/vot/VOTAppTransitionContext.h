//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTAppTransitionContext : NSObject
{
    int _pid;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

+ (id)contextWithPID:(int)arg1 bundleID:(id)arg2 displayName:(id)arg3;	// IMP=0x00000001000fdb78
- (void).cxx_destruct;	// IMP=0x00000001000fdf68
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *announcableName;
- (id)description;	// IMP=0x00000001000fdc18

@end

