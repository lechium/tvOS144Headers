/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMClassroomRequestMirroringCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadDestinationName;
	NSString* _payloadDestinationDeviceID;
	NSNumber* _payloadScanTime;
	NSString* _payloadPassword;

}

@property (nonatomic,copy) NSString * payloadDestinationName;                  //@synthesize payloadDestinationName=_payloadDestinationName - In the implementation block
@property (nonatomic,copy) NSString * payloadDestinationDeviceID;              //@synthesize payloadDestinationDeviceID=_payloadDestinationDeviceID - In the implementation block
@property (nonatomic,copy) NSNumber * payloadScanTime;                         //@synthesize payloadScanTime=_payloadScanTime - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                         //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withDestinationName:(id)arg2 withDestinationDeviceID:(id)arg3 withScanTime:(id)arg4 withPassword:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadDestinationName:(NSString *)arg1 ;
-(void)setPayloadDestinationDeviceID:(NSString *)arg1 ;
-(void)setPayloadScanTime:(NSNumber *)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadDestinationName;
-(NSString *)payloadDestinationDeviceID;
-(NSNumber *)payloadScanTime;
-(NSString *)payloadPassword;
@end

