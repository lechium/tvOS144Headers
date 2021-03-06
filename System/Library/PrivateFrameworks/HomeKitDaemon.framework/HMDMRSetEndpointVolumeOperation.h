/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface;
@class NSNumber, NSArray, NSError, MPCAssistantDiscovery, NSString;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFObject> {

	NSNumber* _volume;
	NSArray* _routeIDs;
	NSError* _partialExecutionError;
	MPCAssistantDiscovery* _discovery;
	id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;

}

@property (nonatomic,retain) MPCAssistantDiscovery * discovery;                                                               //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) NSError * partialExecutionError;                                                                 //@synthesize partialExecutionError=_partialExecutionError - In the implementation block
@property (nonatomic,retain) id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface;              //@synthesize externalObjectInterface=_externalObjectInterface - In the implementation block
@property (nonatomic,readonly) NSNumber * volume;                                                                             //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routeIDs;                                                                       //@synthesize routeIDs=_routeIDs - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(NSString *)description;
-(void)main;
-(NSString *)shortDescription;
-(NSNumber *)volume;
-(NSString *)privateDescription;
-(MPCAssistantDiscovery *)discovery;
-(void)setDiscovery:(MPCAssistantDiscovery *)arg1 ;
-(NSArray *)attributeDescriptions;
-(BOOL)cancelOnSetup;
-(id<HMDMRSetEndpointVolumeOperationExternalObjectInterface>)externalObjectInterface;
-(NSArray *)routeIDs;
-(id)discoverRemoteControlEndpointsForUIDs:(id)arg1 ;
-(void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg1 ;
-(id)connectToEndpoint:(id)arg1 connection:(id)arg2 ;
-(id)getVolumeCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2 ;
-(id)setVolumeOnEndpoint:(id)arg1 outputDeviceUID:(id)arg2 ;
-(void)setPartialExecutionError:(NSError *)arg1 ;
-(id)initWithRouteIDs:(id)arg1 volume:(id)arg2 ;
-(NSError *)partialExecutionError;
-(void)setExternalObjectInterface:(id<HMDMRSetEndpointVolumeOperationExternalObjectInterface>)arg1 ;
@end

