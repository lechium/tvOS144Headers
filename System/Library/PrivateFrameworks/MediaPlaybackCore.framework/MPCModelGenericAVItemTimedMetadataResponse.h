/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelResponse.h>

@class MPModelResponse, NSData, MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {

	MPModelResponse* _personalizationResponse;
	BOOL _firstResponse;
	BOOL _finalResponse;
	NSData* _adamIDData;
	MPCModelGenericAVItemTimedMetadataStreamFields* _streamFields;
	MPSectionedCollection* _unpersonalizedContentDescriptors;

}

@property (assign,getter=isFirstResponse,nonatomic) BOOL firstResponse;                                  //@synthesize firstResponse=_firstResponse - In the implementation block
@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                                  //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,copy) NSData * adamIDData;                                                          //@synthesize adamIDData=_adamIDData - In the implementation block
@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataStreamFields * streamFields;              //@synthesize streamFields=_streamFields - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * unpersonalizedContentDescriptors;                     //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
-(void)dealloc;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setUnpersonalizedContentDescriptors:(MPSectionedCollection *)arg1 ;
-(BOOL)isFirstResponse;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg1 ;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 firstResponse:(BOOL)arg3 finalResponse:(BOOL)arg4 ;
-(void)setFirstResponse:(BOOL)arg1 ;
-(NSData *)adamIDData;
-(void)setAdamIDData:(NSData *)arg1 ;
-(MPCModelGenericAVItemTimedMetadataStreamFields *)streamFields;
-(void)setStreamFields:(MPCModelGenericAVItemTimedMetadataStreamFields *)arg1 ;
@end

