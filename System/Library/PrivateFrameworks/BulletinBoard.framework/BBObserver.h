/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBAssertionDelegate.h>

@protocol OS_dispatch_queue, BBObserverDelegate;
@class NSObject, NSMutableDictionary, NSMapTable, BBObserverServerProxy, NSString;

@interface BBObserver : NSObject <BBAssertionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _sectionParametersBySectionID;
	NSMapTable* _bulletinLifeAssertions;
	NSMutableDictionary* _remainingFeedsByBulletinID;
	BBObserverServerProxy* _serverProxy;
	BOOL _isGateway;
	id<BBObserverDelegate> _delegate;
	unsigned long long _observerFeed;
	NSString* _gatewayName;
	unsigned long long _gatewayPriority;

}

@property (assign,nonatomic,__weak) id<BBObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long observerFeed;                     //@synthesize observerFeed=_observerFeed - In the implementation block
@property (nonatomic,copy,readonly) NSString * gatewayName;                       //@synthesize gatewayName=_gatewayName - In the implementation block
@property (nonatomic,readonly) unsigned long long gatewayPriority;                //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)gatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 ;
+(id)observerWithQueue:(id)arg1 calloutQueue:(id)arg2 forGatewayName:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id<BBObserverDelegate>)delegate;
-(void)setDelegate:(id<BBObserverDelegate>)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendResponse:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_queue_invalidate;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(BOOL)arg5 ;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(BOOL)arg5 connection:(id)arg6 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3 ;
-(void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)setObserverFeed:(unsigned long long)arg1 ;
-(void)_queue_updateBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getParametersForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2 ;
-(void)_queue_updateAddBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_queue_updateModifyBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_queue_updateRemoveBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_queue_noteBulletinsLoadedForSectionID:(id)arg1 ;
-(void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestListBulletinsForSectionID:(id)arg1 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getBulletinsWithCompletion:(/*^block*/id)arg1 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)clearBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 ;
-(id)parametersForSectionID:(id)arg1 ;
-(void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)updateBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)removeSection:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)noteBulletinsLoadedForSectionID:(id)arg1 ;
-(unsigned long long)observerFeed;
-(NSString *)gatewayName;
-(unsigned long long)gatewayPriority;
-(id)initWithQueue:(id)arg1 forGateway:(id)arg2 ;
-(id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3 ;
@end

