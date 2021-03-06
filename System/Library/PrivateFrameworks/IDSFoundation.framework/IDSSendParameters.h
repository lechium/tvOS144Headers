/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IDSOutgoingMessageCheckpointTrace, NSDictionary, NSData, NSString, IDSDestination, NSArray, NSNumber, NSDate;

@interface IDSSendParameters : NSObject <NSCopying> {

	NSMutableDictionary* _params;
	IDSOutgoingMessageCheckpointTrace* _checkpointTrace;

}

@property (nonatomic,retain) NSDictionary * message; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDictionary * protobuf; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,retain) NSDictionary * resourceMetadata; 
@property (nonatomic,retain) IDSDestination * destinations; 
@property (nonatomic,retain) NSArray * finalDestinations; 
@property (nonatomic,retain) NSString * accountUUID; 
@property (nonatomic,retain) NSString * mainAccountUUID; 
@property (nonatomic,retain) NSString * localDestinationDeviceUUID; 
@property (assign,nonatomic) BOOL wantsAppAck; 
@property (assign,nonatomic) BOOL encryptPayload; 
@property (assign,nonatomic) BOOL compressPayload; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,retain) NSNumber * pushPriority; 
@property (assign,nonatomic) BOOL localDelivery; 
@property (assign,nonatomic) BOOL requireBluetooth; 
@property (assign,nonatomic) BOOL requireLocalWiFi; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL bypassDuet; 
@property (assign,nonatomic) BOOL fakeMessage; 
@property (assign,nonatomic) BOOL bypassStorage; 
@property (assign,nonatomic) BOOL activityContinuation; 
@property (assign,nonatomic) BOOL nonWaking; 
@property (nonatomic,retain) NSNumber * messageType; 
@property (nonatomic,retain) NSString * queueOneIdentifier; 
@property (assign,nonatomic) BOOL fireAndForget; 
@property (nonatomic,retain) NSArray * duetIdentifiersOverride; 
@property (assign,nonatomic) BOOL forceEncryptionOff; 
@property (nonatomic,retain) NSString * subService; 
@property (nonatomic,retain) NSString * subServiceAccountUUID; 
@property (assign,nonatomic) BOOL allowCloudDelivery; 
@property (assign,nonatomic) BOOL nonCloudWaking; 
@property (assign,nonatomic) BOOL alwaysSkipSelf; 
@property (assign,nonatomic) BOOL disallowRefresh; 
@property (nonatomic,retain) NSString * metricReportIdentifier; 
@property (assign,nonatomic) BOOL liveMessageDelivery; 
@property (assign,nonatomic) BOOL sessionForceInternetInvitation; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (nonatomic,retain) NSString * peerResponseIdentifier; 
@property (assign,nonatomic) BOOL compressed; 
@property (nonatomic,retain) NSString * fromID; 
@property (nonatomic,retain) NSString * originalfromID; 
@property (assign,nonatomic) BOOL useDictAsTopLevel; 
@property (assign,nonatomic) BOOL wantsResponse; 
@property (nonatomic,retain) NSData * dataToEncrypt; 
@property (nonatomic,retain) NSData * messageUUID; 
@property (nonatomic,retain) NSString * alternateCallbackID; 
@property (nonatomic,retain) NSNumber * command; 
@property (nonatomic,retain) NSNumber * commandContext; 
@property (assign,nonatomic) BOOL wantsDeliveryStatus; 
@property (assign,nonatomic) BOOL wantsCertifiedDelivery; 
@property (nonatomic,retain) NSDictionary * deliveryStatusContext; 
@property (nonatomic,retain) NSArray * interestingRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireAllRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireLackOfRegistrationProperties; 
@property (assign,nonatomic) BOOL isProxiedOutgoingMessage; 
@property (nonatomic,retain) NSNumber * dropMessageIndicatorCommand; 
@property (nonatomic,retain) NSNumber * originalTimestamp; 
@property (nonatomic,retain) NSArray * bulkedPayload; 
@property (assign,nonatomic) BOOL daemonDeathResend; 
@property (assign,nonatomic) BOOL bypassSizeCheck; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL enforceRemoteTimeouts; 
@property (nonatomic,retain) NSString * sessionID; 
@property (nonatomic,retain) IDSOutgoingMessageCheckpointTrace * checkpointTrace;              //@synthesize checkpointTrace=_checkpointTrace - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress; 
@property (assign,nonatomic) BOOL ignoreMaxRetryCount; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSData * accessToken; 
@property (assign,nonatomic) BOOL homeKitPayload; 
@property (assign,nonatomic) BOOL disableAliasValidation; 
@property (nonatomic,retain) NSData * groupData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(NSData *)data;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setTimeout:(double)arg1 ;
-(NSDate *)expirationDate;
-(long long)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSString *)resourcePath;
-(void)setData:(NSData *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)timeout;
-(NSNumber *)messageType;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setMessageType:(NSNumber *)arg1 ;
-(void)setCommand:(NSNumber *)arg1 ;
-(NSNumber *)command;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setOriginalTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)originalTimestamp;
-(IDSDestination *)destinations;
-(void)setDestinations:(IDSDestination *)arg1 ;
-(BOOL)compressed;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(BOOL)compressPayload;
-(BOOL)wantsDeliveryStatus;
-(void)setWantsDeliveryStatus:(BOOL)arg1 ;
-(NSDictionary *)deliveryStatusContext;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(BOOL)wantsCertifiedDelivery;
-(void)setWantsCertifiedDelivery:(BOOL)arg1 ;
-(void)setWantsResponse:(BOOL)arg1 ;
-(IDSOutgoingMessageCheckpointTrace *)checkpointTrace;
-(void)setFromID:(NSString *)arg1 ;
-(NSString *)fromID;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(BOOL)expectsPeerResponse;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(BOOL)wantsAppAck;
-(NSString *)peerResponseIdentifier;
-(NSData *)messageUUID;
-(BOOL)wantsResponse;
-(id)dictionaryRepresentationIncludingTrace:(BOOL)arg1 ;
-(void)setCheckpointTrace:(IDSOutgoingMessageCheckpointTrace *)arg1 ;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(NSDictionary *)protobuf;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setResourceMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)resourceMetadata;
-(void)setFinalDestinations:(NSArray *)arg1 ;
-(NSArray *)finalDestinations;
-(void)setAccountUUID:(NSString *)arg1 ;
-(NSString *)accountUUID;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(NSData *)dataToEncrypt;
-(void)setCommandContext:(NSNumber *)arg1 ;
-(NSNumber *)commandContext;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setAlternateCallbackID:(NSString *)arg1 ;
-(NSString *)alternateCallbackID;
-(void)setBulkedPayload:(NSArray *)arg1 ;
-(NSArray *)bulkedPayload;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setRequireAllRegistrationProperties:(NSArray *)arg1 ;
-(NSArray *)requireAllRegistrationProperties;
-(void)setRequireLackOfRegistrationProperties:(NSArray *)arg1 ;
-(NSArray *)requireLackOfRegistrationProperties;
-(void)setInterestingRegistrationProperties:(NSArray *)arg1 ;
-(NSArray *)interestingRegistrationProperties;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(NSString *)queueOneIdentifier;
-(void)setDuetIdentifiersOverride:(NSArray *)arg1 ;
-(NSArray *)duetIdentifiersOverride;
-(void)setSubService:(NSString *)arg1 ;
-(NSString *)subService;
-(void)setSubServiceAccountUUID:(NSString *)arg1 ;
-(NSString *)subServiceAccountUUID;
-(void)setMainAccountUUID:(NSString *)arg1 ;
-(NSString *)mainAccountUUID;
-(void)setOriginalfromID:(NSString *)arg1 ;
-(NSString *)originalfromID;
-(void)setLocalDestinationDeviceUUID:(NSString *)arg1 ;
-(NSString *)localDestinationDeviceUUID;
-(void)setGroupData:(NSData *)arg1 ;
-(NSData *)groupData;
-(void)setMetricReportIdentifier:(NSString *)arg1 ;
-(NSString *)metricReportIdentifier;
-(void)setDropMessageIndicatorCommand:(NSNumber *)arg1 ;
-(NSNumber *)dropMessageIndicatorCommand;
-(void)setPushPriority:(NSNumber *)arg1 ;
-(NSNumber *)pushPriority;
-(void)setUseDictAsTopLevel:(BOOL)arg1 ;
-(BOOL)useDictAsTopLevel;
-(void)setEncryptPayload:(BOOL)arg1 ;
-(BOOL)encryptPayload;
-(void)setCompressPayload:(BOOL)arg1 ;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)wantsProgress;
-(void)setLocalDelivery:(BOOL)arg1 ;
-(BOOL)localDelivery;
-(void)setRequireBluetooth:(BOOL)arg1 ;
-(BOOL)requireBluetooth;
-(void)setRequireLocalWiFi:(BOOL)arg1 ;
-(BOOL)requireLocalWiFi;
-(void)setBypassDuet:(BOOL)arg1 ;
-(BOOL)bypassDuet;
-(void)setFakeMessage:(BOOL)arg1 ;
-(BOOL)fakeMessage;
-(void)setBypassStorage:(BOOL)arg1 ;
-(BOOL)bypassStorage;
-(void)setActivityContinuation:(BOOL)arg1 ;
-(BOOL)activityContinuation;
-(void)setNonWaking:(BOOL)arg1 ;
-(BOOL)nonWaking;
-(void)setNonCloudWaking:(BOOL)arg1 ;
-(BOOL)nonCloudWaking;
-(void)setDaemonDeathResend:(BOOL)arg1 ;
-(BOOL)daemonDeathResend;
-(void)setBypassSizeCheck:(BOOL)arg1 ;
-(BOOL)bypassSizeCheck;
-(void)setFireAndForget:(BOOL)arg1 ;
-(BOOL)fireAndForget;
-(void)setIsProxiedOutgoingMessage:(BOOL)arg1 ;
-(BOOL)isProxiedOutgoingMessage;
-(void)setEnforceRemoteTimeouts:(BOOL)arg1 ;
-(BOOL)enforceRemoteTimeouts;
-(void)setHomeKitPayload:(BOOL)arg1 ;
-(BOOL)homeKitPayload;
-(void)setDisableAliasValidation:(BOOL)arg1 ;
-(BOOL)disableAliasValidation;
-(void)setForceEncryptionOff:(BOOL)arg1 ;
-(BOOL)forceEncryptionOff;
-(void)setAllowCloudDelivery:(BOOL)arg1 ;
-(BOOL)allowCloudDelivery;
-(void)setAlwaysSkipSelf:(BOOL)arg1 ;
-(BOOL)alwaysSkipSelf;
-(void)setDisallowRefresh:(BOOL)arg1 ;
-(BOOL)disallowRefresh;
-(void)setLiveMessageDelivery:(BOOL)arg1 ;
-(BOOL)liveMessageDelivery;
-(void)setSessionForceInternetInvitation:(BOOL)arg1 ;
-(BOOL)sessionForceInternetInvitation;
-(void)setIgnoreMaxRetryCount:(BOOL)arg1 ;
-(BOOL)ignoreMaxRetryCount;
@end

