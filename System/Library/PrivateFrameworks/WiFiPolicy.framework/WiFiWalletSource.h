/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiAvailabilitySource.h>

@protocol OS_dispatch_queue;
@class PKPassLibrary, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource> {

	/*^block*/id changeHandler;
	/*^block*/id relevancyHandler;
	PKPassLibrary* _passLibrary;
	NSMutableDictionary* _networks;
	NSMutableSet* _relevantPassIdentifiers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) PKPassLibrary * passLibrary;                         //@synthesize passLibrary=_passLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * networks;                      //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) NSMutableSet * relevantPassIdentifiers;              //@synthesize relevantPassIdentifiers=_relevantPassIdentifiers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id changeHandler; 
@property (nonatomic,copy) id relevancyHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)networks;
-(void)setNetworks:(NSMutableDictionary *)arg1 ;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(void)_passLibraryDidChange:(id)arg1 ;
-(PKPassLibrary *)passLibrary;
-(id)initWithChangeHandler:(/*^block*/id)arg1 ;
-(void)_initializeWiFiPasses;
-(void)_passLibraryDidBecomeRelevantNotification:(id)arg1 ;
-(void)_addPass:(id)arg1 ;
-(void)_handleRelevantPassUpdate:(id)arg1 ;
-(id)_createWiFiWalletPassFromPass:(id)arg1 ;
-(void)_removeRelevantPasses;
-(void)_handlePassLibraryChange:(id)arg1 ;
-(void)_passDidBecomeRelevant:(id)arg1 ;
-(NSMutableSet *)relevantPassIdentifiers;
-(id)_networksWithIdentifier:(id)arg1 ;
-(void)_issueRelevancyCallbackWithRelevantNetworks:(id)arg1 notRelevantNetworks:(id)arg2 ;
-(id)relevancyHandler;
-(id)relevantNetworks;
-(void)setRelevancyHandler:(id)arg1 ;
-(id)candidateNetworks;
-(void)setPassLibrary:(PKPassLibrary *)arg1 ;
-(void)setRelevantPassIdentifiers:(NSMutableSet *)arg1 ;
@end

