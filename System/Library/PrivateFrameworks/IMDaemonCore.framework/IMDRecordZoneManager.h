/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class CKRecordZoneID, CKRecordZone, IMDCKDatabaseManager, APSConnection, NSString;

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate> {

	CKRecordZoneID* _chatRecordZoneID;
	CKRecordZone* _chatRecordZone;
	CKRecordZoneID* _attachmentRecordZoneID;
	CKRecordZone* _attachmentRecordZone;
	CKRecordZoneID* _messageRecordZoneID;
	CKRecordZone* _messageRecordZone;
	CKRecordZoneID* _analyticRecordZoneID;
	CKRecordZone* _analyticRecordZone;
	CKRecordZoneID* _deDupeSaltZoneID;
	CKRecordZone* _deDupeSaltRecordZone;
	CKRecordZoneID* _metricZoneID;
	IMDCKDatabaseManager* _dataBaseManager;
	APSConnection* _pushConnection;

}

@property (nonatomic,retain) IMDCKDatabaseManager * dataBaseManager;                 //@synthesize dataBaseManager=_dataBaseManager - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                         //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * chatRecordZoneID;                    //@synthesize chatRecordZoneID=_chatRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * chatRecordZone;                        //@synthesize chatRecordZone=_chatRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * attachmentRecordZoneID;              //@synthesize attachmentRecordZoneID=_attachmentRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * attachmentRecordZone;                  //@synthesize attachmentRecordZone=_attachmentRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * messageRecordZoneID;                 //@synthesize messageRecordZoneID=_messageRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * messageRecordZone;                     //@synthesize messageRecordZone=_messageRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * analyticRecordZoneID;                //@synthesize analyticRecordZoneID=_analyticRecordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * analyticRecordZone;                    //@synthesize analyticRecordZone=_analyticRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * deDupeSaltZoneID;                    //@synthesize deDupeSaltZoneID=_deDupeSaltZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordZone * deDupeSaltRecordZone;                  //@synthesize deDupeSaltRecordZone=_deDupeSaltRecordZone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * metricZoneID;                        //@synthesize metricZoneID=_metricZoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)deleteChatZone;
-(void)deleteAttachmentZone;
-(void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CKRecordZoneID *)deDupeSaltZoneID;
-(CKRecordZoneID *)metricZoneID;
-(CKRecordZoneID *)analyticRecordZoneID;
-(long long)derivedQualityOfService;
-(void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)ckUtilities;
-(void)createAnalyticZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setUpPushConnection;
-(APSConnection *)pushConnection;
-(void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2 ;
-(IMDCKDatabaseManager *)dataBaseManager;
-(void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_createRecordZone:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_checkRecordZoneExists:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_deleteZone:(id)arg1 forDatabase:(id)arg2 ;
-(CKRecordZone *)chatRecordZone;
-(void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_deleteZone:(id)arg1 ;
-(CKRecordZone *)attachmentRecordZone;
-(CKRecordZone *)messageRecordZone;
-(CKRecordZone *)analyticRecordZone;
-(CKRecordZone *)deDupeSaltRecordZone;
-(void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_deleteAllZonesForDatabase:(id)arg1 ;
-(CKRecordZoneID *)chatRecordZoneID;
-(CKRecordZoneID *)messageRecordZoneID;
-(CKRecordZoneID *)attachmentRecordZoneID;
-(void)createChatZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createAttachmentZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createMessageZoneIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)deleteMessageZone;
-(void)deleteAnalyticZone;
-(void)deleteDeDupeSaltZone;
-(void)deleteAllZones;
-(void)fetchChatZoneToCheckManateeStatus:(/*^block*/id)arg1 ;
-(void)setDataBaseManager:(IMDCKDatabaseManager *)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
@end

