/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSURL, NSString, NSMutableData, NWPathEvaluator, NSUUID, NSURLResponse, NSURLRequest, NSObject;

@interface NEFilterSource : NSObject {

	BOOL _registered;
	BOOL _expectRemediation;
	int _sourceAppPid;
	unsigned _controlUnit;
	long long _status;
	NSURL* _url;
	long long _direction;
	unsigned long long _socketIdentifier;
	NSString* _sourceAppIdentifier;
	NSMutableData* _pendingData;
	NWPathEvaluator* _evaluator;
	NSUUID* _flowUUID;
	unsigned long long _lastPendingDataStartIndex;
	unsigned long long _lastSendDataLength;
	unsigned long long _pendingDataStartIndex;
	unsigned long long _peekIndex;
	unsigned long long _passLength;
	NSURLResponse* _currentResponse;
	NSURLRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _urlAppendString;
	NSString* _remediationURL;
	NSString* _remediationButtonText;
	NSString* _organization;
	NSURL* _parentURL;
	ne_filter_globalsRef _globals;
	unsigned long long _byteInboundCount;
	unsigned long long _byteOutboundCount;
	NSObject*<OS_dispatch_group> _sendDataGroup;

}

@property (assign) BOOL registered;                                           //@synthesize registered=_registered - In the implementation block
@property (retain) NSMutableData * pendingData;                               //@synthesize pendingData=_pendingData - In the implementation block
@property (retain) NWPathEvaluator * evaluator;                               //@synthesize evaluator=_evaluator - In the implementation block
@property (retain) NSUUID * flowUUID;                                         //@synthesize flowUUID=_flowUUID - In the implementation block
@property (assign) unsigned long long lastPendingDataStartIndex;              //@synthesize lastPendingDataStartIndex=_lastPendingDataStartIndex - In the implementation block
@property (assign) unsigned long long lastSendDataLength;                     //@synthesize lastSendDataLength=_lastSendDataLength - In the implementation block
@property (assign) unsigned long long pendingDataStartIndex;                  //@synthesize pendingDataStartIndex=_pendingDataStartIndex - In the implementation block
@property (assign) unsigned long long peekIndex;                              //@synthesize peekIndex=_peekIndex - In the implementation block
@property (assign) unsigned long long passLength;                             //@synthesize passLength=_passLength - In the implementation block
@property (retain) NSURLResponse * currentResponse;                           //@synthesize currentResponse=_currentResponse - In the implementation block
@property (retain) NSURLRequest * currentRequest;                             //@synthesize currentRequest=_currentRequest - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * urlAppendString;                                //@synthesize urlAppendString=_urlAppendString - In the implementation block
@property (retain) NSString * remediationURL;                                 //@synthesize remediationURL=_remediationURL - In the implementation block
@property (retain) NSString * remediationButtonText;                          //@synthesize remediationButtonText=_remediationButtonText - In the implementation block
@property (retain) NSString * organization;                                   //@synthesize organization=_organization - In the implementation block
@property (assign) BOOL expectRemediation;                                    //@synthesize expectRemediation=_expectRemediation - In the implementation block
@property (retain) NSURL * parentURL;                                         //@synthesize parentURL=_parentURL - In the implementation block
@property (retain) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (assign) unsigned controlUnit;                                      //@synthesize controlUnit=_controlUnit - In the implementation block
@property (readonly) ne_filter_globalsRef globals;                            //@synthesize globals=_globals - In the implementation block
@property (assign) unsigned long long byteInboundCount;                       //@synthesize byteInboundCount=_byteInboundCount - In the implementation block
@property (assign) unsigned long long byteOutboundCount;                      //@synthesize byteOutboundCount=_byteOutboundCount - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> sendDataGroup;                //@synthesize sendDataGroup=_sendDataGroup - In the implementation block
@property (readonly) long long status;                                        //@synthesize status=_status - In the implementation block
@property (readonly) long long direction;                                     //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long socketIdentifier;                     //@synthesize socketIdentifier=_socketIdentifier - In the implementation block
@property (copy) NSString * sourceAppIdentifier;                              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (assign) int sourceAppPid;                                          //@synthesize sourceAppPid=_sourceAppPid - In the implementation block
+(BOOL)filterRequired;
-(NSURLRequest *)currentRequest;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)status;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ne_filter_globalsRef)globals;
-(NWPathEvaluator *)evaluator;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(NSString *)sourceAppIdentifier;
-(long long)direction;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(id)initWithDecisionQueue:(id)arg1 ;
-(void)setSourceAppPid:(int)arg1 ;
-(void)willSendRequest:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)receivedResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)receivedData:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)finishedLoadingWithDecisionHandler:(/*^block*/id)arg1 ;
-(id)filterOptions;
-(unsigned)controlUnit;
-(NSString *)remediationButtonText;
-(void)setRemediationButtonText:(NSString *)arg1 ;
-(NSUUID *)flowUUID;
-(void)setFlowUUID:(NSUUID *)arg1 ;
-(NSURL *)parentURL;
-(NSString *)urlAppendString;
-(void)setParentURL:(NSURL *)arg1 ;
-(int)sourceAppPid;
-(unsigned long long)byteInboundCount;
-(unsigned long long)byteOutboundCount;
-(unsigned long long)socketIdentifier;
-(BOOL)generateCryptoSignature:(unsigned char)arg1 length:(unsigned*)arg2 ;
-(void)setRemediationURL:(NSString *)arg1 ;
-(NSString *)remediationURL;
-(void)setExpectRemediation:(BOOL)arg1 ;
-(void)setPeekIndex:(unsigned long long)arg1 ;
-(void)setPassLength:(unsigned long long)arg1 ;
-(unsigned long long)passLength;
-(void)setUrlAppendString:(NSString *)arg1 ;
-(void)connectToFilterUnit:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSURLResponse *)currentResponse;
-(void)prepareAgentForURL:(id)arg1 urlRequest:(id)arg2 urlResponse:(id)arg3 parentURL:(id)arg4 direction:(long long)arg5 flowUUID:(id)arg6 handler:(/*^block*/id)arg7 ;
-(void)setCurrentResponse:(NSURLResponse *)arg1 ;
-(void)setByteOutboundCount:(unsigned long long)arg1 ;
-(void)setControlUnit:(unsigned)arg1 ;
-(void)initGlobals;
-(NSMutableData *)pendingData;
-(unsigned long long)pendingDataStartIndex;
-(void)setPendingDataStartIndex:(unsigned long long)arg1 ;
-(unsigned long long)peekIndex;
-(unsigned long long)lastPendingDataStartIndex;
-(unsigned long long)lastSendDataLength;
-(void)setLastSendDataLength:(unsigned long long)arg1 ;
-(void)setLastPendingDataStartIndex:(unsigned long long)arg1 ;
-(BOOL)sendDataToPluginWithConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mergeURLString:(id)arg1 withAppendString:(id)arg2 ;
-(id)replacementData;
-(void)prepareAgentWithHandler:(/*^block*/id)arg1 ;
-(void)prepareAgentForRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)prepareAgentForResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)sendDataGroup;
-(void)setByteInboundCount:(unsigned long long)arg1 ;
-(void)handleFinishedLoadingWithDecisionHandler:(/*^block*/id)arg1 ;
-(BOOL)expectRemediation;
-(id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3 ;
-(void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithParentURL:(id)arg1 decisionQueue:(id)arg2 ;
-(void)remediateWithDecisionHandler:(/*^block*/id)arg1 ;
-(void)setPendingData:(NSMutableData *)arg1 ;
-(void)setSendDataGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

