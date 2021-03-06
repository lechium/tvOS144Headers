/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSNumber, NSString, NSDictionary;

@interface IDSQuickRelayMetric : NSObject <CUTCoreAnalyticsMetric> {

	NSNumber* _type;
	NSNumber* _subType;
	NSNumber* _duration;
	NSNumber* _resultCode;
	NSNumber* _providerType;
	NSNumber* _transportType;
	NSNumber* _interfaceType;
	NSNumber* _skeEnabled;
	NSNumber* _isInitiator;
	NSNumber* _protocolVersion;
	NSNumber* _retryCount;
	NSString* _serviceName;
	NSString* _subServiceName;
	NSNumber* _participantCount;

}

@property (nonatomic,readonly) NSNumber * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * subType;                         //@synthesize subType=_subType - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * resultCode;                      //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSNumber * providerType;                    //@synthesize providerType=_providerType - In the implementation block
@property (nonatomic,readonly) NSNumber * transportType;                   //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSNumber * interfaceType;                   //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,readonly) NSNumber * skeEnabled;                      //@synthesize skeEnabled=_skeEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * isInitiator;                     //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) NSNumber * protocolVersion;                 //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * retryCount;                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * subServiceName;                  //@synthesize subServiceName=_subServiceName - In the implementation block
@property (nonatomic,readonly) NSNumber * participantCount;                //@synthesize participantCount=_participantCount - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSNumber *)type;
-(NSNumber *)retryCount;
-(NSDictionary *)dictionaryRepresentation;
-(NSNumber *)duration;
-(NSString *)serviceName;
-(NSNumber *)isInitiator;
-(NSNumber *)subType;
-(NSNumber *)transportType;
-(NSNumber *)resultCode;
-(NSNumber *)interfaceType;
-(NSNumber *)skeEnabled;
-(NSNumber *)protocolVersion;
-(NSString *)subServiceName;
-(NSNumber *)providerType;
-(NSNumber *)participantCount;
-(id)initWithType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14 ;
@end

