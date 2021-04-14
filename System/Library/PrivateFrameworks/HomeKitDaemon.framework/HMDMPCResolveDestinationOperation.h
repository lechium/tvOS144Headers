/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@class MPCAssistantMutableRemoteControlDestination, NSArray, NSString;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFObject> {

	BOOL _forceSingleGroup;
	MPCAssistantMutableRemoteControlDestination* _resolvedDestination;
	NSArray* _hashedRouteIDs;
	/*^block*/id _resolveDestinationCompletionBlock;
	long long _mediaApplicationDestination;

}

@property (copy) id resolveDestinationCompletionBlock;                                                       //@synthesize resolveDestinationCompletionBlock=_resolveDestinationCompletionBlock - In the implementation block
@property (nonatomic,retain) MPCAssistantMutableRemoteControlDestination * resolvedDestination;              //@synthesize resolvedDestination=_resolvedDestination - In the implementation block
@property (nonatomic,readonly) long long mediaApplicationDestination;                                        //@synthesize mediaApplicationDestination=_mediaApplicationDestination - In the implementation block
@property (nonatomic,readonly) BOOL forceSingleGroup;                                                        //@synthesize forceSingleGroup=_forceSingleGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashedRouteIDs;                                                //@synthesize hashedRouteIDs=_hashedRouteIDs - In the implementation block
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
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(long long)mediaApplicationDestination;
-(NSArray *)hashedRouteIDs;
-(id)resolveDestinationCompletionBlock;
-(MPCAssistantMutableRemoteControlDestination *)resolvedDestination;
-(id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 forceSingleGroup:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setResolvedDestination:(MPCAssistantMutableRemoteControlDestination *)arg1 ;
-(void)setResolveDestinationCompletionBlock:(id)arg1 ;
-(BOOL)forceSingleGroup;
@end

