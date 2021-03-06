/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocalAuthentication/LocalAuthentication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol LAPrearmContextXPC;
@class LAClient, NSNumber, NSData, NSString;

@interface LAContext : NSObject <NSSecureCoding> {

	LAClient* _client;
	id<LAPrearmContextXPC> _prearmContext;
	unsigned _instanceId;
	NSNumber* _maxBiometryFailures;
	NSData* _evaluatedPolicyDomainState;
	double _touchIDAuthenticationAllowableReuseDuration;
	NSString* _localizedReason;
	NSData* _externalizedContext;
	NSNumber* _touchIDAuthenticationRetryLimit;

}

@property (nonatomic,retain) NSData * externalizedContext;                                    //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (nonatomic,retain) NSData * evaluatedPolicyDomainState;                             //@synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState - In the implementation block
@property (nonatomic,retain) NSNumber * touchIDAuthenticationRetryLimit;                      //@synthesize touchIDAuthenticationRetryLimit=_touchIDAuthenticationRetryLimit - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate; 
@property (nonatomic,readonly) unsigned instanceId;                                           //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@property (nonatomic,retain) NSNumber * maxBiometryFailures;                                  //@synthesize maxBiometryFailures=_maxBiometryFailures - In the implementation block
@property (nonatomic,copy) NSString * localizedCancelTitle; 
@property (assign,nonatomic) double touchIDAuthenticationAllowableReuseDuration;              //@synthesize touchIDAuthenticationAllowableReuseDuration=_touchIDAuthenticationAllowableReuseDuration - In the implementation block
@property (nonatomic,copy) NSString * localizedReason;                                        //@synthesize localizedReason=_localizedReason - In the implementation block
@property (assign,nonatomic) BOOL interactionNotAllowed; 
+(BOOL)supportsSecureCoding;
+(unsigned)newCommandId;
+(unsigned)newInstanceId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(id)initWithExternalizedContext:(id)arg1 ;
-(NSData *)externalizedContext;
-(id)initWithExternalizedContext:(id)arg1 userSession:(unsigned*)arg2 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)uuid;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(unsigned)instanceId;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)credentialOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)retryProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(void)bootstrapServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<LAUIDelegate>)uiDelegate;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(void)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(id)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 error:(id*)arg5 ;
-(id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2 ;
-(id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id*)arg2 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_evaluateAccessControl:(SecAccessControlRef)arg1 operation:(id)arg2 options:(id)arg3 log:(long long)arg4 cid:(unsigned)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned)arg4 error:(id*)arg5 ;
-(void)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(id)_serverPropertyValueForOption:(long long)arg1 log:(long long)arg2 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 log:(long long)arg3 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(id)initWithUIDelegate:(id)arg1 ;
-(id)_hashWithBundleIdentifier:(id)arg1 ;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(id)evaluationMechanismsForAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 error:(id*)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)credentialOfType:(long long)arg1 error:(id*)arg2 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(BOOL)checkContextValidWithError:(id*)arg1 ;
-(NSString *)localizedFallbackTitle;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedCancelTitle;
-(void)setLocalizedCancelTitle:(NSString *)arg1 ;
-(id)optionNotInteractive;
-(void)setOptionNotInteractive:(id)arg1 ;
-(id)optionTimeout;
-(void)setOptionTimeout:(id)arg1 ;
-(id)optionCallerName;
-(void)setOptionCallerName:(id)arg1 ;
-(id)optionCallerPID;
-(void)setOptionCallerPID:(id)arg1 ;
-(BOOL)interactionNotAllowed;
-(void)setInteractionNotAllowed:(BOOL)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(NSString *)localizedReason;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
@end

