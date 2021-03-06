/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UABestAppSuggestionManagerResponseProtocol.h>

@protocol UABestAppSuggestionManagerDelegate;
@class UABestAppSuggestion, NSXPCConnection, UABestAppSuggestionManagerProxy, NSString;

@interface UABestAppSuggestionManager : NSObject <UABestAppSuggestionManagerResponseProtocol> {

	id<UABestAppSuggestionManagerDelegate> _delegate;
	BOOL _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	UABestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;
	UABestAppSuggestionManagerProxy* _proxyManager;

}

@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (retain) UABestAppSuggestionManagerProxy * proxyManager;               //@synthesize proxyManager=_proxyManager - In the implementation block
@property (__weak) id<UABestAppSuggestionManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<UABestAppSuggestionManagerDelegate>)delegate;
-(void)setDelegate:(id<UABestAppSuggestionManagerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(unsigned long long)arg2 ;
-(void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3 ;
-(UABestAppSuggestionManagerProxy *)proxyManager;
-(void)startListeningForBestAppSuggestions;
-(void)stopListeningForBestAppSuggestions;
-(void)removeBestAppByUUID:(id)arg1 options:(id)arg2 ;
-(id)bestAppSuggestions:(long long)arg1 ;
-(id)bestAppSuggestion;
-(id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2 ;
-(BOOL)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6 ;
-(void)removeBestApp:(id)arg1 options:(id)arg2 ;
-(BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)fetchAllNearbyAppSuggestions;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1 ;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg1 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2 ;
-(void)launchAppWithBestAppSuggestion:(id)arg1 ;
-(void)setProxyManager:(UABestAppSuggestionManagerProxy *)arg1 ;
@end

