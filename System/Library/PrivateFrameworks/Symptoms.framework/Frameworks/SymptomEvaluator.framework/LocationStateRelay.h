/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary, NSObject, NSArray, NSString;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {

	void* coreLocationDyLibHandle;
	void* coreRoutineDyLibHandle;
	RTRoutineManager* routineManager;
	NSBundle* mobileWiFiBundle;
	CLLocationManager* mobileWiFiLocationManager;
	Class CLLocationManagerClassRef;
	NSMutableDictionary* pendingLOIBlocks;
	NSObject*<OS_dispatch_source> locationRequestTimer;
	/*function pointer*/void* clCopyTechnologiesInUseFunc;
	BOOL _gpsInUse;
	NSArray* _allLOIs;

}

@property (retain) NSArray * allLOIs;                               //@synthesize allLOIs=_allLOIs - In the implementation block
@property (assign,nonatomic) BOOL gpsInUse;                         //@synthesize gpsInUse=_gpsInUse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)fetchCurrentLocationLOIOnQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)unloadFrameworks;
-(BOOL)loadCoreLocation;
-(BOOL)authorizedToUseCoreRoutine;
-(BOOL)loadCoreRoutine;
-(void)showLocationArrow;
-(long long)preflightFrameworks;
-(unsigned long long)addPendingLOIBlocks:(/*^block*/id)arg1 ;
-(void)cleanUpPendingLOIBlocks;
-(void)callPendingLOIBlocksWithCLLocation:(id)arg1 LOI:(id)arg2 andError:(id)arg3 ;
-(id)mobileWiFiLocationManager;
-(BOOL)gpsInUse;
-(void)fetchLOICountOnMainQueueWithReply:(/*^block*/id)arg1 ;
-(void)setGpsInUse:(BOOL)arg1 ;
-(NSArray *)allLOIs;
-(void)setAllLOIs:(NSArray *)arg1 ;
@end

