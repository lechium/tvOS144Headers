/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, LSInstallProgressList, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSArray, NSMutableArray, NSString;

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _observers;
	LSInstallProgressList* _progresses;
	NSMutableSet* _publishingStrings;
	NSMutableDictionary* _installIndexes;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableSet* _inactiveInstalls;
	NSMutableDictionary* _installTypes;
	NSObject*<OS_dispatch_queue> _installControlsQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSArray* _journalledNotificationsToReplay;
	NSMutableArray* _startupJournalledNotifications;
	BOOL _replayingJournalToNewClients;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(int)notificationTypeForOperation:(unsigned long long)arg1 ;
+(void)beginListening;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendNotification:(id)arg1 ForPlugins:(id)arg2 ;
-(void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(BOOL)arg3 ;
-(void)installationFailedForApplication:(id)arg1 ;
-(void)performJournalRecovery;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)_LSFindPlaceholderApplications;
-(void)dispatchJournalledNotificationsToObserver:(id)arg1 ;
-(void)rebuildInstallIndexes;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(BOOL)arg3 ;
-(SEL)observerSelectorForNotification:(int)arg1 ;
-(void)_placeholderIconUpdatedForApp:(id)arg1 ;
-(void)_placeholdersUninstalled:(id)arg1 ;
-(id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
-(id)loadJournalledNotificationsFromDisk;
-(void)dispatchJournalledNotificationsToConnectedClients;
-(void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3 ;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 ;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(/*^block*/id)arg2 ;
@end

