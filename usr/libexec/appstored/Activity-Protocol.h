//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol Activity <NSObject>
@property(readonly) const char *registeredName;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *descriptiveName;
@property(readonly) NSObject<OS_xpc_object> *criteria;
- (void)run;

@optional
@property(readonly) long long deadline;
@end

