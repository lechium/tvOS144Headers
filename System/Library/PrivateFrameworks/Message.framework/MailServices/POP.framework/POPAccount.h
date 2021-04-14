/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MailAccount.h>

@class MFActivityMonitor, MFPOP3Connection, NSConditionLock, NSArray, MFLock, NSString;

@interface POPAccount : MailAccount {

	MFActivityMonitor* _fetchMonitor;
	MFPOP3Connection* _connection;
	NSConditionLock* _sharedConnectionCondition;
	unsigned long long _connectionsInUse;
	NSArray* _currentUIDs;
	MFLock* _connectionActivityLock;
	float _connectionTimeout;
	BOOL _fetcherNeedsReset;
	BOOL _hasDoneBackgroundSynchronization;
	BOOL _shouldAttemptAPOP;
	NSString* _oldestMessageUID;
	NSString* _newestMessageUID;
	long long _numberOfKnownUIDs;

}
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(void*)legacyKeychainProtocol;
+(id)saslProfileName;
+(id)csAccountTypeString;
-(void)dealloc;
-(id)serviceName;
-(BOOL)requiresAuthentication;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(void)releaseAllConnections;
-(Class)connectionClass;
-(id)certUIService;
-(id)secureServiceName;
-(BOOL)canGoOffline;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)authenticatedConnection;
-(BOOL)supportsPurge;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(Class)storeClassForMailbox:(id)arg1 ;
-(void)_deleteHook;
-(Class)storeClass;
-(id)mailboxPathExtension;
-(id)_URLScheme;
-(id)statisticsKind;
-(BOOL)canCreateNewMailboxes;
-(BOOL)canMailboxBeRenamed:(id)arg1 ;
-(BOOL)supportsSyncingReadState;
-(BOOL)shouldFetchBodiesWhenMovingToTrash;
-(void)checkInConnection:(id)arg1 currentUIDs:(id)arg2 ;
-(long long)fetchNumNewMessages:(unsigned long long)arg1 oldMessages:(unsigned long long)arg2 preservingUID:(id)arg3 withStore:(id)arg4 ;
-(BOOL)shouldAttemptAPOP;
-(void)setShouldAttemptAPOP:(BOOL)arg1 ;
-(long long)numberOfKnownUIDs;
-(void)setNumberOfKnownUIDs:(long long)arg1 ;
-(id)oldestKnownMessageUID;
-(void)setOldestKnownMessageUID:(id)arg1 ;
-(id)newestKnownMessageUID;
-(void)setNewestKnownMessageUID:(id)arg1 ;
-(int)messageDeletionPolicy;
-(unsigned)delayedMessageDeletionInterval;
-(void)closeCachedConnection;
-(void)closeCachedConnectionForcedOnly:(id)arg1 ;
-(id)_getCachedConnection;
-(id)_createNewConnection;
-(void)scheduleDisconnect;
-(void)closeConnection:(id)arg1 andSaveUIDs:(id)arg2 ;
-(void)setMessageDeletionPolicy:(int)arg1 ;
-(void)setDelayedMessageDeletionInterval:(unsigned)arg1 ;
-(unsigned long long)connectionsInUse;
@end
