/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPStoreModelPlaybackPositionBuilder, MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPPropertySet* _storeAssetProperties;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	SCD_Struct_MP73 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(id)genericObjectForStorePlatformMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedProperties;
@end

