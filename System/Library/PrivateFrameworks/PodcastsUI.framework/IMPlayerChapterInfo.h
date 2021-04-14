/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PodcastsUI/PodcastsUI-Structs.h>
@class UIImage, NSString, NSURL, NSData;

@interface IMPlayerChapterInfo : NSObject {

	UIImage* _artwork;
	int _type;
	int _metadataType;
	NSString* _title;
	NSURL* _externalURL;
	NSData* _artworkData;
	double _duration;
	double _time;
	SCD_Struct_IM9 _mediaTimeRange;
	SCD_Struct_IM9 _assetTimeRange;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * externalURL;                        //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,retain) NSData * artworkData;                       //@synthesize artworkData=_artworkData - In the implementation block
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                                //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 mediaTimeRange;              //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM9 assetTimeRange;              //@synthesize assetTimeRange=_assetTimeRange - In the implementation block
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int metadataType;                           //@synthesize metadataType=_metadataType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)time;
-(void)setDuration:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(UIImage *)artwork;
-(NSData *)artworkData;
-(int)metadataType;
-(void)setMetadataType:(int)arg1 ;
-(NSURL *)externalURL;
-(void)setArtworkData:(NSData *)arg1 ;
-(SCD_Struct_IM9)mediaTimeRange;
-(SCD_Struct_IM9)assetTimeRange;
-(void)setExternalURL:(NSURL *)arg1 ;
-(void)setMediaTimeRange:(SCD_Struct_IM9)arg1 ;
-(void)setAssetTimeRange:(SCD_Struct_IM9)arg1 ;
@end

