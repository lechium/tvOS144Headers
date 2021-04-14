/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>
#import <libobjc.A.dylib/HMAccessoryDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMHomeManager, NSMutableArray, NSArray, NSString;

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _homesLoaded;
	HMHomeManager* _homeManager;
	NSMutableArray* _homesLoadedCompletionHandlers;
	NSMutableArray* _delegates;

}

@property (nonatomic,readonly) BOOL isCurrentAccessoryHomePod; 
@property (nonatomic,readonly) NSArray * homesSupportingAnnounce; 
@property (nonatomic,retain) NSMutableArray * homesLoadedCompletionHandlers;              //@synthesize homesLoadedCompletionHandlers=_homesLoadedCompletionHandlers - In the implementation block
@property (assign,nonatomic) BOOL homesLoaded;                                            //@synthesize homesLoaded=_homesLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                                  //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) HMHomeManager * homeManager;                               //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSArray * allHomes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id)init;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2 ;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(id)homeForID:(id)arg1 ;
-(id)homeWithName:(id)arg1 ;
-(id)homeNamesForContext:(id)arg1 ;
-(BOOL)isLocalDeviceInRoom:(id)arg1 ;
-(id)homesWithRoomNames:(id)arg1 ;
-(id)homesWithZoneNames:(id)arg1 ;
-(BOOL)isCurrentAccessoryHomePod;
-(id)initWithCaching:(BOOL)arg1 ;
-(NSMutableArray *)homesLoadedCompletionHandlers;
-(void)loadHomes:(/*^block*/id)arg1 ;
-(void)setHomesLoaded:(BOOL)arg1 ;
-(void)_notifyManagerLoadedHomes:(id)arg1 ;
-(void)_notifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)allHomes;
-(BOOL)homesLoaded;
-(void)setHomesLoadedCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSArray *)homesSupportingAnnounce;
-(id)_findBestHomeNames;
-(id)_homeNamesForAccessoryForContext:(id)arg1 ;
-(id)_homeNamesForContext:(id)arg1 ;
-(id)_currentHomesWeAreIn;
@end

