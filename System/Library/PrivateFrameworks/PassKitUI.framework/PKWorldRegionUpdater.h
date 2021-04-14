/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class PKSearchService, NSMutableArray, NSMutableSet, PKWorldRegion, NSHashTable, NSObject;

@interface PKWorldRegionUpdater : NSObject {

	PKSearchService* _searchService;
	os_unfair_lock_s _lockRegionsToGeocode;
	NSMutableArray* _regionsToGeocode;
	NSMutableSet* _regionIdentifiersToGeocode;
	NSMutableSet* _regionsFailedToGeocode;
	PKWorldRegion* _currentRegionToGeocode;
	NSHashTable* _observers;
	os_unfair_lock_s _lockObservers;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;

}
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)_beginReverseGeocodingIfPossible;
-(id)initWithSearchService:(id)arg1 ;
-(void)updateCoordinatesForWorldRegionIfNeeded:(id)arg1 ;
@end

