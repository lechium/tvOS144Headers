//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Activity-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface AdPlatformsStatusConditionsActivity : NSObject <Activity>
{
}

- (void)run;	// IMP=0x0000000100124648
@property(readonly) const char *registeredName;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *descriptiveName;
@property(readonly) long long deadline;
@property(readonly) NSObject<OS_xpc_object> *criteria;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

