//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAStateControllerDelegate-Protocol.h"

@class CALayer, CAStateController, NSArray, NSDictionary, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface TVSettingsCAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;	// 8 = 0x8
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;	// 16 = 0x10
    CALayer *_rootLayer;	// 24 = 0x18
    struct CGSize _originalSize;	// 32 = 0x20
    NSString *_pendingCompletionToState;	// 48 = 0x30
    NSString *_pendingCompletionFromState;	// 56 = 0x38
    CDUnknownBlockType _pendingCompletion;	// 64 = 0x40
    NSDictionary *_publishedObjectMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000455e4
- (void)_clearPendingCompletion;	// IMP=0x00000001000455cc
- (void)_setPendingCompletion:(CDUnknownBlockType)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x00000001000454d8
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00000001000453a0
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;	// IMP=0x0000000100045300
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;	// IMP=0x0000000100045270
- (void)layoutSubviews;	// IMP=0x00000001000451a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100045194
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (_Bool)setState:(id)arg1 onLayer:(id)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100044f60
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100044ee0
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100044ec4
- (_Bool)setState:(id)arg1;	// IMP=0x0000000100044eb4
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;	// IMP=0x0000000100044e84
- (id)initWithPackageName:(id)arg1 type:(id)arg2 inBundle:(id)arg3;	// IMP=0x0000000100044a2c

@end
