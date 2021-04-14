//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSIntegerMap, BSMutableIntegerMap, NSHashTable;

@interface PBPresentationElementFocusCoordinator : NSObject
{
    long long _activeLayoutLevel;	// 8 = 0x8
    long long _highestLayoutLevel;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    BSMutableIntegerMap *_levelsToElementsMap;	// 32 = 0x20
    BSIntegerMap *_levelsToLayoutState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001db82c
@property(retain, nonatomic) BSIntegerMap *levelsToLayoutState; // @synthesize levelsToLayoutState=_levelsToLayoutState;
@property(readonly, nonatomic) BSMutableIntegerMap *levelsToElementsMap; // @synthesize levelsToElementsMap=_levelsToElementsMap;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) long long highestLayoutLevel; // @synthesize highestLayoutLevel=_highestLayoutLevel;
@property(readonly, nonatomic) long long activeLayoutLevel; // @synthesize activeLayoutLevel=_activeLayoutLevel;
- (void)_updateActiveLayoutLevel;	// IMP=0x00000001001db220
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001db110
- (void)_deregisterForFocusCoordination:(id)arg1;	// IMP=0x00000001001db04c
- (void)_registerForFocusCoordination:(id)arg1;	// IMP=0x00000001001daf34
- (id)description;	// IMP=0x00000001001dacb8
- (void)removeObserver:(id)arg1;	// IMP=0x00000001001dac50
- (void)addObserver:(id)arg1;	// IMP=0x00000001001dabe8
- (id)windowForLayoutLevel:(long long)arg1;	// IMP=0x00000001001dab10
- (id)init;	// IMP=0x00000001001da9ec

@end
