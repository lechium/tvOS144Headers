/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {

	MPModelStorePlatformMetadataGenericObjectBuilder* _storePlatformBuilder;
	SCD_Struct_MP6 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(MPPropertySet *)requestedProperties;
-(id)genericObjectForRadioStationTrack:(id)arg1 containerUniqueID:(id)arg2 userIdentity:(id)arg3 ;
@end

