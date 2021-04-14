/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class IDSService, IDSSession, CUIDSReadRequest, NSObject, CUIDSWriteRequest, NSString;

@interface CUIDSSession : NSObject <IDSServiceDelegate, IDSSessionDelegate> {

	IDSService* _idsService;
	IDSSession* _idsSession;
	BOOL _idsInviting;
	int _idsSock;
	CUIDSReadRequest* _readRequestList;
	id* _readRequestNext;
	CUIDSReadRequest* _readRequestCurr;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readSuspended;
	CUIDSWriteRequest* _writeRequestList;
	id* _writeRequestNext;
	CUIDSWriteRequest* _writeRequestCurr;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeSuspended;
	LogCategory* _ucat;
	BOOL _idsEncryption;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _idsDestination;
	NSString* _idsInviteToken;
	NSString* _idsServiceName;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * idsDestination;                                 //@synthesize idsDestination=_idsDestination - In the implementation block
@property (assign,nonatomic) BOOL idsEncryption;                                      //@synthesize idsEncryption=_idsEncryption - In the implementation block
@property (nonatomic,copy) NSString * idsInviteToken;                                 //@synthesize idsInviteToken=_idsInviteToken - In the implementation block
@property (nonatomic,copy) NSString * idsServiceName;                                 //@synthesize idsServiceName=_idsServiceName - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)_handleError:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5 ;
-(int)_setupSocket;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processReadRequests;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processWriteRequests;
-(NSString *)idsDestination;
-(void)setIdsDestination:(NSString *)arg1 ;
-(BOOL)idsEncryption;
-(void)setIdsEncryption:(BOOL)arg1 ;
-(NSString *)idsInviteToken;
-(void)setIdsInviteToken:(NSString *)arg1 ;
-(NSString *)idsServiceName;
-(void)setIdsServiceName:(NSString *)arg1 ;
@end

