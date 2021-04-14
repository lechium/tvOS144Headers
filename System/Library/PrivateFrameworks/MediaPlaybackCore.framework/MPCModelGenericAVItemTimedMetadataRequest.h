/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, ICStoreRequestContext, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest {

	MPCModelGenericAVItemTimedMetadataResponse* _previousResponse;
	MPModelGenericObject* _genericObject;
	ICStoreRequestContext* _storeRequestContext;
	NSArray* _timedMetadataGroups;

}

@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataResponse * previousResponse;              //@synthesize previousResponse=_previousResponse - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * genericObject;                                     //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext;                         //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timedMetadataGroups;                                       //@synthesize timedMetadataGroups=_timedMetadataGroups - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPCModelGenericAVItemTimedMetadataResponse *)previousResponse;
-(void)setPreviousResponse:(MPCModelGenericAVItemTimedMetadataResponse *)arg1 ;
-(id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3 ;
-(MPModelGenericObject *)genericObject;
-(NSArray *)timedMetadataGroups;
@end

