//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SiriUITranscriptItem, UIView;

@interface SRTranscriptAnimation : NSObject
{
    double _creationTime;	// 8 = 0x8
    SiriUITranscriptItem *_transcriptItem;	// 16 = 0x10
    UIView *_replacedView;	// 24 = 0x18
    long long _updateType;	// 32 = 0x20
    long long _insertionAnimationType;	// 40 = 0x28
    long long _replacementAnimationType;	// 48 = 0x30
    long long _pinAnimationType;	// 56 = 0x38
    long long _updateAnimationType;	// 64 = 0x40
}

+ (id)cancellationAnimationForTranscriptItem:(id)arg1;	// IMP=0x0000000100021b4c
+ (id)confirmationAnimationForTranscriptItem:(id)arg1;	// IMP=0x0000000100021ae0
+ (id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2 replacedView:(id)arg3;	// IMP=0x0000000100021a64
+ (id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2;	// IMP=0x0000000100021a00
- (void).cxx_destruct;	// IMP=0x0000000100022214
@property(nonatomic) long long updateAnimationType; // @synthesize updateAnimationType=_updateAnimationType;
@property(readonly, nonatomic) long long pinAnimationType; // @synthesize pinAnimationType=_pinAnimationType;
@property(readonly, nonatomic) long long replacementAnimationType; // @synthesize replacementAnimationType=_replacementAnimationType;
@property(readonly, nonatomic) long long insertionAnimationType; // @synthesize insertionAnimationType=_insertionAnimationType;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) UIView *replacedView; // @synthesize replacedView=_replacedView;
@property(readonly, nonatomic) SiriUITranscriptItem *transcriptItem; // @synthesize transcriptItem=_transcriptItem;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
- (id)_animationTypeString;	// IMP=0x0000000100022040
- (id)description;	// IMP=0x0000000100021f70
- (double)pinMinimumDuration;	// IMP=0x0000000100021f34
- (double)animationDelay;	// IMP=0x0000000100021ec0
- (id)_snippetViewControllerIfExists;	// IMP=0x0000000100021e34
- (id)_aceViewControllerIfExists;	// IMP=0x0000000100021da8
- (id)initWithTranscriptItem:(id)arg1 replacedView:(id)arg2 updateType:(long long)arg3;	// IMP=0x0000000100021bb8

@end

