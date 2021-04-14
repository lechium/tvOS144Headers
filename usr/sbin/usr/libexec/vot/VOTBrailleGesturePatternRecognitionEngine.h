//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VOTBrailleGestureDataRepository;
@protocol VOTBrailleGesturePatternRecognitionEngineDelegate;

@interface VOTBrailleGesturePatternRecognitionEngine : NSObject
{
    VOTBrailleGestureDataRepository *_repository;	// 8 = 0x8
    NSMutableArray *_lastBrailleGestures;	// 16 = 0x10
    long long _typingMode;	// 24 = 0x18
    struct CGSize _keyboardSize;	// 32 = 0x20
    _Bool _shouldUseEightDotBraille;	// 48 = 0x30
    _Bool _shouldReverseDots;	// 49 = 0x31
    id <VOTBrailleGesturePatternRecognitionEngineDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000ed124
@property(nonatomic) __weak id <VOTBrailleGesturePatternRecognitionEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_averageOfOldFloat:(double)arg1 newFloat:(double)arg2 dataCount:(unsigned long long)arg3;	// IMP=0x00000001000ed0d4
- (struct CGPoint)_averageOfOldPoint:(struct CGPoint)arg1 newPoint:(struct CGPoint)arg2 dataCount:(unsigned long long)arg3;	// IMP=0x00000001000ed05c
- (id)_averagePointValueWithDataCount:(unsigned long long)arg1 currentPointValue:(id)arg2 newPointValue:(id)arg3;	// IMP=0x00000001000ecf78
- (_Bool)_bothObjectsAreNilOrBothAreNonNil:(id)arg1 object:(id)arg2;	// IMP=0x00000001000ecf50
- (_Bool)_halfPattern:(id)arg1 hasSameDotsAsHalfPattern:(id)arg2;	// IMP=0x00000001000ecdac
- (id)_sortTouches:(id)arg1 fromTopToBottomForSide:(unsigned long long)arg2;	// IMP=0x00000001000ecc58
- (double)_distanceBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;	// IMP=0x00000001000ecc3c
- (id)_orderedTouchesFromHalfPattern:(id)arg1;	// IMP=0x00000001000eca74
- (double)_totalDistanceBetweenCorrespondingPointsInTouches:(id)arg1 andTouches:(id)arg2;	// IMP=0x00000001000ec920
- (id)_halfPatternFromOrderedTouches:(id)arg1 correspondingHalfPattern:(id)arg2;	// IMP=0x00000001000ec730
- (id)_closestHalfPatternForOrderedTouches:(id)arg1 possibleMatches:(id)arg2 side:(unsigned long long)arg3;	// IMP=0x00000001000ec4e0
- (id)_halfPatternFromTouches:(id)arg1 side:(unsigned long long)arg2;	// IMP=0x00000001000ec3d4
- (unsigned short)_printBrailleCharacterFromBraillePattern:(id)arg1;	// IMP=0x00000001000ebef0
- (void)_populateLeftTouchPoints:(id)arg1 rightTouchPoints:(id)arg2 fromTouchPoints:(id)arg3;	// IMP=0x00000001000ebd60
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x00000001000ebd50
@property(readonly, nonatomic) _Bool shouldReverseDots;
@property(readonly, nonatomic) _Bool shouldUseEightDotBraille;
- (void)calibrateWithTouchPoints:(id)arg1;	// IMP=0x00000001000eb8b4
- (id)dotNumberPositions;	// IMP=0x00000001000eb8a4
- (void)setTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3 shouldReverseDots:(_Bool)arg4;	// IMP=0x00000001000eb7b4
- (void)savePersistentGestureData;	// IMP=0x00000001000eb7a4
- (void)resetLastGestures;	// IMP=0x00000001000eb794
- (void)unlearnLastGesture;	// IMP=0x00000001000eb708
- (id)printBrailleForTouchPoints:(id)arg1 shouldLearn:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000eb4b8
- (id)init;	// IMP=0x00000001000eb364

@end

