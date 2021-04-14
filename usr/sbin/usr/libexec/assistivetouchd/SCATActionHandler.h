//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer;
@protocol SCATActionHandlerDelegate, SCATActionHandlerUIDelegate;

@interface SCATActionHandler : NSObject
{
    long long _action;	// 8 = 0x8
    id <SCATActionHandlerDelegate> _delegate;	// 16 = 0x10
    id <SCATActionHandlerUIDelegate> _uiDelegate;	// 24 = 0x18
    AXDispatchTimer *_actionTimeoutTimer;	// 32 = 0x20
    unsigned long long _actionCount;	// 40 = 0x28
    double _timeoutDuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100078b4c
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(nonatomic) unsigned long long actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) AXDispatchTimer *actionTimeoutTimer; // @synthesize actionTimeoutTimer=_actionTimeoutTimer;
@property(nonatomic) __weak id <SCATActionHandlerUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak id <SCATActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)_resetWithActionSource:(id)arg1;	// IMP=0x0000000100078a60
- (void)_handleFireAction;	// IMP=0x0000000100078988
- (_Bool)isPending;	// IMP=0x000000010007893c
- (void)cancelPendingAction;	// IMP=0x00000001000787e8
- (void)notifyDidReceiveAction:(id)arg1;	// IMP=0x0000000100078490
- (_Bool)_shouldHandleSelectActionImmediately;	// IMP=0x00000001000783f4
@property(readonly, nonatomic) _Bool shouldShowMenuOnFirstSelectAction;
- (id)initWithAction:(long long)arg1 timeoutDuration:(double)arg2;	// IMP=0x00000001000782e0

@end

