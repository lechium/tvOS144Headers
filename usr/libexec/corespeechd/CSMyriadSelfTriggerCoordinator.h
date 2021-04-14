//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSSelfTriggerDetectorDelegate-Protocol.h"

@class NSString;
@protocol CSMyriadSelfTriggerCoordinatorDelegate;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate>
{
    id <CSMyriadSelfTriggerCoordinatorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100073238
@property(nonatomic) __weak id <CSMyriadSelfTriggerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;	// IMP=0x0000000100072f60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
