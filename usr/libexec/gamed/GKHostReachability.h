//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKReachability.h"

@class NSError, NSString;

@interface GKHostReachability : GKReachability
{
    NSString *_hostName;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (id)_gkReachabilityWithHostName:(id)arg1;	// IMP=0x000000010008e834
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void)dealloc;	// IMP=0x000000010008e8bc

@end

