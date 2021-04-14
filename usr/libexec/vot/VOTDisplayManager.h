//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIClientDelegate-Protocol.h"

@class AXUIClient, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface VOTDisplayManager : NSObject <AXUIClientDelegate>
{
    NSLock *_lock;	// 8 = 0x8
    _Bool _displayShutdown;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_displayQueue;	// 24 = 0x18
    _Bool _shouldHideCursor;	// 32 = 0x20
    _Bool _uiServerIsReady;	// 33 = 0x21
    _Bool _needToShowVOWarningBanner;	// 34 = 0x22
    unsigned int _currentCursorContextID;	// 36 = 0x24
    struct CGPath *_currentCursorPath;	// 40 = 0x28
    AXUIClient *_uiClient;	// 48 = 0x30
    struct CGRect _currentCursorFrame;	// 56 = 0x38
    struct CGRect _currentSonificationPlaybackBounds;	// 88 = 0x58
}

+ (id)displayManager;	// IMP=0x0000000100042174
- (void).cxx_destruct;	// IMP=0x0000000100045220
@property(nonatomic) struct CGRect currentSonificationPlaybackBounds; // @synthesize currentSonificationPlaybackBounds=_currentSonificationPlaybackBounds;
@property(nonatomic) _Bool needToShowVOWarningBanner; // @synthesize needToShowVOWarningBanner=_needToShowVOWarningBanner;
@property(nonatomic) _Bool uiServerIsReady; // @synthesize uiServerIsReady=_uiServerIsReady;
@property(retain, nonatomic) AXUIClient *uiClient; // @synthesize uiClient=_uiClient;
@property(nonatomic) _Bool shouldHideCursor; // @synthesize shouldHideCursor=_shouldHideCursor;
@property(retain, nonatomic) struct CGPath *currentCursorPath; // @synthesize currentCursorPath=_currentCursorPath;
@property(nonatomic) unsigned int currentCursorContextID; // @synthesize currentCursorContextID=_currentCursorContextID;
@property(nonatomic) struct CGRect currentCursorFrame; // @synthesize currentCursorFrame=_currentCursorFrame;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;	// IMP=0x0000000100045174
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000010004516c
- (void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2;	// IMP=0x0000000100045114
- (void)_tvOS_navigationStyleChanged;	// IMP=0x0000000100044fb0
- (void)_tvOS_showItemChooser:(_Bool)arg1 withItems:(id)arg2;	// IMP=0x0000000100044eb4
- (void)hideVoiceOverEnabledWarningBanner;	// IMP=0x0000000100044e64
- (void)showVoiceOverEnabledWarningBanner;	// IMP=0x0000000100044dd4
- (void)hideSonificationPlayhead;	// IMP=0x0000000100044cc0
- (void)pauseSonificationPlaybackAtPosition:(double)arg1;	// IMP=0x0000000100044b7c
- (void)beginSonificationPlaybackFromPosition:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000100044960
- (void)setSonificationPlayheadPosition:(double)arg1;	// IMP=0x000000010004481c
- (void)showSonificationPlayheadInPlaybackBounds:(struct CGRect)arg1 atPosition:(double)arg2;	// IMP=0x00000001000447d8
- (void)setVoiceOverCaptionText:(id)arg1 withRange:(struct _NSRange)arg2 language:(id)arg3 voice:(id)arg4;	// IMP=0x0000000100044604
- (void)highlightMapsExplorationSegmentWithIndex:(long long)arg1;	// IMP=0x00000001000444fc
- (void)updateMapsExplorationUIWithCurrentLocation:(struct CGPoint)arg1;	// IMP=0x0000000100044380
- (void)updateMapsExplorationUIWithCurrentCenter:(struct CGPoint)arg1;	// IMP=0x0000000100044204
- (void)hideMapsExplorationUI;	// IMP=0x00000001000441b4
- (void)showMapsExplorationUIWithCenter:(struct CGPoint)arg1 andData:(id)arg2;	// IMP=0x000000010004400c
- (void)highlightBrailleDots:(id)arg1;	// IMP=0x0000000100043f18
- (void)flashBrailleInsertedText:(id)arg1;	// IMP=0x0000000100043e18
- (void)setScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x0000000100043d10
- (void)updateBrailleUIWithOrientation:(long long)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;	// IMP=0x0000000100043b70
- (void)hideBrailleUI;	// IMP=0x0000000100043ae4
- (void)showBrailleUIWithOrientation:(long long)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;	// IMP=0x0000000100043728
- (void)updateVisualRotor:(id)arg1;	// IMP=0x00000001000436b0
- (void)_handleRotorDidChange:(id)arg1;	// IMP=0x0000000100043618
- (void)convertFramesToCursorSpace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043430
- (void)convertFrameToCursorSpace:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043208
- (void)setElementFrames:(id)arg1 labels:(id)arg2 uiClasses:(id)arg3;	// IMP=0x00000001000430c0
- (void)setElementFrames:(id)arg1;	// IMP=0x0000000100042f64
- (struct CGRect)_adjustFrameToFitScreen:(struct CGRect)arg1;	// IMP=0x0000000100042ea4
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(_Bool)arg5 animated:(_Bool)arg6;	// IMP=0x0000000100042ad4
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(_Bool)arg5;	// IMP=0x0000000100042ac4
- (void)_updateZoom:(struct CGRect)arg1 element:(id)arg2;	// IMP=0x00000001000427c4
- (void)setCursorFrame:(struct CGRect)arg1;	// IMP=0x00000001000427a8
- (void)_setCursorFrameForElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000425d8
- (void)setCursorFrameForElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010004252c
- (void)setCursorFrameForElement:(id)arg1;	// IMP=0x000000010004251c
- (void)clearCursorFrame;	// IMP=0x00000001000424f0
- (void)shutdown;	// IMP=0x00000001000424c0
- (void)dealloc;	// IMP=0x00000001000423ec
@property(readonly, nonatomic) NSString *serviceBundleName;
@property(readonly, nonatomic) NSString *clientIdentifier;
- (id)init;	// IMP=0x0000000100042224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

