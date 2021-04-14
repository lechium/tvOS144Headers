//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVAirplay2DataSource-Protocol.h"
#import "SATVAirplay2DataSourceUpdating-Protocol.h"

@class NSArray, NSHashTable, NSString;
@protocol SATVAirplay2DataSourceObject;

@interface SATVAirplay2HomeKitDataSource : NSObject <SATVAirplay2DataSource, SATVAirplay2DataSourceUpdating>
{
    _Bool _ready;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
    id <SATVAirplay2DataSourceObject> _preferredHome;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

+ (id)_errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000218cc
+ (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000215e8
+ (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021270
+ (_Bool)isHomeKitAvailable;	// IMP=0x000000010001f2d4
- (void).cxx_destruct;	// IMP=0x0000000100021a30
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(copy, nonatomic) id <SATVAirplay2DataSourceObject> preferredHome; // @synthesize preferredHome=_preferredHome;
@property(copy, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (void)_updateReadyStateAndNotify:(_Bool)arg1;	// IMP=0x0000000100021018
- (void)_notifyDataSourceDidUpdate;	// IMP=0x0000000100020f68
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020e00
- (void)_resetCachedState;	// IMP=0x0000000100020dc4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100020bc8
@property(readonly, copy) NSString *description;
- (void)updateLocalAccessoryAudioDestinationWithHomeTheaterSpeaker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000206cc
- (void)moveOrAddLocalAccessoryToRoomNamed:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000201e4
@property(readonly, nonatomic) _Bool isUpdatingAvailable;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010002015c
- (void)addObserver:(id)arg1;	// IMP=0x00000001000200f0
- (id)homeTheaterSpeakersInRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010001f910
- (id)roomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010001f764
- (id)roomsForHome:(id)arg1;	// IMP=0x000000010001f5f0
- (void)dealloc;	// IMP=0x000000010001f1f8
- (id)init;	// IMP=0x000000010001f124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

